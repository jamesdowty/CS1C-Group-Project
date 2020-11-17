#ifndef PARSER_H
#define PARSER_H

#include "vector.h"
#include "shape.h"
#include "line.h"

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QCoreApplication>
#include <QDebug>
#include <QMessageBox>
#include <QPaintDevice>



//void shapeParser(custom::vector<shape*>&, const QString fileName); //PROTOTYPE

custom::vector<shape*>* parser(const QString fileName, QPaintDevice *device);
line* ParseLine(QTextStream &file, int ShapeID, QPaintDevice *device);
void ParsePolyline(QTextStream &file, int ShapeID);
void ParsePolygon(QTextStream &file, int ShapeID);
void ParseRectangle(QTextStream &file, int ShapeID);
void ParseSquare(QTextStream &file, int ShapeID);
void ParseEllipse(QTextStream &file, int ShapeID);
void ParseCircle(QTextStream &file, int ShapeID);
void ParseText(QTextStream &file, int ShapeID);

Qt::GlobalColor stringToColor(QString);
Qt::PenStyle stringToPenStyle(QString);
Qt::PenCapStyle stringToPenCapStyle(QString);
Qt::PenJoinStyle stringToPenJoinStyle(QString);

#endif // PARSER_H
