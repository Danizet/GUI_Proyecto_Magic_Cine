#include "magicine.h"
#include "ui_magicine.h"

Magicine::Magicine(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Magicine)
{
    ui->setupUi(this);
}

Magicine::~Magicine()
{
    delete ui;
}

