#ifndef CUSTOMER_SIGNUP_PAGE_H
#define CUSTOMER_SIGNUP_PAGE_H

#include <QDialog>
#include <qDebug>
#include "mainwindow.h"

namespace Ui {
class customer_signup_page;
}

class customer_signup_page : public QDialog
{
    Q_OBJECT

public:
    explicit customer_signup_page(MainWindow* previouseWindow, QWidget *parent = nullptr);
    ~customer_signup_page();
    void hideLBs();
    void putPlaceHolders();

private slots:
    void on_PB_signUp_clicked();
    void on_PB_login_clicked();

private:
    MainWindow* m_previouseWindow;
    Ui::customer_signup_page *ui;
};

#endif // CUSTOMER_SIGNUP_PAGE_H
