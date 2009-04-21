#ifndef PYTHONQTWRAPPER_QGLCOLORMAP_H
#define PYTHONQTWRAPPER_QGLCOLORMAP_H

#include <qglcolormap.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qcolor.h>
#include <qglcolormap.h>

class PythonQtShell_QGLColormap : public QGLColormap
{
public:
    PythonQtShell_QGLColormap():QGLColormap(),_wrapper(NULL) {};
    PythonQtShell_QGLColormap(const QGLColormap&  arg__1):QGLColormap(arg__1),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QGLColormap : public QObject
{ Q_OBJECT
public:
public slots:
QGLColormap* new_QGLColormap();
QGLColormap* new_QGLColormap(const QGLColormap&  arg__1);
void delete_QGLColormap(QGLColormap* obj) { delete obj; } 
   unsigned int  entryRgb(QGLColormap* theWrappedObject, int  idx) const;
   void setEntries(QGLColormap* theWrappedObject, int  count, const unsigned int*  colors, int  base = 0);
   void setEntry(QGLColormap* theWrappedObject, int  idx, const QColor&  color);
   QColor  entryColor(QGLColormap* theWrappedObject, int  idx) const;
   int  findNearest(QGLColormap* theWrappedObject, unsigned int  color) const;
   int  size(QGLColormap* theWrappedObject) const;
   bool  isEmpty(QGLColormap* theWrappedObject) const;
   void setEntry(QGLColormap* theWrappedObject, int  idx, unsigned int  color);
   int  find(QGLColormap* theWrappedObject, unsigned int  color) const;
};

#endif // PYTHONQTWRAPPER_QGLCOLORMAP_H