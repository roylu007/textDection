#ifndef TEXTDECTIONQT2_H
#define TEXTDECTIONQT2_H

#include <QImage>
#include <QFileDialog>
#include <QTimer>
#include <QtWidgets/QWidget>
#include <qtextcodec.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include <cstdlib>
#include "tesseract\baseapi.h"
#include "tesseract\strngs.h"
#pragma  comment(lib,"libtesseract302.lib")
#pragma  comment(lib, "liblept168.lib")  

#define _CRT_SECURE_NO_DEPRECATE
#include "ui_textdectionqt2.h"

using namespace std;
using namespace cv;

class textDectionQt2 : public QWidget
{
	Q_OBJECT

public:
	textDectionQt2(QWidget *parent = 0);
	~textDectionQt2();
	void displayMat(cv::Mat mat);
	void textDectionTest();
	void displayResult(const string str);

private:
	Ui::textDectionQt2Class ui;
	std::string filepath;
	Mat image;

private slots:
	void uploadButton_clicked();
	void testButton_clicked();
};

#endif // TEXTDECTIONQT2_H
