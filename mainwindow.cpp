#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QStandardPaths>
#include "dialog.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFile file(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+"\\toDoFile.txt");
    if(!file.open(QIODevice::ReadWrite)){
        QMessageBox::information(0,"error",file.errorString());
    }
    QTextStream in(&file);
    while(!in.atEnd()){
        QListWidgetItem* item=new QListWidgetItem(in.readLine(),ui->listWidget);
        ui->listWidget->addItem(item);
        item->setFlags(item->flags() | Qt::ItemIsEditable);
    }
    file.close();
}

MainWindow::~MainWindow()
{
    delete ui;
    QFile file(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+"\\toDoFile.txt");
    if(!file.open(QIODevice::ReadWrite)){
        QMessageBox::information(0,"error",file.errorString());
    }
    QTextStream out(&file);
    for (int i = 0; i < ui->listWidget->count(); ++i) {
        out<<ui->listWidget->item(i)->text()<<"\n";
    }
    file.close();

}

void MainWindow::on_add_clicked()
{
    QListWidgetItem* item= new QListWidgetItem(ui->txtTask->text(),ui->listWidget);
    ui->listWidget->addItem(item);
    ui->txtTask->clear();
    item->setFlags(item->flags()| Qt::ItemIsEditable);
    ui->txtTask->setFocus();
}


void MainWindow::on_remove_clicked()
{
    QListWidgetItem* item = ui->listWidget->takeItem(ui->listWidget->currentRow());
    delete item;
}


void MainWindow::on_removeAll_clicked()
{
    ui->listWidget->clear();
}


void MainWindow::on_pushButton_clicked()
{
    Dialog* mydia= new Dialog(this,"Hello");
    mydia->show();
    connect(mydia,&Dialog::dataAvailable,this,&MainWindow::onDataAvailable);
}

void MainWindow::onDataAvailable(const QString &data){
    ui->pushButton->setText(data);
}
