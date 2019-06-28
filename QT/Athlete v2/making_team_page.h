#ifndef MAKING_TEAM_PAGE_H
#define MAKING_TEAM_PAGE_H

#include <QDialog>


namespace Ui {
class making_team_page;
}

class making_team_page : public QDialog
{
    Q_OBJECT

public:
    explicit making_team_page(QWidget *parent = nullptr);
    ~making_team_page();

private slots:
    void on_make_team_botton_clicked();

private:
    Ui::making_team_page *ui;
};

#endif // MAKING_TEAM_PAGE_H
