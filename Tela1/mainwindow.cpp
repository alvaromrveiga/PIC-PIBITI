#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap logoCEUB(":/Imagens/logoCEUB.png");
    ui->lbLogo->setPixmap(logoCEUB);
    ui->lbPastaTumaA->setStyleSheet("background-image: url(:/Imagens/pasta.png);");
}

MainWindow::~MainWindow()
{
    delete ui;
}
