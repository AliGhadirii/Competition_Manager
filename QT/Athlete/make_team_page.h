#ifndef MAKE_TEAM_PAGE_H
#define MAKE_TEAM_PAGE_H

#include<QDialog>
#include <QPushButton>

class QLineEdit;
class QPushButton;

class make_team_page:public QDialog
{
    Q_OBJECT
public:
    make_team_page();
    virtual ~make_team_page();
public slots:
    void makeTeamClicked();
private:
    QLineEdit * display;
    QPushButton * makeButton;

};

#endif // MAKE_TEAM_PAGE_H
