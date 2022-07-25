#include "duscene_5.h"
#include "GifAnimation.h"
#include <QLabel>
duscene_5::duscene_5(QObject *parent)
    : QGraphicsScene(parent)
{
    mGifAnimation = new GifAnimation(this);
    mGifAnimation->setFilename("C:/Users/ldpc8/Downloads/5.gif");
    mGifAnimation->startMovie();
    addWidget(mGifAnimation->getWidget());


}
