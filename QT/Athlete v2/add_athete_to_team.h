#ifndef ADD_ATHETE_TO_TEAM_H
#define ADD_ATHETE_TO_TEAM_H

#include <QDialog>


namespace Ui {
class add_athete_to_team;
}

class add_athete_to_team : public QDialog
{
    Q_OBJECT

public:
    explicit add_athete_to_team(QWidget *parent = nullptr);
    ~add_athete_to_team();

private slots:
    void on_add_button_clicked();

private:
    Ui::add_athete_to_team *ui;
};

#endif // ADD_ATHETE_TO_TEAM_H
