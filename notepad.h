/*
 * Name: Jahmur Lopez
 * Student ID: 2015112808
 * Class: Graphical User Interface
 * Title: CMPS2212 Assignment 3
 * Due Date: 23/03/2022
 * Due Time: 11:59 pm
 * Lecture: Thiana Vasquez
 * Class Section: 1
*/


#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <QPrinter>
#include <QPrintDialog>
#include <QFontDialog>
#include <QtCharts>
#include <QBarSeries>
#include <QRegularExpression>

#include <fstream>
using std::fstream;

#include<ctime>
using std::ctime;

#include "word.h"
#include "wordfrequencydialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Notepad; }
QT_END_NAMESPACE

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    Notepad(QWidget *parent = nullptr);
    ~Notepad();

private slots:
    void newDocument();
    void open();
    void save();
    void saveAs();
    void exit();
    void print();
    void saveToPDF();
    void setFont();
    void about();
    void StatisticalFile();

    void toUpperCase();
    void toLowerCase();
    void countWords();

    void markChange();
    void showGraph();    // Test #1


private:
    Ui::Notepad *ui;
    QString currentFile;
    QString savedText;
};
#endif // NOTEPAD_H
