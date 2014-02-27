#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenuBar>
#include <QTextEdit>
#include <iostream>
#include<QFileDialog>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //ui->setupUi(this);
    this->statusBar();

    //Définir les actions
    // open.png est un fichier qui sera spécifié dans une fichier de ressources .qrc
    QAction * action1 = new QAction( QIcon(":/images/open.png"), tr("&Open..."), this );
    QAction * action2 = new QAction( QIcon(":/images/save.png"), tr("&Save..."), this );
    QAction * action3 = new QAction( QIcon(":/images/exit.png"), tr("&Quit..."), this );

    // rajouter l’action au menu déroulant
    action1->setShortcut( tr("Ctrl+N") );
    action1->setToolTip( tr("Open file") );
    action1->setStatusTip( tr("Open file") );

    action2->setShortcut( tr("Ctrl+S") );
    action2->setToolTip( tr("Save file") );
    action2->setStatusTip( tr("Save file") );

    action3->setShortcut( tr("Ctrl+Q") );
    action3->setToolTip( tr("Quit") );
    action3->setStatusTip( tr("Quit") );


    //menuBar() est une methode de QMainWindow
    QMenuBar * menubar = menuBar();
    QMenu * fileMenu = menubar->addMenu( tr("&File") );

    fileMenu->addAction( action1 );
    fileMenu->addAction( action2 );
    fileMenu->addAction( action3 );

    //Barre d'outils
    QToolBar * toolBar = addToolBar( tr("File") );
    toolBar->addAction(action1);
    toolBar->addAction(action2);
    toolBar->addAction(action3);

    //Text edit
    QTextEdit * text = new QTextEdit(this);
    setCentralWidget( text );


    //connexion aux slots
    connect( action1, SIGNAL(triggered( )), this, SLOT(openFile( )) );
    connect( action2, SIGNAL(triggered( )), this, SLOT(saveFile( )) );
    connect( action3, SIGNAL(triggered( )), this, SLOT(quitApp( )) );




}

MainWindow::~MainWindow()
{
    delete ui;
}


//implementation des slots
void MainWindow::openFile(){
//    QFileDialog::getOpenFileName(this,tr("Open file"),"/cal/homes/acaron",tr("*"));

    QFileDialog dialog (this);//= QFileDialog::getOpenFileName(this,tr("Open file"),"/cal/homes/acaron",tr("*"));
    dialog.setFilter("*");
    QStringList fileNames;
    if (dialog.exec() == QDialog::Accepted) {
        fileNames = dialog.selectedFiles();
        QString filename = fileNames[0];
        cout<<filename.toStdString()<<endl;
    }
    //*/

    cout<<"opening file"<<endl;
}

void MainWindow::saveFile(){
    cout<<"saving file"<<endl;
}

void MainWindow::quitApp(){
    cout<<"exiting"<<endl;
}

