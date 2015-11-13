#ifndef STORAGER_H
#define STORAGER_H

#include <QObject>

class Storager : public QObject
{
    Q_OBJECT
public:
    explicit Storager(QObject *parent = 0);

signals:

public slots:
};

#endif // STORAGER_H
