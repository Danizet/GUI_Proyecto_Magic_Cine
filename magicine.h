#ifndef MAGICINE_H
#define MAGICINE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Magicine; }
QT_END_NAMESPACE

class Magicine : public QMainWindow
{
    Q_OBJECT

public:
    Magicine(QWidget *parent = nullptr);
    ~Magicine();

private:
    Ui::Magicine *ui;
};
#endif // MAGICINE_H
