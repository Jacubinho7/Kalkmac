#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_suma_clicked();

    void on_roznica_clicked();

    void on_AxB_clicked();

    void on_BxA_clicked();

    void on_detA_clicked();

    void on_detB_clicked();

    void on_Atrans_clicked();

    void on_Btrans_clicked();

    void on_czyscA_clicked();

    void on_czyscB_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
