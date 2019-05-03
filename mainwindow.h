#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QTimer>
#include<QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void updateDateTimeAndDisplay();

    void on_btn_start_clicked();

    void on_btn_stop_clicked();

    void on_btn_pause_clicked();

    void on_btn_log_clicked();

    void on_btn_add_clicked();

    void on_brn_reduce_clicked();


private:
    Ui::MainWindow *ui;
    QTimer ptimer;
    QTime baseTime;
    QString showStr;
    QString h;
    QString m;
    QString s;

};

#endif // MAINWINDOW_H
