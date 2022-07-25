#ifndef DUSCENE_3_H
#define DUSCENE_3_H

#include <QGraphicsScene>

class GifAnimation;

class duscene_3 : public QGraphicsScene
{
public:
    duscene_3(QObject *parent = nullptr);

private:
    GifAnimation *mGifAnimation;
};

#endif // DUSCENE_3_H
