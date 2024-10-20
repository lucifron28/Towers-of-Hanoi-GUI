#ifndef UI_HANOI_H
#define UI_HANOI_H

#include <QtCore/QVariant>
#include <QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hanoi
{
public:
    QAction *action_New;
    QAction *action_Undo;
    QAction *action_Undo_All;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_8;
    QWidget *centralWidget;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QMenu *menu_Game;
    QMenu *menu_Set_Disks;
    QMenu *menu_Play;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Hanoi)
    {
        if (Hanoi->objectName().isEmpty())
            Hanoi->setObjectName(QString::fromUtf8("Hanoi"));
        Hanoi->resize(799, 475);
        action_New = new QAction(Hanoi);
        action_New->setObjectName(QString::fromUtf8("action_New"));
        action_Undo = new QAction(Hanoi);
        action_Undo->setObjectName(QString::fromUtf8("action_Undo"));
        action_Undo_All = new QAction(Hanoi);
        action_Undo_All->setObjectName(QString::fromUtf8("action_Undo_All"));
        action_2 = new QAction(Hanoi);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(Hanoi);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(Hanoi);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(Hanoi);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_6 = new QAction(Hanoi);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        action_7 = new QAction(Hanoi);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        action_8 = new QAction(Hanoi);
        action_8->setObjectName(QString::fromUtf8("action_8"));
        centralWidget = new QWidget(Hanoi);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(20, 0, 231, 401));
        pushButton_1->setFlat(true);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 0, 231, 401));
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(520, 0, 231, 401));
        pushButton_3->setFlat(true);
        Hanoi->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Hanoi);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 799, 26));
        menu_Game = new QMenu(menuBar);
        menu_Game->setObjectName(QString::fromUtf8("menu_Game"));
        menu_Set_Disks = new QMenu(menu_Game);
        menu_Set_Disks->setObjectName(QString::fromUtf8("menu_Set_Disks"));
        menu_Play = new QMenu(menuBar);
        menu_Play->setObjectName(QString::fromUtf8("menu_Play"));
        Hanoi->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Hanoi);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Hanoi->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Hanoi);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Hanoi->setStatusBar(statusBar);

        menuBar->addAction(menu_Game->menuAction());
        menuBar->addAction(menu_Play->menuAction());
        menu_Game->addAction(action_New);
        menu_Game->addAction(menu_Set_Disks->menuAction());
        menu_Set_Disks->addAction(action_2);
        menu_Set_Disks->addAction(action_3);
        menu_Set_Disks->addAction(action_4);
        menu_Set_Disks->addAction(action_5);
        menu_Set_Disks->addAction(action_6);
        menu_Set_Disks->addAction(action_7);
        menu_Set_Disks->addAction(action_8);
        menu_Play->addAction(action_Undo);
        menu_Play->addAction(action_Undo_All);

        retranslateUi(Hanoi);

        QMetaObject::connectSlotsByName(Hanoi);
    } // setupUi

    void retranslateUi(QMainWindow *Hanoi)
    {
        Hanoi->setWindowTitle(QCoreApplication::translate("Hanoi", "Hanoi", nullptr));
        action_New->setText(QCoreApplication::translate("Hanoi", "&New", nullptr));
        action_Undo->setText(QCoreApplication::translate("Hanoi", "&Undo", nullptr));
#if QT_CONFIG(shortcut)
        action_Undo->setShortcut(QCoreApplication::translate("Hanoi", "Ctrl+Z", nullptr));
#endif
        action_Undo_All->setText(QCoreApplication::translate("Hanoi", "Undo &All", nullptr));
#endif
        action_2->setText(QCoreApplication::translate("Hanoi", "&2", nullptr));
        action_3->setText(QCoreApplication::translate("Hanoi", "&3", nullptr));
        action_4->setText(QCoreApplication::translate("Hanoi", "&4", nullptr));
        action_5->setText(QCoreApplication::translate("Hanoi", "&5", nullptr));
        action_6->setText(QCoreApplication::translate("Hanoi", "&6", nullptr));
        action_7->setText(QCoreApplication::translate("Hanoi", "&7", nullptr));
        action_8->setText(QCoreApplication::translate("Hanoi", "&8", nullptr));
        pushButton_1->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        menu_Game->setTitle(QCoreApplication::translate("Hanoi", "&Game", nullptr));
        menu_Set_Disks->setTitle(QCoreApplication::translate("Hanoi", "&Set Disks", nullptr));
        menu_Play->setTitle(QCoreApplication::translate("Hanoi", "&Play", nullptr));
    }

};

namespace Ui {
    class Hanoi: public Ui_Hanoi {};
} // namespace Ui

QT_END_NAMESPACE
