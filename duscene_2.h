#ifndef DUSCENE_2_H
#define DUSCENE_2_H

#include <QGraphicsScene>

class GifAnimation;

class duscene_2 : public QGraphicsScene
{
public:
    duscene_2(QObject *parent = nullptr);

private:
    GifAnimation *mGifAnimation;
};

#endif // DUSCENE_2_H
