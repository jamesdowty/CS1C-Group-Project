/**************************************************************
 * CS1C Group Project
 * Team Name: Scrum and Coke
 * Team Members: James Dowty, Joey Campbell, Behrad Moussavi,
 *               Ahazz Khan, Kate Steer, Utsav Parajuli,
 *               Nick Lozano, Brandon Nguyen, and Tim Diersing
 * ***********************************************************/
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
