#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_storeButton_clicked(){
    if((ui->nameAnalyser->text() != "") && (ui->targetAnalysis->text() != "")
            && (ui->stopLossAnalysis->text() != "") && (ui->marketBox->currentIndex() != 0)
            && (ui->typeAnalysisBox->currentIndex() != 0) && (ui->stockBox->currentIndex() != 0)){
        ui->labelDate->setText("Success!");
    }
    else{
        ui->labelDate->setText("Fail!");
    }
}
