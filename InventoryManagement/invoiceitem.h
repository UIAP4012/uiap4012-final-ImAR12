
#ifndef INVOICEITEM_H
#define INVOICEITEM_H

#include <iostream>


class invoiceItem
{
public:
    invoiceItem();
    invoiceItem(std::string_view name, std::string_view category, std::string_view sku
                , std::string_view brand, std::string_view amount, std::string_view price
                , std::string_view unit, std::string_view description, std::string_view addedDate
                , std::string_view exDate, std::string_view invoiceID, std::string_view customerID);

    void setName(const std::string_view name);
    void setCategory(const std::string_view category);
    void setSku(const std::string_view sku);
    void setBrand(const std::string_view brand);
    void setAmount(const std::string_view amount);
    void setPrice(const std::string_view price);
    void setUnit(std::string_view symbol);
    void setDescription(const std::string_view description);
    void setAddedDate(const std::string_view addedDate);
    void setExDate(const std::string_view exDate);
    void setInvoiceID(const std::string_view invoiceID);
    void setCustomerID(const std::string_view customerID);
    void setProviderID(const std::string_view providerID);

    const std::string& getName() const;
    const std::string& getCategory() const;
    const std::string& getSku() const;
    const std::string& getBrand() const;
    const std::string& getAmount() const;
    const std::string& getPrice() const;
    const std::string& getUnit() const;
    const std::string& getDescription() const;
    const std::string& getAddedDate() const;
    const std::string& getExDate() const;
    const std::string& getInvoiceID() const;
    const std::string& getCustomerID() const;
    const std::string& getProviderID() const;


private:
    std::string m_name;
    std::string m_category;
    std::string m_sku;
    std::string m_brand;
    std::string m_amount;
    std::string m_price;
    std::string m_unit;
    std::string m_description;
    std::string m_addedDate;
    std::string m_exDate;
    std::string m_invoiceID;
    std::string m_customerID;
    std::string m_providerID;

};

#endif // INVOICEITEM_H
