#include "mainwindow.h"
#include <QHBoxLayout>
#include <QWidget>
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();
    return a.exec();
}
