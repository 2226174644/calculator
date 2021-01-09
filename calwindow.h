#ifndef CALWINDOW_H
#define CALWINDOW_H
#include <string>
#include <QMainWindow>
#include <QSystemTrayIcon>
#include "calculator.h"
QT_BEGIN_NAMESPACE
namespace Ui { class CalWindow; }
QT_END_NAMESPACE

class CalWindow : public QMainWindow
{
    Q_OBJECT

public:
    CalWindow(QWidget *parent = nullptr);
    ~CalWindow();

    QString a = "";
    QString b = "";

protected:
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);


private slots:

    void on_pushButton_0_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_backspace_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButton_X_clicked();

    void on_pushButton_dian_clicked();

    void on_pushButton_e_clicked();

    void on_plus_clicked();

    void on_minus_clicked();

    void on_Aclear_clicked();

    void on_Bclear_clicked();

    void on_Cclear_clicked();

private:
    Ui::CalWindow *ui;
    QPoint m_point;
        QSystemTrayIcon *trayIcon;
        QMenu* trayIconMenu;
        QAction* quitAction;
        QAction* aboutAction;
        QAction* minAction;
        QAction* restoreAction;
        QAction*  configAction;
        calculator c;
        int m_i = 0;
        int queren = 0;
};
#endif // CALWINDOW_H
