#ifndef ANALYSER_H
#define ANALYSER_H
#include <vector>
#include <QObject>
#include "analysis.h"

class Analyser : public QObject
{
    std::string name;
    Q_OBJECT
public:

    std::vector<Analysis*> analyses;
    Analyser(std::string, std::string);
    bool compareNames(std::string);
signals:

public slots:
};



#endif // ANALYSER_H
