#include "coatgui.h"
#include "homegui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    std::string fileName = "readFrom";
    Repo r(fileName);
    Services s(r);
    QApplication a(argc, argv);

    Repo u(fileName);
    Services us(u);

//    CoatGUI gui{s};
//    gui.show();
    homegui home{s, us};
    home.show();


    return a.exec();
}
