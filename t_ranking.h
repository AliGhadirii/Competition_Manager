#ifndef T_RANKING_H
#define T_RANKING_H

#include <QDialog>

namespace Ui {
class t_ranking;
}

class t_ranking : public QDialog
{
    Q_OBJECT

public:
    explicit t_ranking(QWidget *parent = nullptr);
    ~t_ranking();

private:
    Ui::t_ranking *ui;
};

#endif // T_RANKING_H
