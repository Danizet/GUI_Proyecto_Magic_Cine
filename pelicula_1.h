#ifndef PELICULA_1_H
#define PELICULA_1_H

#include <QDialog>

namespace Ui {
class Pelicula_1;
}

class Pelicula_1 : public QDialog
{
    Q_OBJECT

public:
    explicit Pelicula_1(QWidget *parent = nullptr);
    ~Pelicula_1();

private:
    Ui::Pelicula_1 *ui;
};

#endif // PELICULA_1_H
