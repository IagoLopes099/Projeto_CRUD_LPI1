#ifndef EDITARJANELA_H
#define EDITARJANELA_H

#include <QDialog>

namespace Ui {
class BuscarJanela;
}

class BuscarJanela : public QDialog
{
    Q_OBJECT

public:
    explicit BuscarJanela(QWidget *parent = nullptr, int id_usuario=NULL);
    ~BuscarJanela();

private slots:
    void on_EditarButton_clicked();

    void on_cancelarEditButton_clicked();

private:
    Ui::BuscarJanela *ui;
};

#endif // EDITARJANELA_H
