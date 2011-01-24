#include <QApplication>
#include <QTranslator>
#include <QLocale>
#include <qtextcodec.h>
#include <QSettings>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    #ifdef VIEWER
    QString dirName = "qute_viewer";
    QString appName = "Qute Viewer";
    #else
    QString dirName = "qute_drawer";
    QString appName = "Qute Drawer";
    #endif

    QApplication app(argc, argv);
    QString locale = QLocale::system().name();

    QTranslator translator;
    QCoreApplication::setOrganizationName("MySoft");
    QCoreApplication::setOrganizationDomain("mysoft.com");


    translator.load(QString("lang/"+dirName+"_") + locale);
    QCoreApplication::setApplicationName(appName);

    app.installTranslator(&translator);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("utf8"));

    QSettings settings;
    MainWindow mainWindow;
    mainWindow.show();
    return app.exec();
}
