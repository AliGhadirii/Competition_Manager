#ifndef T_MATCH_H
#define T_MATCH_H

#include <QDialog>

namespace Ui {
class t_match;
}

class t_match : public QDialog
{
    Q_OBJECT

public:
    explicit t_match(QWidget *parent = nullptr);
    ~t_match();

private:
    Ui::t_match *ui;
};

#endif // T_MATCH_H
