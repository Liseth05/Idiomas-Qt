#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;
}


void Principal::on_cmdSaludar_clicked()
{
    QString nombre=ui->inNombre->text();
    ui->outSaludo->setText(tr("Bienvenido %1").arg(+" "+nombre+"!"));
}
