#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Badjuice");
    scene=new QGraphicsScene(this);//escena
    view=new QGraphicsView;//escenario
    hoja= new cuchillo;

    QPixmap fondo(":/recursos/fondomadera.png");

    tiempocuhillo=new QTimer();
    tiempoCrear=new QTimer();
    tiempoCrearA=new QTimer();
    tiempocrono=new QTimer();
    tiempocuhillo->start(40);
    tiempoCrear->start(1000);
    tiempoCrearA->start(2000);
    tiempocrono->start(30);

    scene->setSceneRect(0,0,860,610);
    ui->graphicsView->setBackgroundBrush(fondo.scaled(730,560,Qt::IgnoreAspectRatio,Qt::FastTransformation));
    ui->graphicsView->setCacheMode(QGraphicsView::CacheBackground);
    ui->graphicsView->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
    ui->graphicsView->setDragMode(QGraphicsView::ScrollHandDrag);


    scene->addItem(hoja);

    connect(tiempocuhillo,&QTimer::timeout,this,&MainWindow::poscuchillo);
    connect(tiempoCrear,&QTimer::timeout,this,&MainWindow::CrearFruta);
    connect(tiempoCrearA,&QTimer::timeout,this,&MainWindow::CrearAnimales);
    connect(tiempocrono,&QTimer::timeout,this,&MainWindow::cronometro);
    ui->graphicsView->setScene(scene);
}
void MainWindow::cronometro()
{

    int r=crono/60000;
    int c;
    QString min=QString::number(r);
    r=crono%60000;
    c=r/1000;
    QString seg=QString::number(c);
    QString tex=min+":"+seg;
    ui->lineEdit->setText(tex);
    crono-=30;
    if(crono<=0){
        tiempoCrear->stop();
        tiempoCrearA->stop();
        tiempocuhillo->stop();
        tiempocrono->stop();
        scene->clear();
    }
}
void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_A){
        hoja->setVx(-20);

    }else if (event->key() == Qt::Key_S) {
        hoja->setVy(20);

    }else if (event->key() == Qt::Key_D) {
        hoja->setVx(20);

    }else if(event->key() == Qt::Key_W) {
        hoja->setVy(-20);
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::poscuchillo()
{
    hoja->actualizar();    
    //***********************
    //bloque que da movimiento a todas las frutas y animales
    for(auto item:qAsConst(listabanano)){
        item->curvaMov();
    }
    for(auto item:qAsConst(listarata)){
        item->movimiento();
    }
    for(auto item: qAsConst(listaranha)){
        item->movimiento();
    }
    for(auto item: qAsConst(listacucaracha)){
        item->movimiento();
    }
    for(auto item: qAsConst(listagrillo)){
        item->movimiento();
    }
    for(auto item: qAsConst(listagusano)){
        item->movimiento();
    }
    for(auto item: qAsConst(listafresa)){
        item->curvaMov();
    }
    for(auto item: qAsConst(listalata)){
        item->curvaMov();
    }
    for(auto item: qAsConst(listamango)){
        item->curvaMov();
    }
    for(auto item: qAsConst(listacigarro)){
        item->curvaMov();
    }
    for(auto item: qAsConst(listamanzana)){
        item->curvaMov();
    }
    for(auto item: qAsConst(listamora)){
        item->curvaMov();
    }
    for(auto item: qAsConst(listanaranja)){
        item->curvaMov();
    }
    for(auto item: qAsConst(listapera)){
        item->curvaMov();
    }
    for(auto item: qAsConst(listasandia)){
        item->curvaMov();
    }
    for(auto item: qAsConst(listazapato)){
        item->curvaMov();
    }
    //***********************
    //detecta colisiones
    for(auto banano:qAsConst(listabanano)){
        if(banano->collidesWithItem(hoja,Qt::IntersectsItemBoundingRect)){
            banano->setVy(15);
            banano->setVx(0);
            puntj+=banano->getPrecio();//si corta banano gana precio del banano
            banano->setPrecio(0);
            ui->lineEdit_2->setText(QString::number(puntj));
        }

    }
    for(auto zapato:qAsConst(listazapato)){
        if(zapato->collidesWithItem(hoja,Qt::IntersectsItemBoundingRect)){
            zapato->setVy(15);
            zapato->setVx(0);
            puntj+=zapato->getPrecio();//si corta zapato descuenta el precio
            zapato->setPrecio(0);//descuenta 70 centavos
            ui->lineEdit_2->setText(QString::number(puntj));
        }
    }
    for(auto manzana:qAsConst(listamanzana)){
        if(manzana->collidesWithItem(hoja,Qt::IntersectsItemBoundingRect)){
            manzana->setVy(15);
            manzana->setVx(0);
            puntj+=manzana->getPrecio();
            manzana->setPrecio(0);
            ui->lineEdit_2->setText(QString::number(puntj));
        }
    }
    for(auto pera:qAsConst(listapera)){
        if(pera->collidesWithItem(hoja,Qt::IntersectsItemBoundingRect)){
            pera->setVy(15);
            pera->setVx(0);
            puntj+=pera->getPrecio();
            pera->setPrecio(0);
            ui->lineEdit_2->setText(QString::number(puntj));
        }
    }
    for(auto mora:qAsConst(listamora)){
        if(mora->collidesWithItem(hoja,Qt::IntersectsItemBoundingRect)){
            mora->setVy(15);
            mora->setVx(0);
            puntj+=mora->getPrecio();
            mora->setPrecio(0);
            ui->lineEdit_2->setText(QString::number(puntj));
        }
    }
    for(auto mango:qAsConst(listamango)){
        if(mango->collidesWithItem(hoja,Qt::IntersectsItemBoundingRect)){
            mango->setVy(15);
            mango->setVx(0);
            puntj+=mango->getPrecio();
            mango->setPrecio(0);
            ui->lineEdit_2->setText(QString::number(puntj));
        }
    }
    for(auto sandia:qAsConst(listasandia)){
        if(sandia->collidesWithItem(hoja,Qt::IntersectsItemBoundingRect)){
            sandia->setVy(15);
            sandia->setVx(0);
            puntj+=sandia->getPrecio();
            sandia->setPrecio(0);
            ui->lineEdit_2->setText(QString::number(puntj));
        }
    }
    for(auto cigarro:qAsConst(listacigarro)){
        if(cigarro->collidesWithItem(hoja,Qt::IntersectsItemBoundingRect)){
            cigarro->setVy(15);
            cigarro->setVx(0);
            puntj-=cigarro->getPrecio();
            cigarro->setPrecio(0);
            ui->lineEdit_2->setText(QString::number(puntj));
        }
    }
    for(auto fresa:qAsConst(listafresa)){
        if(fresa->collidesWithItem(hoja,Qt::IntersectsItemBoundingRect)){
            fresa->setVy(15);
            fresa->setVx(0);
            puntj+=fresa->getPrecio();
            fresa->setPrecio(0);
            ui->lineEdit_2->setText(QString::number(puntj));
        }
    }
    for(auto lata:qAsConst(listalata)){
        if(lata->collidesWithItem(hoja,Qt::IntersectsItemBoundingRect)){
            lata->setVy(15);
            lata->setVx(0);
            puntj-=lata->getPrecio();
            lata->setPrecio(0);
            ui->lineEdit_2->setText(QString::number(puntj));
        }
    }
    for(auto rata:qAsConst(listarata)){
        if(rata->collidesWithItem(hoja,Qt::IntersectsItemBoundingRect)){
            rata->setVx(0);
            rata->setVy(15);
            puntj-=rata->getPrecio();
            rata->setPrecio(0);
            ui->lineEdit_2->setText(QString::number(puntj));
        }
    }
    for(auto ara:qAsConst(listaranha)){
        if(ara->collidesWithItem(hoja,Qt::IntersectsItemBoundingRect)){
           ara->setOpcion(1);
           puntj-=ara->getPrecio();
           ara->setPrecio(0);
           ui->lineEdit_2->setText(QString::number(puntj));
        }
    }
    for(auto cucaracha:qAsConst(listacucaracha)){
        if(cucaracha->collidesWithItem(hoja,Qt::IntersectsItemBoundingRect)){
           cucaracha->setOpcion(1);
           puntj-=cucaracha->getPrecio();
           cucaracha->setPrecio(0);
           ui->lineEdit_2->setText(QString::number(puntj));
        }
    }
    for(auto grillo:qAsConst(listagrillo)){
        if(grillo->collidesWithItem(hoja,Qt::IntersectsItemBoundingRect)){
           grillo->setOpcion(1);
           puntj-=grillo->getPrecio();
           grillo->setPrecio(0);
           ui->lineEdit_2->setText(QString::number(puntj));
        }
    }
    for(auto gusano:qAsConst(listagusano)){
        if(gusano->collidesWithItem(hoja,Qt::IntersectsItemBoundingRect)){
           gusano->setOpcion(1);
           puntj-=gusano->getPrecio();
           gusano->setPrecio(0);
           ui->lineEdit_2->setText(QString::number(puntj));
        }
    }
}

void MainWindow::CrearFruta()
{

    qreal opcion2=QRandomGenerator::global()->bounded(11);
    switch (int(opcion2)) {
    case 0: listabanano.push_back(new banano);
            scene->addItem(listabanano.back());
        break;
    case 1: listacigarro.push_back(new cigarro);
            scene->addItem(listacigarro.back());
        break;
    case 2: listafresa.push_back(new fresa);
            scene->addItem(listafresa.back());
        break;
    case 3: listalata.push_back(new lata);
            scene->addItem(listalata.back());
        break;
    case 4: listamango.push_back(new mango);
            scene->addItem(listamango.back());
        break;
    case 5: listamanzana.push_back(new manzana);
            scene->addItem(listamanzana.back());
        break;
    case 6: listamora.push_back(new mora);
            scene->addItem(listamora.back());
        break;
    case 7: listanaranja.push_back(new naranja);
            scene->addItem(listanaranja.back());
        break;
    case 8: listapera.push_back(new pera);
            scene->addItem(listapera.back());
        break;
    case 9: listasandia.push_back(new sandia);
            scene->addItem(listasandia.back());
        break;
    case 10: listazapato.push_back(new zapato);
             scene->addItem(listazapato.back());
        break;
    default:;
    }

}

void MainWindow::CrearAnimales()
{
    qreal opcion=QRandomGenerator::global()->bounded(5);

    switch (int(opcion)) {
    case 0: listarata.push_back(new rata);
        scene->addItem(listarata.back());
        break;
    case 1: listaranha.push_back(new aranha);
        scene->addItem(listaranha.back());
        break;
    case 2:
        listacucaracha.push_back(new cucaracha);
        scene->addItem(listacucaracha.back());
        break;
    case 3:
        listagrillo.push_back(new grillo);
        scene->addItem(listagrillo.back());
        break;
    case 4:
        listagusano.push_back(new gusano);
        scene->addItem(listagusano.back());
        break;
    default:
        ;
    }

}

