#include "mainwindow.h"
#include "sortengine.h"
#include "CLIvisualizer.h"

#include <QApplication>
#include <iostream>

int main()
{
    srand(time(NULL));

    sortEngine s(50);
    CLIVisualizer CLI;

    s.shuffle();
    CLI.display(s);

    s.selectionSort();
    CLI.display(s);

    /*
    QApplication a();
    MainWindow w;
    w.show();
    return a.exec();*/
}
