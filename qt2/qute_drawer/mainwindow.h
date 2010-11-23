#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QActionGroup>
#include "renderarea.h"

class QAction;
class QMenu;
class QScrollArea;
class QScrollBar;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();

private slots:
    void changePen();
    void about();

private:
    
    void createActions();
    void createMenus();
    RenderArea *renderArea;
    QScrollArea *scrollArea;

    QAction *exitAct;
    
    QActionGroup *drawGroup;
    QAction *lineAct;
    QAction *rectAct;
    QAction *roundRectAct;
    QAction *ellipseAct;
    
    QAction *aboutAct;
    QAction *aboutQtAct;

    QMenu *fileMenu;
    QMenu *drawMenu;
    QMenu *optionsMenu;
    QMenu *helpMenu;
};

#endif

