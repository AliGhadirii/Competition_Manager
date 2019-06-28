#ifndef IN_ATHLETE_H
#define IN_ATHLETE_H

#include <QWidget>

namespace Ui {
class in_athlete;
}

class in_athlete : public QWidget
{
    Q_OBJECT

public:
    explicit in_athlete(QWidget *parent = nullptr);
    ~in_athlete();

private:
    Ui::in_athlete *ui;
};

#endif // IN_ATHLETE_H
