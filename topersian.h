#ifndef TOPERSIAN_H
#define TOPERSIAN_H

#include <QObject>

class ToPersian : public QObject
{
    Q_OBJECT
public:
    explicit ToPersian(QObject *parent = 0);
    Q_INVOKABLE static QString fromEnglish(QString string);

signals:

public slots:
};

#endif // TOPERSIAN_H
