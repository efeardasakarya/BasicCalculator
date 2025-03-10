#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QWidget>
#include <QKeyEvent>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QLabel>
#include <QDebug>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int num1;
    int num2;
    bool ok1=false;
    bool ok2=false;
    int result=0;
    bool eventFilter(QObject *obj, QEvent *event);
    bool isInput=false;
    char currentIslem;
    bool newResult = false;
    void handleCalculation(char islem);
    void onNumberButtonClicked();

private slots:


    void on_Plusbutton_clicked();

    void on_MinusButton_clicked();

    void on_MultiplyButton_clicked();

    void on_DivideButton_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
