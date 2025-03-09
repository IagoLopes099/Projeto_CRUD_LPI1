#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "Equipe.h"



QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr, String subequipe="");
    ~MainWindow();

private slots:
    void on_CadastrarButton_clicked();

    void on_homeButton_clicked();

    void on_CadastrarInputButton_clicked();

    void on_DeletarButtonHP_clicked();

    void on_AtualizarButtonHP_clicked();

    void on_BuscarButtonHP_clicked();

    void on_EditarButtonHP_clicked();

private:
    Ui::MainWindow *ui;
    String subequipeLider;
    BancoDeDados banco;
};
#endif // MAINWINDOW_H
