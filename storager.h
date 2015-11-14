#ifndef STORAGER_H
#define STORAGER_H

#include <QObject>
#include "analyser.h"
class Storager : public QObject
{
    Q_OBJECT
public:
    Storager(QObject *parent = 0);
    std::vector<Analyser*> analysts;
signals:
void print(QString);
public slots:
};

#endif // STORAGER_H
