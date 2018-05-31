#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlComponent>
#include <QQmlEngine>
#include <QQmlContext>
#include <connection.h>
#include <amplificator.h>
#include <generator.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    Connection connectionGen;
    Connection connectionCom;

    Amplificator monAmp;
    Generator monGen;

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("connectionGen", &connectionGen);
    engine.rootContext()->setContextProperty("connectionCom", &connectionCom);
    engine.rootContext()->setContextProperty("monAmp", &monAmp);
    engine.rootContext()->setContextProperty("monGen", &monGen);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
