#include "calwindow.h"

#include <QApplication>
#include <QMessageBox>


int main(int argc, char *argv[])
{

        QApplication a(argc, argv);
        CalWindow w;
        w.show();
        return a.exec();


}
