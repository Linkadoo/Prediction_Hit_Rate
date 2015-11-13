#ifndef ANALYSER_H
#define ANALYSER_H

#include <QObject>

class Analyser : public QObject
{
    Q_OBJECT
public:
    explicit Analyser(QObject *parent = 0);

signals:

public slots:
};

#endif // ANALYSER_H
