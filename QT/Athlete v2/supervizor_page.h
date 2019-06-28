#ifndef SUPERVIZOR_PAGE_H
#define SUPERVIZOR_PAGE_H

#include <QDialog>

namespace Ui {
class supervizor_page;
}

class supervizor_page : public QDialog
{
    Q_OBJECT

public:
    explicit supervizor_page(QWidget *parent = nullptr);
    ~supervizor_page();

private slots:
    void on_edit_team_info_clicked();

    void on_add_athlete_clicked();

    void on_remove_athlete_clicked();

    void on_add_remove_athlete_clicked();

private:
    Ui::supervizor_page *ui;
};

#endif // SUPERVIZOR_PAGE_H
