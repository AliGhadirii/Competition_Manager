#ifndef ADD_REMOVE_TOUR_PAGE_H
#define ADD_REMOVE_TOUR_PAGE_H

#include <QDialog>


namespace Ui {
class add_remove_tour_page;
}

class add_remove_tour_page : public QDialog
{
    Q_OBJECT

public:
    explicit add_remove_tour_page(QWidget *parent = nullptr);
    ~add_remove_tour_page();

private slots:
    void on_add_button_clicked();

    void on_remove_button_clicked();

private:
    Ui::add_remove_tour_page *ui;
};

#endif // ADD_REMOVE_TOUR_PAGE_H
