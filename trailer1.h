#ifndef TRAILER1_H
#define TRAILER1_H

#include <QDialog>

namespace Ui {
class trailer1;
}

class trailer1 : public QDialog
{
    Q_OBJECT

public:
    explicit trailer1(QWidget *parent = nullptr);
    ~trailer1();

private:
    Ui::trailer1 *ui;
};

#endif // TRAILER1_H
