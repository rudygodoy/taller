#include <QtGui>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

// Inicializa ventana principal y define titulo
    this->setWindowTitle(tr("Speed Factory"));
    this->resize(480, 320);

    connect( ui->pushButton_BuscarCliente, SIGNAL( clicked() ), this, SLOT( about() ) );
    connect( ui->actionAbout, SIGNAL( triggered() ), this, SLOT ( about() ) );
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::about(){
    QMessageBox::about(this, "About Speed Factory", tr("Esta aplicación fue ble bla"));
}
