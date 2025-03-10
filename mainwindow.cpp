#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->NumberInput->installEventFilter(this);

    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            QLayoutItem* item = ui->NumbersGrid->itemAtPosition(i,j);
            QPushButton* button = qobject_cast<QPushButton*>(item->widget());

            connect(button, &QPushButton::clicked, this, &MainWindow::onNumberButtonClicked);

        }

    }



}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (obj == ui->NumberInput && event->type() == QEvent::KeyPress)
    {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);


        if (keyEvent->key() >= Qt::Key_1 && keyEvent->key() <= Qt::Key_9)
        {
            if(isInput)
            {
                ui->NumberInput->clear();
                qDebug() << "Temizledim";
                isInput=false;
            }

            else
            {

            }
        }

        if(keyEvent->key() == Qt::Key_Return )
        {
            qDebug( ) << "Entera bastım" ;
            if(ok1)
            {
                if( ui->NumberInput->toPlainText().toInt() )
                {
                    handleCalculation(currentIslem);
                    qDebug() << "1111";
                }

            }
            return true;
        }

        if(keyEvent->key() ==  Qt::Key_Plus)
        {
            handleCalculation('+');
            currentIslem = '+';
            return true;
        }

        if(keyEvent->key() ==  Qt::Key_Minus)
        {
            handleCalculation('-');
            currentIslem = '-';
            return true;
        }

        if(keyEvent->key() ==  Qt::Key_Asterisk)
        {
            handleCalculation('*');
            currentIslem = '*';
            return true;
        }

        if(keyEvent->key() ==  Qt::Key_Slash)
        {
            handleCalculation('/');
            currentIslem = '/';
            return true;
        }







    }





    // Varsayılan olay işleme
    return QMainWindow::eventFilter(obj, event);
}

void MainWindow::handleCalculation(char islem)
{

    if(newResult)
    {
        ui->NumberInput->clear();
        newResult = false;
    }

    if(ui->NumberInput->toPlainText().toInt() )
    {
        qDebug() << "Çalıştım";
        if(ok1)
        {
            switch (currentIslem)
            {
            case '+':
            result = ui->NumberInput->toPlainText().toInt() + num1 ;
                break;
            case '-':
            result = num1 - ui->NumberInput->toPlainText().toInt()  ;
                break;
            case '*':
             result = ui->NumberInput->toPlainText().toInt() * num1 ;
                break;
            case '/':
             result = num1 / ui->NumberInput->toPlainText().toInt()  ;
                break;

            }
            ui->NumberInput->setPlainText(   QString::number(result)    );
            newResult = true;
            num1=result;
        }
        else
        {
            num1 = ui->NumberInput->toPlainText().toInt(&ok1);
            ui->NumberInput->clear();
        }


    }

}

void MainWindow::on_Plusbutton_clicked()
{
    handleCalculation('+');
    currentIslem = '+';

}


void MainWindow::on_MinusButton_clicked()
{
    handleCalculation('-');
    currentIslem = '-';
}


void MainWindow::on_MultiplyButton_clicked()
{
    handleCalculation('*');
    currentIslem = '*';
}


void MainWindow::on_DivideButton_clicked()
{
    handleCalculation('/');
    currentIslem = '/';
}

void MainWindow::onNumberButtonClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());

        ui->NumberInput->insertPlainText(clickedButton->text());

}


