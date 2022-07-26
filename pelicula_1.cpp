#include "pelicula_1.h"
#include "ui_pelicula_1.h"

#include "sala_1.h"

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

void Pelicula_1::on_pushButton_2_clicked()
{
    this->close();

}

void Pelicula_1::on_pushButton_clicked()
{
    //Crear un objeto del cuadro de dialogo
    Sala_1 *Dialog = new Sala_1(this);
    //Mostrar la ventana en modo Modal(que se ejecute delante)
    Dialog->exec();
}

