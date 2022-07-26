#include "duscene_5.h"
#include "gifanimation.h"

#include <QLabel>

duscene_5::duscene_5(QObject *parent)
    : QGraphicsScene(parent)
{
    mGifAnimation = new GifAnimation(this);
    mGifAnimation->setFilename(":/Recursos/Imagenes cartelera/5.gif");
    mGifAnimation->startMovie();
    addWidget(mGifAnimation->getWidget());
}
