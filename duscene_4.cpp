#include "duscene_4.h"
#include "gifanimation.h"
#include <QLabel>
duscene_4::duscene_4(QObject *parent)
    : QGraphicsScene(parent)
{
    mGifAnimation = new GifAnimation(this);
    mGifAnimation->setFilename(":/Recursos/Imagenes cartelera/4.gif");
    mGifAnimation->startMovie();
    addWidget(mGifAnimation->getWidget());


}
