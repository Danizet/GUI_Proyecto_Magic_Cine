#include "duscene_4.h"
#include "GifAnimation.h"
#include <QLabel>
duscene_4::duscene_4(QObject *parent)
    : QGraphicsScene(parent)
{
    mGifAnimation = new GifAnimation(this);
    mGifAnimation->setFilename("C:/Users/pcgam/Downloads/4.gif");
    mGifAnimation->startMovie();
    addWidget(mGifAnimation->getWidget());


}
