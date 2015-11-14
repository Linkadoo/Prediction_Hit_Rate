#ifndef ANALYSIS_H
#define ANALYSIS_H

#include <QObject>
#include <QDate>
#include <sstream>
#define ABB 301;

//#define Value 201;
//#define Technical 202;

class Analysis : public QObject
{
    Q_OBJECT
public:

    Analysis(std::string,std::string,
             QDate,std::string, double, double);
    Analysis& operator=(const Analysis rhs);
    QDate date;
    int target;
    int stop_loss;
    std::string market;
    std::string stock;
    std::string typeOfAnalysis;
signals:

public slots:
};

#endif // ANALYSIS_H
