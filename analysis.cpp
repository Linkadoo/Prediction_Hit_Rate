#include "analysis.h"

Analysis::Analysis(std::string market_, std::string stock_,
                   QDate date_,std::string typeOfAnalysis_, double target_, double stop_loss_)
    : QObject()
{
    date = date_;
    target = target_;
    stop_loss = stop_loss_;
    market = market_;
    stock = stock_;
    typeOfAnalysis = typeOfAnalysis_;
}

Analysis& Analysis::operator=(const Analysis rhs){
    date = rhs.date;
    target = rhs.target;
    stop_loss = rhs.stop_loss;
    market = rhs.market;
    stock = rhs.stock;
    typeOfAnalysis = rhs.typeOfAnalysis;
    return *this;
}

