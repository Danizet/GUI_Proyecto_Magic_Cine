#ifndef DUSCENE_4_H
#define DUSCENE_4_H

#include <QGraphicsScene>

class GifAnimation;

class duscene_4 : public QGraphicsScene
{
public:
    duscene_4(QObject *parent = nullptr);

private:
    GifAnimation *mGifAnimation;
};

#endif // DUSCENE_4_H
