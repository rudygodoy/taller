#include <QtGui>
#include "qtApp.h"
#include "ui_mainwindow.h"
#include "taller.h"

QtApp::QtApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtApp)
{
    ui->setupUi(this);

// Inicializa ventana principal y define titulo
    this->setWindowTitle(tr("Speed Factory"));
    this->resize(480, 320);

    connect( ui->pushButton_BuscarCliente, SIGNAL( clicked() ), this, SLOT( buscarCliente() ) );
    connect( ui->actionAbout, SIGNAL( triggered() ), this, SLOT ( aboutMenu() ) );
    connect( ui->actionRegistrarCliente, SIGNAL( triggered() ), this, SLOT ( registrarClienteMenu() ) );

//    Cliente sf;
    QString d = "Av. La Marina 689";
    QString n = "Speed Factory Inc.";
    QString t = "54-121342";
//    sf.setDireccion(d);
//    sf.setNombre(n);
//    sf.setTelefono(t);

//    Taller taller(n);
}


QtApp::~QtApp()
{
    delete ui;
}

void QtApp::buscarCliente(){
    QString _c = ui->textoBuscar->text();
    if(_c.size() > 1)
        QMessageBox::about(this, "foo", _c);
}

void QtApp::aboutMenu(){
    QMessageBox::about(this, "About Speed Factory", tr("Speed Factory by\nRudy Godoy\n\n(c) 2012"));
}

void QtApp::registrarClienteMenu(){

    QMessageBox::about(this, "Hola", "nuevo cliente");
}
