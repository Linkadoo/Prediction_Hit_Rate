#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "storager.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Storager *store;
private:
    Ui::MainWindow *ui;

public slots:
    void onPrint(QString);
private slots:
    void on_storeButton_clicked();
    void on_testButton1_clicked();
    void on_testButton2_clicked();
};

#endif // MAINWINDOW_H
