#include "duscene.h"
#include "GifAnimation.h"
#include <QLabel>
duscene::duscene(QObject *parent)
    : QGraphicsScene(parent)
{
    mGifAnimation = new GifAnimation(this);
    mGifAnimation->setFilename("C:/Users/pcgam/Downloads/tenor.gif");
    mGifAnimation->startMovie();
    addWidget(mGifAnimation->getWidget());


}
