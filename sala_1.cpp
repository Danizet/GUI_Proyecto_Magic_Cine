#include "sala_1.h"
#include "ui_sala_1.h"

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

void Sala_1::on_pushButton_clicked()
{
    //button->setStyleSheet("* { background-color: rgb(255,125,100) }");
}


void Sala_1::on_pushButton_2_clicked(bool checked)
{
    this->setStyleSheet("QPushButton_2 {background-color: "
                        "green;border-style: "
                        "outset;border-width: "
                        "2px;border-radius: "
                        "10px;font: bold 14px;min-width: "
                        "4em; padding: 6px;} QPushButton_2:"
                        "clicked {background-color: "
                        "yellow;}");
}



void Sala_1::on_pushButton_3_pressed()
{
    this->setStyleSheet("QPushButton_3 {background-color: "
                        "green;border-style: "
                        "outset;border-width: "
                        "2px;border-radius: "
                        "10px;font: bold 14px;min-width: "
                        "4em; padding: 6px;} QPushButton_3:"
                        "clicked {background-color: "
                        "yellow;}");
}


void Sala_1::on_pushButton_4_released()
{
    this->setStyleSheet("QPushButton_4 {background-color: "
                        "green;border-style: "
                        "outset;border-width: "
                        "2px;border-radius: "
                        "10px;font: bold 14px;min-width: "
                        "4em; padding: 6px;} QPushButton_4:"
                        "clicked {background-color: "
                        "yellow;}");
}


void Sala_1::on_pushButton_5_toggled(bool checked)
{
    this->setStyleSheet("QPushButton_5 {background-color: "
                        "green;border-style: "
                        "outset;border-width: "
                        "2px;border-radius: "
                        "10px;font: bold 14px;min-width: "
                        "4em; padding: 6px;} QPushButton_5:"
                        "clicked {background-color: "
                        "yellow;}");
}

