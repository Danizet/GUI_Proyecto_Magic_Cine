#ifndef DUSCENE_H
#define DUSCENE_H

#include <QGraphicsScene>

class GifAnimation;

class duscene : public QGraphicsScene
{
public:
    duscene(QObject *parent = nullptr);

private:
    GifAnimation *mGifAnimation;
};

#endif // DUSCENE_H
