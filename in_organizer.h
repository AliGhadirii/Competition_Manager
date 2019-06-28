#ifndef IN_ORGANIZER_H
#define IN_ORGANIZER_H

#include <QWidget>

namespace Ui {
class in_organizer;
}

class in_organizer : public QWidget
{
    Q_OBJECT

public:
    explicit in_organizer(QWidget *parent = nullptr);
    ~in_organizer();

private:
    Ui::in_organizer *ui;
};

#endif // IN_ORGANIZER_H
