#include "duscene_2.h"
#include "GifAnimation.h"
#include <QLabel>
duscene_2::duscene_2(QObject *parent)
    : QGraphicsScene(parent)
{
    mGifAnimation = new GifAnimation(this);
    mGifAnimation->setFilename("C:/Users/ldpc8/Downloads/ina.gif");
    mGifAnimation->startMovie();
    addWidget(mGifAnimation->getWidget());


}
