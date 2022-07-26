#include "duscene_2.h"
#include "gifanimation.h"

#include <QLabel>

duscene_2::duscene_2(QObject *parent)
    : QGraphicsScene(parent)
{
    mGifAnimation = new GifAnimation(this);
    mGifAnimation->setFilename(":/Recursos/Imagenes cartelera/2.gif");
    mGifAnimation->startMovie();
    addWidget(mGifAnimation->getWidget());


}
