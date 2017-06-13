#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "topersian.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    qmlRegisterType<ToPersian>("toPersion.test", 1, 0, "ToPersionConvertor");
    QQmlApplicationEngine engine;
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));

    return app.exec();
}
