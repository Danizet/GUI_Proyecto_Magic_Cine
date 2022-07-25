#include "pelicula_1.h"
#include "ui_pelicula_1.h"

Pelicula_1::Pelicula_1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pelicula_1)
{
    ui->setupUi(this);
}

Pelicula_1::~Pelicula_1()
{
    delete ui;
}
