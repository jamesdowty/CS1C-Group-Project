#include "DrawingWidget.h"


// DRAWS ALL SHAPES
void DrawingWidget::paintEvent(QPaintEvent*)
{
    QPaintDevice *device = this;
    for(int i = 0; i < shapeVector->size(); i++)
        (*shapeVector)[i]->draw(device);
}

DrawingWidget::DrawingWidget(QWidget *parent)
    :QWidget(parent)
{
    QString file = "shapes.txt";
    shapeVector = parser(file);

}