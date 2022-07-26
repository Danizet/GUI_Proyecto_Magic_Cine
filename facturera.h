#ifndef FACTURERA_H
#define FACTURERA_H

#include <QDialog>

namespace Ui {
class Facturera;
}

class Facturera : public QDialog
{
    Q_OBJECT

public:
    explicit Facturera(QWidget *parent = nullptr);
    ~Facturera();

private:
    Ui::Facturera *ui;
};

#endif // FACTURERA_H
