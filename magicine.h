#ifndef MAGICINE_H
#define MAGICINE_H

#include <QMainWindow>
#include <QWidget>

#include "pelicula_1.h"
#include "duscene.h"
#include "duscene_2.h"
#include "duscene_3.h"
#include "duscene_4.h"
#include "duscene_5.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Magicine; }
QT_END_NAMESPACE

class duscene;
class duscene_2;
class duscene_3;
class duscene_4;
class duscene_5;

class Magicine : public QMainWindow
{
    Q_OBJECT

public:
    Magicine(QWidget *parent = nullptr);
    ~Magicine();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Magicine *ui;
    duscene *mScene;
    duscene_2 *mScene_2;
    duscene_3 *mScene_3;
    duscene_4 *mScene_4;
    duscene_5 *mScene_5;

};
#endif // MAGICINE_H
