#ifndef DUSCENE_5_H
#define DUSCENE_5_H


#include <QGraphicsScene>

class GifAnimation;

class duscene_5 : public QGraphicsScene
{
public:
    duscene_5(QObject *parent = nullptr);

private:
    GifAnimation *mGifAnimation;
};
#endif // DUSCENE_5_H
