#include "textdectionqt2.h"

textDectionQt2::textDectionQt2(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.uploadButton, SIGNAL(clicked()), this, SLOT(uploadButton_clicked()));
	QObject::connect(ui.testButton, SIGNAL(clicked()), this, SLOT(testButton_clicked()));
}

textDectionQt2::~textDectionQt2()
{

}

void textDectionQt2::uploadButton_clicked(){
	QString filename = QFileDialog::getOpenFileName(this, tr("Open Image"), "", tr("Image File(*.bmp *.jpg *.jpeg *.png)"));
	filepath = filename.toStdString();
	QTextCodec *code = QTextCodec::codecForName("gb18030");
	std::string name = code->fromUnicode(filename).data();
	if (!name.size()) return;
	image = cv::imread(name);
	displayMat(image);
}
void textDectionQt2::testButton_clicked(){
	textDectionTest();
}
void textDectionQt2::textDectionTest(){
    const char * str = filepath.c_str();
	//const char* str = "C:/Users/LuDa/Desktop/Error Screenshots for EPM/BPC/EPM-BPC-NW-ADM_1.png";
	tesseract::TessBaseAPI  api;
	api.Init(NULL, "eng", tesseract::OEM_DEFAULT);
	api.SetVariable("tessedit_char_whitelist", "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz,.?!:*/+-;_-=()");

	STRING text_out;
	std::string res=filepath;
	if (!api.ProcessPages(str, NULL, 0, &text_out))
	{
		return;
	}
	res = text_out.string();
	displayResult(res);
	//printf(text_out.string());
}
void textDectionQt2::displayMat(cv::Mat mat)
{
	cv::Mat rgb;
	if (mat.cols > mat.rows){
		cv::resize(mat, mat, cv::Size(), ui.imageShowLabel->width()*1.0 / mat.cols, ui.imageShowLabel->width()*1.0 / mat.cols);
	}
	else{
		cv::resize(mat, mat, cv::Size(), ui.imageShowLabel->height()*1.0 / mat.rows, ui.imageShowLabel->height()*1.0 / mat.rows);
	}
	//cv::resize(mat, mat, cv::Size(), ui.imageShowLabel->width()*1.0 / mat.cols, ui.imageShowLabel->height()*1.0 / mat.rows);
	QImage img;
	if (mat.channels() == 3)
	{
		cv::cvtColor(mat, rgb, CV_BGR2RGB);
		img = QImage((const uchar*)(rgb.data), rgb.cols, rgb.rows, rgb.cols*rgb.channels(), QImage::Format_RGB888);
	}
	else
	{
		img = QImage((const uchar*)(mat.data), mat.cols, mat.rows, mat.cols*mat.channels(), QImage::Format_Indexed8);
	}
	ui.imageShowLabel->setPixmap(QPixmap::fromImage(img));
	ui.imageShowLabel->resize(ui.imageShowLabel->pixmap()->size());
	ui.imageShowLabel->show();
}

void textDectionQt2::displayResult(const string str){
	if (!str.size()) QString content = QString::fromStdString("no");
	QString content = QString::fromStdString(str);
	ui.resultTextEdit->setText(content);
}
