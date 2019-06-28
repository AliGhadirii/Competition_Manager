#ifndef RANKING_H
#define RANKING_H

#include <QDialog>

namespace Ui {
class ranking;
}

class ranking : public QDialog
{
    Q_OBJECT

public:
    explicit ranking(QWidget *parent = nullptr);
    ~ranking();

private:
    Ui::ranking *ui;
};

#endif // RANKING_H
