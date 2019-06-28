#ifndef GUEST_H
#define GUEST_H

#include <QWidget>
#include "guest2.h"
#include "organizer.h"
namespace Ui {
class guest;
}

class guest : public QWidget
{
    Q_OBJECT

public:
    explicit guest(QWidget *parent = nullptr);
    ~guest();

private slots:
    void on_ok_clicked();

private:
    Ui::guest *ui;
    guest2 g2 ;
};

#endif // GUEST_H
