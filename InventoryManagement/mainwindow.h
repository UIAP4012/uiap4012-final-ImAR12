
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "manufacturers.h"

#include <QMainWindow>
#include <QDebug>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void hideMainWindowLabels();

private slots:

    void on_PB_login_clicked();

    void on_PB_signin_clicked();

private:
    Ui::MainWindow *ui;
    Manufacturers* m_manufacturers;
};

#endif // MAINWINDOW_H
