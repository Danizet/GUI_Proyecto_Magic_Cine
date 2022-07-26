#include "facturera.h"
#include "ui_facturera.h"

Facturera::Facturera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Facturera)
{
    ui->setupUi(this);
}

Facturera::~Facturera()
{
    delete ui;
}
