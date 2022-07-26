#include "duscene.h"
#include "gifanimation.h"

#include <QLabel>

duscene::duscene(QObject *parent)
    : QGraphicsScene(parent)
{
    mGifAnimation = new GifAnimation(this);
    mGifAnimation->setFilename(":/Recursos/Imagenes cartelera/1.gif");
    mGifAnimation->startMovie();
    addWidget(mGifAnimation->getWidget());


}
