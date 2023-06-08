
#ifndef INVOICE_H
#define INVOICE_H

#include "invoiceitems.h"
#include <cstdlib>
#include <ctime>

class Invoice
{
public:
    Invoice();
    Invoice(std::string_view providerID);

    void addItem(const InvoiceItem item);
    void removeItem(const std::string_view desiredSKU);
    void clearInvoiceItems();
    void updateAmount();
    void updateNumSelectedItems();

    void setProviderID(const std::string_view providerID);

    const invoiceItems& getInvoiceItemModel() const;
    invoiceItems& editInvoiceItemModel();

    const std::string& getProviderID() const;
    double getTotalAmount() const;

    double getNumSelectedItems() const;

    void createInvoiceNumber();

    void clearInvoice();

    const int getInvoiceNumber() const;


private:
    int m_invoiceNumber;
    invoiceItems m_items;
    std::string m_providerID;
    double m_totalAmount;
    double m_numSelctedItems;

};

#endif // INVOICE_H
