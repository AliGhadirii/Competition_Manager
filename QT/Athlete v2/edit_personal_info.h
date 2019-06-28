#ifndef EDIT_PERSONAL_INFO_H
#define EDIT_PERSONAL_INFO_H

#include <QDialog>

namespace Ui {
class edit_personal_info;
}

class edit_personal_info : public QDialog
{
    Q_OBJECT

public:
    explicit edit_personal_info(QWidget *parent = nullptr);
    ~edit_personal_info();

private slots:
    void on_submit_button_clicked();

private:
    Ui::edit_personal_info *ui;
};

#endif // EDIT_PERSONAL_INFO_H
