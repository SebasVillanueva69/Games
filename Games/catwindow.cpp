#include "catwindow.h"
#include "ui_catwindow.h"
#include <QPixmap>
#include <QIcon>
#include <time.h>
#include <QDebug>

CatWindow::CatWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CatWindow)
{
    ui->setupUi(this);
    generateMatrix();
}

void CatWindow::generateMatrix()
{
    for (int i = 0; i < 11; i++)
    {
        for(int j = 0; j < 11; j++)
        {
            matrix[i][j] = new QPushButton( "" , ui->catFrame);
            //matrix[i][j]->setMaximumSize(31,31);
            QPixmap pix(":/new/catchcat/circle.png");
            QIcon icon(pix);
            matrix[i][j]->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
            matrix[i][j]->setIcon(icon);
            matrix[i][j]->setIconSize(QSize(190,50));
            QObject::connect(matrix[i][j],SIGNAL(clicked()),this,SLOT(onButtonClicked()));
            ui->catLayout->addWidget(matrix[i][j],i,j);
            matrix[i][j]->show();
        }
    }
    srand(time(NULL));
    QPixmap pix(":/new/catchcat/cat.png");
    QIcon icon(pix);
    matrix[5][5]->setIcon(icon);
}

CatWindow::~CatWindow()
{
    delete ui;
}

void CatWindow::onButtonClicked()
{
    QPixmap black(":/new/catchcat/blackcircle.png");
    QIcon blackIco(black);
    ((QPushButton*)sender())->setIcon(blackIco);


}
