#include "mainwindow.h"
#include "univers.h"
#include "ui_Univers.h"
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
    
        return a.exec();
    }
    
    
