#include "duscene_3.h"
#include "gifanimation.h"
#include <QLabel>
duscene_3::duscene_3(QObject *parent)
    : QGraphicsScene(parent)
{
    mGifAnimation = new GifAnimation(this);
    mGifAnimation->setFilename(":/Recursos/Imagenes cartelera/3.gif");
    mGifAnimation->startMovie();
    addWidget(mGifAnimation->getWidget());
}
