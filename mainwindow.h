#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QRandomGenerator>
#include <QKeyEvent>
#include <QTimer>
#include <QList>
#include "cuchillo.h"
#include "animales.h"
#include "frutas.h"
#include "rata.h"
#include "aranha.h"
#include "cucaracha.h"
#include "grillo.h"
#include "gusano.h"
#include "banano.h"
#include "cigarro.h"
#include "fresa.h"
#include "lata.h"
#include "mango.h"
#include "manzana.h"
#include "mora.h"
#include "naranja.h"
#include "pera.h"
#include "sandia.h"
#include "zapato.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void keyPressEvent(QKeyEvent *event);

public slots:
    void poscuchillo(void);
    void CrearFruta(void);
    void CrearAnimales(void);
    void cronometro(void);
private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsView *view;
    cuchillo *hoja;
    qreal puntj=0;
    int crono=60000;

    QList<rata *> listarata;
    QList<aranha *> listaranha;
    QList<cucaracha *> listacucaracha;
    QList<grillo *> listagrillo;
    QList<gusano *>listagusano;

    QList<banano *> listabanano;
    QList<fresa *> listafresa;
    QList<mango *> listamango;
    QList<manzana *> listamanzana;
    QList<mora *> listamora;
    QList<naranja *> listanaranja;
    QList<pera *> listapera;
    QList<sandia *> listasandia;
    QList<cigarro *> listacigarro;
    QList<lata *> listalata;
    QList<zapato *> listazapato;

    QTimer *tiempocuhillo;
    QTimer *tiempoCrear;
    QTimer *tiempoCrearA;
    QTimer *tiempocrono;

};
#endif // MAINWINDOW_H
