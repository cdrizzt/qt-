#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_pushButton_8_clicked()
{
    QString qstr;
    qstr=ui->textEdit_4->toPlainText();
    qstr.append("\n");
    qDebug()<<qstr;
    ui->textEdit_3->moveCursor(QTextCursor::End);
    ui->textEdit_3->insertPlainText(qstr);
    ui->textEdit_3->moveCursor(QTextCursor::End);
}
