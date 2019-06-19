#ifndef CATWINDOW_H
#define CATWINDOW_H

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class CatWindow;
}

class CatWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CatWindow(QWidget *parent = nullptr);
    bool won = false;
    QPushButton *matrix[11][11];
    void generateMatrix();
    ~CatWindow();

private:
    Ui::CatWindow *ui;
private slots:
    void onButtonClicked();
};

#endif // CATWINDOW_H
