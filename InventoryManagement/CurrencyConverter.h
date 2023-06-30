
#ifndef CURRENCYCONVERTER_H
#define CURRENCYCONVERTER_H

#include <iostream>
#include <map>
#include <string>
#include "manufacturers.h"

class CurrencyConverter {
public:
    CurrencyConverter();

    void setConversionRate(const std::string& fromCurrency, const std::string& toCurrency, double rate);

    double convert(const std::string& fromCurrency, const std::string& toCurrency, double amount);

    void setCurrencySymbols();

    void setConversionRates();

    void setAEDConversionRates();

    void setAUDConversionRates();

    void setBRLConversionRates();

    void setCADConversionRates();

    void setCHFConversionRates();

    void setCNYConversionRates();

    void setEGPConversionRates();

    void setEURConversionRates();

    void setGBPConversionRates();

    void setHKDConversionRates();

    void setINRConversionRates();

    void setIRRConversionRates();

    void setJPYConversionRates();

    void setKRWConversionRates();

    void setMXNConversionRates();

    void setNOKConversionRates();

    void setNZDConversionRates();

    void setPLNConversionRates();

    void setRUBConversionRates();

    void setSARConversionRates();

    void setSEKConversionRates();

    void setTRYConversionRates();

    void setUSDConversionRates();

    void setZARConversionRates();

    void convertCurrency(Manufacturers* manufacturers, const std::string &fromCurrency, const std::string &toCurrency);

    const std::string& getCurrencySymbol() const;

    const std::string& getCurrentCurrency() const;

    void setCurrentCurrency(const std::string& currency);

    const std::string& getSymbol() const;

    const double getRate(const std::string& baseCurrency, const std::string& quoteCurrency);

    const std::map<std::string, double>& getConversionRates() const;

private:
    std::map<std::string, double> m_conversionRates;
    std::map<std::string, std::string> m_currencySymbols;

    std::string generateKey(const std::string& fromCurrency, const std::string& toCurrency) {
        return fromCurrency + toCurrency;
    }

    std::string m_currency;
    std::string m_currencySymbol;
};

#endif // CURRENCYCONVERTER_H
