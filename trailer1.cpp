#include "trailer1.h"
#include "ui_trailer1.h"

trailer1::trailer1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::trailer1)
{
    ui->setupUi(this);
}

trailer1::~trailer1()
{
    delete ui;
}
