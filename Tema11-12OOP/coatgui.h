#ifndef COATGUI_H
#define COATGUI_H

#include <QMainWindow>
#include "service.h"

QT_BEGIN_NAMESPACE
namespace Ui { class CoatGUI; }
QT_END_NAMESPACE

class CoatGUI : public QMainWindow
{
    Q_OBJECT

public:
    CoatGUI(Services& s, QWidget *parent = nullptr);
    ~CoatGUI();

private:
    Services& serv;
    Ui::CoatGUI *ui;

    void connectSignalAndSlots();
    int getSelectedIndex() const;
    void deleteCoat();
    void populatelist();


public slots:
    void addCoat();
    void editCoat();
};
#endif // COATGUI_H
