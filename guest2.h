#ifndef GUEST2_H
#define GUEST2_H

#include <QWidget>
#include "ranking.h"
#include "tour_list.h"
namespace Ui {
class guest2;
}

class guest2 : public QWidget
{
    Q_OBJECT

public:
    explicit guest2(QWidget *parent = nullptr);
    ~guest2();

private slots:
    void on_results_clicked();

    void on_ranking_clicked();

    void on_t_ranking_clicked();

private:
    Ui::guest2 *ui;
};

#endif // GUEST2_H
