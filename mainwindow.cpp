#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    store = new Storager();
    ui->setupUi(this);
    connect(store, SIGNAL(print(const QString)), this, SLOT(onPrint(QString)));
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

void MainWindow::on_testButton1_clicked(){
    int temp = store->analysts.size();
    MainWindow::onPrint(QString::fromStdString(std::to_string(temp)));
}
void MainWindow::on_testButton2_clicked(){
    int temp = store->analysts[0]->analyses.size();
    MainWindow::onPrint(QString::fromStdString(std::to_string(temp)));
}


void MainWindow::onPrint(QString str){
    ui->labelStopLoss->setText(str);
}
