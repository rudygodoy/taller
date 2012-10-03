#include <QtGui/QApplication>
#include "qtApp.h"
#include <QString>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtApp w;
    w.show();
    
    return a.exec();
}
