#ifndef QTAPP_H
#define QTAPP_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class QtApp;
}

class QtApp : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit QtApp(QWidget *parent = 0);
    ~QtApp();
    
public slots:
    void registrarClienteMenu();
    void aboutMenu();

    void buscarCliente();

private:
    Ui::QtApp *ui;
};

#endif // QTAPP_H
