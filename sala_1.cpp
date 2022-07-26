#include "sala_1.h"
#include "ui_sala_1.h"
#include "facturera.h"

Sala_1::Sala_1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sala_1)
{
    ui->setupUi(this);
}

Sala_1::~Sala_1()
{
    delete ui;
}

void Sala_1::on_pushButton_2_clicked()
{
    this->close();
}


void Sala_1::on_pushButton_clicked()
{

    //Crear un objeto del cuadro de dialogo
    Facturera *Dialog = new Facturera(this);
    //Mostrar la ventana en modo Modal(que se ejecute delante)
    Dialog->exec();

}

