#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Calculadora");//cambiar el nombre de la ventana
    ui->resultado->setText("0.0");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_suma_clicked()
{
    ui->resultado->setText(QString::number(ui->N1->value()+ui->N2->value()));//se realiza suma de numero

}

void MainWindow::on_resta_clicked()
{
    ui->resultado->setText(QString::number(ui->N1->value()-ui->N2->value()));//se realiza resta de numero
}

void MainWindow::on_mul_clicked()
{
    ui->resultado->setText(QString::number(ui->N1->value()*ui->N2->value()));//se realiza multi de numero
}

void MainWindow::on_div_clicked()
{
    ui->resultado->setText(QString::number(ui->N1->value()/ui->N2->value()));//se realiza div de numero
}
