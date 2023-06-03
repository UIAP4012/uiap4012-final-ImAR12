
#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class Product
{
public:
    Product();
    Product(std::string_view name, std::string_view category, std::string_view sku
            , std::string_view brand, std::string_view stock
            , std::string_view avaialable
            , std::string_view price, std::string_view unit, std::string_view description
            , std::string_view addedDate, std::string_view exDate, bool availability);

    void setName(const std::string_view name);
    void setCategory(const std::string_view category);
    void setSku(const std::string_view sku);
    void setBrand(const std::string_view brand);
    void setStock(const std::string_view stock);
    void setAvailable(const std::string_view available);
    void setPrice(const std::string_view price);
    void setUnit(std::string_view symbol);
    void setDescription(const std::string_view description);
    void setAddedDate(const std::string_view addedDate);
    void setExDate(const std::string_view exDate);
    void setAvailability(const bool availability);

    const std::string& getName() const;
    const std::string& getCategory() const;
    const std::string& getSku() const;
    const std::string& getBrand() const;
    const std::string& getStock() const;
    const std::string& getAvailable() const;
    const std::string& getPrice() const;
    const std::string& getUnit() const;
    const std::string& getDescription() const;
    const std::string& getAddedDate() const;
    const std::string& getExDate() const;
    bool getAvailability() const;

private:
    std::string m_name;
    std::string m_category;
    std::string m_sku;
    std::string m_brand;
    std::string m_stock;
    std::string m_available;
    std::string m_price;
    std::string m_unit;
    std::string m_description;
    std::string m_addedDate;
    std::string m_exDate;
    bool m_availability;

};

#endif // PRODUCT_H
