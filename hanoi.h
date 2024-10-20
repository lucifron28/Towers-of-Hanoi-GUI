#ifndef HANOI_H
#define HANOI_H
#include "pole.h"
#include "disk.h"
#include "move.h"
#include <QStack>
#include <QMainWindow>
#include <QTimer>
#include <QQueue>
namespace Ui {
class Hanoi;
}

class Hanoi : public QMainWindow
{
    Q_OBJECT

public:
    explicit Hanoi(QWidget *parent = 0);
    ~Hanoi();

private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_1_clicked();

    void on_action_New_triggered();

    void on_action_Undo_triggered();

    void on_action_Undo_All_triggered();

    void delayedAction();

    void on_action_3_triggered();
    void on_action_2_triggered();
    void on_action_4_triggered();
    void on_action_5_triggered();
    void on_action_6_triggered();
    void on_action_7_triggered();
    void on_action_8_triggered();



    void on_actionAuto_Play_triggered();

private:
    Ui::Hanoi *ui;
    pole* poles[3];
    QQueue<Move> schedule;
    QStack<Move> history;
    QTimer* timer;
    int value;
    void on_pushButton_clicked(pole* p);
    void paintEvent(QPaintEvent* event);

};

#endif // HANOI_H
