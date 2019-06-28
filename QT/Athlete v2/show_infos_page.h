#ifndef SHOW_INFOS_PAGE_H
#define SHOW_INFOS_PAGE_H

#include <QDialog>


namespace Ui {
class show_infos_page;
}

class show_infos_page : public QDialog
{
    Q_OBJECT

public:
    explicit show_infos_page(QWidget *parent = nullptr);
    ~show_infos_page();

private:
    Ui::show_infos_page *ui;
};

#endif // SHOW_INFOS_PAGE_H
