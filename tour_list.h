#ifndef TOUR_LIST_H
#define TOUR_LIST_H

#include <QDialog>
#include <QListWidget>
namespace Ui {
class tour_list;
}

class tour_list : public QDialog
{
    Q_OBJECT

public:
    explicit tour_list(QWidget *parent = nullptr);
    ~tour_list();

private slots:

    void on_list_itemClicked(QListWidgetItem *item);

private:
    Ui::tour_list *ui;
};

#endif // TOUR_LIST_H
