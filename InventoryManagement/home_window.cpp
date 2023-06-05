#include "home_window.h"
#include "ui_home_window.h"

home_window::home_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::home_window)
{
    ui->setupUi(this);
}

home_window::~home_window()
{
    delete ui;
}

void home_window::setPushButtonDefaultStyle(QPushButton* button, const QString& iconPath)
{
    button->setStyleSheet(
        "QPushButton {"
        "    background-image: url(" + iconPath + ");"
                     "    background-position: center;"
                     "    background-repeat: no-repeat;"
                     "    background-size: contain;"
                     "    display: inline-block;"
                     "    border-radius: 0px;"
                     "    cursor: pointer;"
                     "    color: #ffffff;"
                     "    font-family: Arial;"
                     "    font-size: 12px;"
                     "    padding: 50px 10px;"
                     "}"
                     "QPushButton:hover {"
                     "    background-color: #ecebfb;"
                     "    color: #000000;"
                     "}"
                     "QPushButton:pressed {"
                     "    background-color: #DCD7C9;"
                     "    color: #000000;"
                     "}"
                     "QPushButton:active {"
                     "    position: relative;"
                     "    top: 1px;"
                     "}"
        );
}

void home_window::setPushButtonSelectedtStyle(QPushButton* button, const QString& iconPath)
{
    button->setStyleSheet(
        "QPushButton {"
        "    background-image: url("+ iconPath +");"
        "    background-color: #ecebfb;"
        "    background-position: center;"
        "    background-repeat: no-repeat;"
        "    background-size: contain;"
        "    display: inline-block;"
        "    border-radius: 0px;"
        "    cursor: pointer;"
        "    color: #ffffff;"
        "    font-family: Arial;"
        "    font-size: 12px;"
        "    padding: 50px 10px;"
        "}"
        );
}

void home_window::pushButtonsDefaultStyle(){
    setPushButtonDefaultStyle(ui->PB_inventory, ":/Images/icons/inventoryIcon.png");
    setPushButtonDefaultStyle(ui->PB_purchase, ":/Images/icons/purchaseIcon.png");
    setPushButtonDefaultStyle(ui->PB_reports, ":/Images/icons/reportsIcon.png");
    setPushButtonDefaultStyle(ui->PB_currency, ":/Images/icons/currencyIcon.png");
    setPushButtonDefaultStyle(ui->PB_invoice, ":/Images/icons/invoiceIcon.png");
}

void home_window::closeWidgets()
{
    closeChildWidget(ui->mainWidget, "inventory_widget");
    closeChildWidget(ui->mainWidget, "purchase_widget");
    closeChildWidget(ui->mainWidget, "reports_widget");
    closeChildWidget(ui->mainWidget, "currency_widget");
    closeChildWidget(ui->mainWidget, "invoice_widget");
}

void home_window::closeChildWidget(QWidget* parent, const QString& widgetName){
    QWidget* childWidget = parent->findChild<QWidget*>(widgetName);
    if (childWidget)
    {
        delete childWidget;
    }
}

void home_window::on_PB_inventory_clicked()
{
    pushButtonsDefaultStyle();
    closeWidgets();

    setPushButtonSelectedtStyle(ui->PB_inventory, ":/Images/icons/inventoryIcon.png");
    inventory_widget* inventoryWidget = new inventory_widget(ui->mainWidget);
    inventoryWidget->show();

}

void home_window::on_PB_purchase_clicked()
{
    pushButtonsDefaultStyle();
    closeWidgets();

    setPushButtonSelectedtStyle(ui->PB_purchase, ":/Images/icons/purchaseIcon.png");
    purchase_widget* purchaseWidget = new purchase_widget(ui->mainWidget);
    purchaseWidget->show();
}

void home_window::on_PB_reports_clicked()
{
    pushButtonsDefaultStyle();
    closeWidgets();

    setPushButtonSelectedtStyle(ui->PB_reports, ":/Images/icons/reportsIcon.png");
    reports_widget* reportsWidget = new reports_widget(ui->mainWidget);
    reportsWidget->show();
}

void home_window::on_PB_currency_clicked()
{
    pushButtonsDefaultStyle();
    closeWidgets();

    setPushButtonSelectedtStyle(ui->PB_currency, ":/Images/icons/currencyIcon.png");
    currency_widget* currencyWidget = new currency_widget(ui->mainWidget);
    currencyWidget->show();
}

void home_window::on_PB_invoice_clicked()
{
    pushButtonsDefaultStyle();
    closeWidgets();

    setPushButtonSelectedtStyle(ui->PB_invoice, ":/Images/icons/invoiceIcon.png");
    invoice_widget* invoiceWidget = new invoice_widget(ui->mainWidget);
    invoiceWidget->show();
}