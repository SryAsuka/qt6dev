#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class GotoCell; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
        ~Dialog();

private slots:
    void on_lineEdit_textChanged();

private:
    Ui::GotoCell *ui;
};
#endif // DIALOG_H
