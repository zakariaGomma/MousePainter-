//11/4/2018
// By: Zakaria Gomma

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlEngine>
#include <QQmlContext>
#include <mousememory.h>
int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QScopedPointer<MouseMemory> mouse(new MouseMemory);


    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    engine.rootContext()->setContextProperty("mouse",mouse.data());
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
