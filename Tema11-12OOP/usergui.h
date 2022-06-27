//
// Created by Nechita Daniel on 29 May 2022.
//

#ifndef T3_USERGUI_H
#define T3_USERGUI_H

#include <QWidget>
#include "service.h"
using namespace std;
//using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class usergui; }
QT_END_NAMESPACE

class usergui : public QWidget {
Q_OBJECT

public:
    explicit usergui(Services& us, QWidget *parent = nullptr);
    ~usergui() override;
    int searchSize;
    int counter = 0;
    std::vector<Coat> sizeCoats;
    std::vector<Coat> cartCoats;

private:
    Ui::usergui *ui;
    Services& user;

public slots:
    void printCart();
    void nextCoat();
    void addToCart();
    void stopProgram();
    void searchForSize();
};


#endif //T3_USERGUI_H
