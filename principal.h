#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QDialog
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

private slots:
    void on_cmdSaludar_clicked();

private:
    Ui::Principal *ui;
};
#endif // PRINCIPAL_H
