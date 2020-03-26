#include "mainwindow.h"
#include <QtWebEngineWidgets>
#include <QtWebEngine/qtwebengineglobal.h>
#include <QApplication>
#include <QGuiApplication>
#include <QQmlApplicationEngine>


#include <QQmlApplicationEngine>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);  
        MainWindow w;
        w.show();
        w.EngineShow(); // показ содержимого страниц в виджеты

        return a.exec();
    }
    
    
