#ifndef EDIT_TEAM_INFO_H
#define EDIT_TEAM_INFO_H

#include <QDialog>


namespace Ui {
class edit_team_info;
}

class edit_team_info : public QDialog
{
    Q_OBJECT

public:
    explicit edit_team_info(QWidget *parent = nullptr);
    ~edit_team_info();

private slots:
    void on_submit_button_clicked();

private:
    Ui::edit_team_info *ui;
};

#endif // EDIT_TEAM_INFO_H
