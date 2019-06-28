#ifndef DELETE_THLETE_FROM_TEAM_PAGE_H
#define DELETE_THLETE_FROM_TEAM_PAGE_H

#include <QDialog>


namespace Ui {
class delete_thlete_from_team_page;
}

class delete_thlete_from_team_page : public QDialog
{
    Q_OBJECT

public:
    explicit delete_thlete_from_team_page(QWidget *parent = nullptr);
    ~delete_thlete_from_team_page();

private slots:
    void on_remove_button_clicked();

private:
    Ui::delete_thlete_from_team_page *ui;
};

#endif // DELETE_THLETE_FROM_TEAM_PAGE_H
