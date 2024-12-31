#include <QApplication>
#include <QQmlApplicationEngine>
#include "customplotitem.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    qmlRegisterType<CustomPlotItem>("com.myapp.CustomPlot", 1, 0, "CustomPlotItem");

    QQmlApplicationEngine engine;
    engine.addImportPath(":/myapp.com/imports");

    engine.load(QUrl(u"qrc:/myapp.com/imports/QmlCustomPlot/Main.qml"_qs));

    return app.exec();
}
