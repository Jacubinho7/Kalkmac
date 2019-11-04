#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "macierz.h"

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

void MainWindow::on_suma_clicked()
{
    //zczytanie macierzy A
    int a_0 = ui->a_0->toPlainText().toInt();
    int a_1 = ui->a_1->toPlainText().toInt();
    int a_2 = ui->a_2->toPlainText().toInt();
    int a_3 = ui->a_3->toPlainText().toInt();
    int a_4 = ui->a_4->toPlainText().toInt();
    int a_5 = ui->a_5->toPlainText().toInt();
    int a_6 = ui->a_6->toPlainText().toInt();
    int a_7 = ui->a_7->toPlainText().toInt();
    int a_8 = ui->a_8->toPlainText().toInt();

    //zczytaj macierz B
    int b_0 = ui->b_0->toPlainText().toInt();
    int b_1 = ui->b_1->toPlainText().toInt();
    int b_2 = ui->b_2->toPlainText().toInt();
    int b_3 = ui->b_3->toPlainText().toInt();
    int b_4 = ui->b_4->toPlainText().toInt();
    int b_5 = ui->b_5->toPlainText().toInt();
    int b_6 = ui->b_6->toPlainText().toInt();
    int b_7 = ui->b_7->toPlainText().toInt();
    int b_8 = ui->b_8->toPlainText().toInt();

    //oblicz
    int c_0 = a_0 + b_0;
    int c_1 = a_1 + b_1;
    int c_2 = a_2 + b_2;
    int c_3 = a_3 + b_3;
    int c_4 = a_4 + b_4;
    int c_5 = a_5 + b_5;
    int c_6 = a_6 + b_6;
    int c_7 = a_7 + b_7;
    int c_8 = a_8 + b_8;

    //pokaz w C (1) konwertowanie oblicz do wypisywalnej postaci
    QString c_0_text = QString::number(c_0);
    QString c_1_text = QString::number(c_1);
    QString c_2_text = QString::number(c_2);
    QString c_3_text = QString::number(c_3);
    QString c_4_text = QString::number(c_4);
    QString c_5_text = QString::number(c_5);
    QString c_6_text = QString::number(c_6);
    QString c_7_text = QString::number(c_7);
    QString c_8_text = QString::number(c_8);
    //pokaz w C (2) wypisywanie zmiennej do macierzy C
    ui->c_0->setText(c_0_text);
    ui->c_1->setText(c_1_text);
    ui->c_2->setText(c_2_text);
    ui->c_3->setText(c_3_text);
    ui->c_4->setText(c_4_text);
    ui->c_5->setText(c_5_text);
    ui->c_6->setText(c_6_text);
    ui->c_7->setText(c_7_text);
    ui->c_8->setText(c_8_text);
}

void MainWindow::on_roznica_clicked()
{
    //zczytanie macierzy A
    int a_0 = ui->a_0->toPlainText().toInt();
    int a_1 = ui->a_1->toPlainText().toInt();
    int a_2 = ui->a_2->toPlainText().toInt();
    int a_3 = ui->a_3->toPlainText().toInt();
    int a_4 = ui->a_4->toPlainText().toInt();
    int a_5 = ui->a_5->toPlainText().toInt();
    int a_6 = ui->a_6->toPlainText().toInt();
    int a_7 = ui->a_7->toPlainText().toInt();
    int a_8 = ui->a_8->toPlainText().toInt();

    //zczytaj macierz B
    int b_0 = ui->b_0->toPlainText().toInt();
    int b_1 = ui->b_1->toPlainText().toInt();
    int b_2 = ui->b_2->toPlainText().toInt();
    int b_3 = ui->b_3->toPlainText().toInt();
    int b_4 = ui->b_4->toPlainText().toInt();
    int b_5 = ui->b_5->toPlainText().toInt();
    int b_6 = ui->b_6->toPlainText().toInt();
    int b_7 = ui->b_7->toPlainText().toInt();
    int b_8 = ui->b_8->toPlainText().toInt();

    //oblicz
    int c_0 = a_0 - b_0;
    int c_1 = a_1 - b_1;
    int c_2 = a_2 - b_2;
    int c_3 = a_3 - b_3;
    int c_4 = a_4 - b_4;
    int c_5 = a_5 - b_5;
    int c_6 = a_6 - b_6;
    int c_7 = a_7 - b_7;
    int c_8 = a_8 - b_8;

    //pokaz w C (1) konwertowanie oblicz do wypisywalnej postaci
    QString c_0_text = QString::number(c_0);
    QString c_1_text = QString::number(c_1);
    QString c_2_text = QString::number(c_2);
    QString c_3_text = QString::number(c_3);
    QString c_4_text = QString::number(c_4);
    QString c_5_text = QString::number(c_5);
    QString c_6_text = QString::number(c_6);
    QString c_7_text = QString::number(c_7);
    QString c_8_text = QString::number(c_8);
    //pokaz w C (2) wypisywanie zmiennej do macierzy C
    ui->c_0->setText(c_0_text);
    ui->c_1->setText(c_1_text);
    ui->c_2->setText(c_2_text);
    ui->c_3->setText(c_3_text);
    ui->c_4->setText(c_4_text);
    ui->c_5->setText(c_5_text);
    ui->c_6->setText(c_6_text);
    ui->c_7->setText(c_7_text);
    ui->c_8->setText(c_8_text);

}

void MainWindow::on_AxB_clicked()
{
        //zczytanie macierzy A
        int a_0 = ui->a_0->toPlainText().toInt();
        int a_1 = ui->a_1->toPlainText().toInt();
        int a_2 = ui->a_2->toPlainText().toInt();
        int a_3 = ui->a_3->toPlainText().toInt();
        int a_4 = ui->a_4->toPlainText().toInt();
        int a_5 = ui->a_5->toPlainText().toInt();
        int a_6 = ui->a_6->toPlainText().toInt();
        int a_7 = ui->a_7->toPlainText().toInt();
        int a_8 = ui->a_8->toPlainText().toInt();

        //zczytaj macierz B
        int b_0 = ui->b_0->toPlainText().toInt();
        int b_1 = ui->b_1->toPlainText().toInt();
        int b_2 = ui->b_2->toPlainText().toInt();
        int b_3 = ui->b_3->toPlainText().toInt();
        int b_4 = ui->b_4->toPlainText().toInt();
        int b_5 = ui->b_5->toPlainText().toInt();
        int b_6 = ui->b_6->toPlainText().toInt();
        int b_7 = ui->b_7->toPlainText().toInt();
        int b_8 = ui->b_8->toPlainText().toInt();

        //oblicz
        int c_0 = a_0*b_0 + a_1*b_3 + a_2*b_6;
        int c_1 = a_0*b_1 + a_1*b_4 + a_2*b_7;
        int c_2 = a_0*b_2 + a_1*b_5 + a_2*b_8;
        int c_3 = a_3*b_0 + a_4*b_3 + a_5*b_6;
        int c_4 = a_3*b_1 + a_4*b_4 + a_5*b_7;
        int c_5 = a_3*b_2 + a_4*b_5 + a_5*b_8;
        int c_6 = a_6*b_0 + a_7*b_3 + a_8*b_6;
        int c_7 = a_6*b_1 + a_7*b_4 + a_8*b_7;
        int c_8 = a_6*b_2 + a_7*b_5 + a_8*b_8;

        //pokaz w C (1) konwertowanie oblicz do wypisywalnej postaci
        QString c_0_text = QString::number(c_0);
        QString c_1_text = QString::number(c_1);
        QString c_2_text = QString::number(c_2);
        QString c_3_text = QString::number(c_3);
        QString c_4_text = QString::number(c_4);
        QString c_5_text = QString::number(c_5);
        QString c_6_text = QString::number(c_6);
        QString c_7_text = QString::number(c_7);
        QString c_8_text = QString::number(c_8);
        //pokaz w C (2) wypisywanie zmiennej do macierzy C
        ui->c_0->setText(c_0_text);
        ui->c_1->setText(c_1_text);
        ui->c_2->setText(c_2_text);
        ui->c_3->setText(c_3_text);
        ui->c_4->setText(c_4_text);
        ui->c_5->setText(c_5_text);
        ui->c_6->setText(c_6_text);
        ui->c_7->setText(c_7_text);
        ui->c_8->setText(c_8_text);
}

void MainWindow::on_BxA_clicked()
{
    //zczytaj macierz B
    int b_0 = ui->b_0->toPlainText().toInt();
    int b_1 = ui->b_1->toPlainText().toInt();
    int b_2 = ui->b_2->toPlainText().toInt();
    int b_3 = ui->b_3->toPlainText().toInt();
    int b_4 = ui->b_4->toPlainText().toInt();
    int b_5 = ui->b_5->toPlainText().toInt();
    int b_6 = ui->b_6->toPlainText().toInt();
    int b_7 = ui->b_7->toPlainText().toInt();
    int b_8 = ui->b_8->toPlainText().toInt();

    //zczytanie macierzy A
    int a_0 = ui->a_0->toPlainText().toInt();
    int a_1 = ui->a_1->toPlainText().toInt();
    int a_2 = ui->a_2->toPlainText().toInt();
    int a_3 = ui->a_3->toPlainText().toInt();
    int a_4 = ui->a_4->toPlainText().toInt();
    int a_5 = ui->a_5->toPlainText().toInt();
    int a_6 = ui->a_6->toPlainText().toInt();
    int a_7 = ui->a_7->toPlainText().toInt();
    int a_8 = ui->a_8->toPlainText().toInt();

        //oblicz
    int c_0 = b_0*a_0 + b_1*a_3 + b_2*a_6;
    int c_1 = b_0*a_1 + b_1*a_4 + b_2*a_7;
    int c_2 = b_0*a_2 + b_1*a_5 + b_2*a_8;
    int c_3 = b_3*a_0 + b_4*a_3 + b_5*a_6;
    int c_4 = b_3*a_1 + b_4*a_4 + b_5*a_7;
    int c_5 = b_3*a_2 + b_4*a_5 + b_5*a_8;
    int c_6 = b_6*a_0 + b_7*a_3 + b_8*a_6;
    int c_7 = b_6*a_1 + b_7*a_4 + b_8*a_7;
    int c_8 = b_6*a_2 + b_7*a_5 + b_8*a_8;

    //pokaz w C (1) konwertowanie oblicz do wypisywalnej postaci
    QString c_0_text = QString::number(c_0);
    QString c_1_text = QString::number(c_1);
    QString c_2_text = QString::number(c_2);
    QString c_3_text = QString::number(c_3);
    QString c_4_text = QString::number(c_4);
    QString c_5_text = QString::number(c_5);
    QString c_6_text = QString::number(c_6);
    QString c_7_text = QString::number(c_7);
    QString c_8_text = QString::number(c_8);
    //pokaz w C (2) wypisywanie zmiennej do macierzy C
    ui->c_0->setText(c_0_text);
    ui->c_1->setText(c_1_text);
    ui->c_2->setText(c_2_text);
    ui->c_3->setText(c_3_text);
    ui->c_4->setText(c_4_text);
    ui->c_5->setText(c_5_text);
    ui->c_6->setText(c_6_text);
    ui->c_7->setText(c_7_text);
    ui->c_8->setText(c_8_text);
}

void MainWindow::on_detA_clicked()
{

    //zczytanie macierzy A
    int a_0 = ui->a_0->toPlainText().toInt();
    int a_1 = ui->a_1->toPlainText().toInt();
    int a_2 = ui->a_2->toPlainText().toInt();
    int a_3 = ui->a_3->toPlainText().toInt();
    int a_4 = ui->a_4->toPlainText().toInt();
    int a_5 = ui->a_5->toPlainText().toInt();
    int a_6 = ui->a_6->toPlainText().toInt();
    int a_7 = ui->a_7->toPlainText().toInt();
    int a_8 = ui->a_8->toPlainText().toInt();

    //wyznacznik(A)
    int wyznacznikA = a_0*a_4*a_8 + a_1*a_5*a_6 + a_2*a_3*a_7 -(a_2*a_4*a_6 + a_0*a_5*a_7 +a_1*a_3*a_8);

//pokaz w D (1) konwertowanie oblicz do wypisywalnej postaci
    QString wyznacznikA_text = QString::number(wyznacznikA);

    //pokaz w D (2) wypisywanie zmiennej do pola wyznacznikA
    ui->wyznacznikA->setText(wyznacznikA_text);
}

void MainWindow::on_detB_clicked()

{

    //zczytaj macierz B
    int b_0 = ui->b_0->toPlainText().toInt();
    int b_1 = ui->b_1->toPlainText().toInt();
    int b_2 = ui->b_2->toPlainText().toInt();
    int b_3 = ui->b_3->toPlainText().toInt();
    int b_4 = ui->b_4->toPlainText().toInt();
    int b_5 = ui->b_5->toPlainText().toInt();
    int b_6 = ui->b_6->toPlainText().toInt();
    int b_7 = ui->b_7->toPlainText().toInt();
    int b_8 = ui->b_8->toPlainText().toInt();

    //wyznacznik(B)
    int wyznacznikB = b_0*b_4*b_8 + b_1*b_5*b_6 + b_2*b_3*b_7 -(b_2*b_4*b_6 + b_0*b_5*b_7 +b_1*b_3*b_8);

//pokaz w D (1) konwertowanie oblicz do wypisywalnej postaci
    QString wyznacznikB_text = QString::number(wyznacznikB);

    //pokaz w D (2) wypisywanie zmiennej do pola wyznacznikB
    ui->wyznacznikB->setText(wyznacznikB_text);
}

void MainWindow::on_Atrans_clicked()
{
    //zczytanie macierzy A
    int a_0 = ui->a_0->toPlainText().toInt();
    int a_1 = ui->a_1->toPlainText().toInt();
    int a_2 = ui->a_2->toPlainText().toInt();
    int a_3 = ui->a_3->toPlainText().toInt();
    int a_4 = ui->a_4->toPlainText().toInt();
    int a_5 = ui->a_5->toPlainText().toInt();
    int a_6 = ui->a_6->toPlainText().toInt();
    int a_7 = ui->a_7->toPlainText().toInt();
    int a_8 = ui->a_8->toPlainText().toInt();
    //transponuj (A)
    int c_0 = a_0 ;
    int c_1 = a_3 ;
    int c_2 = a_6;
    int c_3 = a_1;
    int c_4 = a_4;
    int c_5 = a_7;
    int c_6 = a_2 ;
    int c_7 = a_5 ;
    int c_8 = a_8;

    //pokaz w C (1) konwertowanie oblicz do wypisywalnej postaci
    QString c_0_text = QString::number(c_0);
    QString c_1_text = QString::number(c_1);
    QString c_2_text = QString::number(c_2);
    QString c_3_text = QString::number(c_3);
    QString c_4_text = QString::number(c_4);
    QString c_5_text = QString::number(c_5);
    QString c_6_text = QString::number(c_6);
    QString c_7_text = QString::number(c_7);
    QString c_8_text = QString::number(c_8);
    //pokaz w C (2) wypisywanie zmiennej do macierzy C
    ui->c_0->setText(c_0_text);
    ui->c_1->setText(c_1_text);
    ui->c_2->setText(c_2_text);
    ui->c_3->setText(c_3_text);
    ui->c_4->setText(c_4_text);
    ui->c_5->setText(c_5_text);
    ui->c_6->setText(c_6_text);
    ui->c_7->setText(c_7_text);
    ui->c_8->setText(c_8_text);

}

void MainWindow::on_Btrans_clicked()
{//zczytanie macierzy A
    int b_0 = ui->b_0->toPlainText().toInt();
    int b_1 = ui->b_1->toPlainText().toInt();
    int b_2 = ui->b_2->toPlainText().toInt();
    int b_3 = ui->b_3->toPlainText().toInt();
    int b_4 = ui->b_4->toPlainText().toInt();
    int b_5 = ui->b_5->toPlainText().toInt();
    int b_6 = ui->b_6->toPlainText().toInt();
    int b_7 = ui->b_7->toPlainText().toInt();
    int b_8 = ui->b_8->toPlainText().toInt();

    //transponuj (A)
    int c_0 = b_0 ;
    int c_1 = b_3 ;
    int c_2 = b_6;
    int c_3 = b_1;
    int c_4 = b_4;
    int c_5 = b_7;
    int c_6 = b_2 ;
    int c_7 = b_5 ;
    int c_8 = b_8;

    //pokaz w C (1) konwertowanie oblicz do wypisywalnej postaci
    QString c_0_text = QString::number(c_0);
    QString c_1_text = QString::number(c_1);
    QString c_2_text = QString::number(c_2);
    QString c_3_text = QString::number(c_3);
    QString c_4_text = QString::number(c_4);
    QString c_5_text = QString::number(c_5);
    QString c_6_text = QString::number(c_6);
    QString c_7_text = QString::number(c_7);
    QString c_8_text = QString::number(c_8);
    //pokaz w C (2) wypisywanie zmiennej do macierzy C
    ui->c_0->setText(c_0_text);
    ui->c_1->setText(c_1_text);
    ui->c_2->setText(c_2_text);
    ui->c_3->setText(c_3_text);
    ui->c_4->setText(c_4_text);
    ui->c_5->setText(c_5_text);
    ui->c_6->setText(c_6_text);
    ui->c_7->setText(c_7_text);
    ui->c_8->setText(c_8_text);
}

void MainWindow::on_czyscA_clicked()
{
//czysc (A)
    {
        ui->a_0->setText("");
        ui->a_1->setText("");
        ui->a_2->setText("");
        ui->a_3->setText("");
        ui->a_4->setText("");
        ui->a_5->setText("");
        ui->a_6->setText("");
        ui->a_7->setText("");
        ui->a_8->setText("");
    }
}
void MainWindow::on_czyscB_clicked()
{
// czysc (B)
    {
        ui->b_0->setText("");
        ui->b_1->setText("");
        ui->b_2->setText("");
        ui->b_3->setText("");
        ui->b_4->setText("");
        ui->b_5->setText("");
        ui->b_6->setText("");
        ui->b_7->setText("");
        ui->b_8->setText("");
    }
}
