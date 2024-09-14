#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString login = ui -> login -> text();
    QString password = ui -> password -> text();
    if (login != "" && password != ""){
        hide();
        window = new SecondWindow(this);
        window -> show();
    }
    else{
        QMessageBox::warning(this,"Авторизация","Поля должны быть не пустыми.");
    }
}

