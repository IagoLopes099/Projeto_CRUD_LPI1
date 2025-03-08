#ifndef CAPPAGE_H
#define CAPPAGE_H

#include <QDialog>

#include "Equipe.h"

namespace Ui {
class CapPage;
}

class CapPage : public QDialog
{
    Q_OBJECT

public:
    explicit CapPage(QWidget *parent = nullptr);
    ~CapPage();

private slots:
    void on_BuscarButtonCP_clicked();

    void on_AtualizarButtonCP_clicked();

    void on_DeletarButtonCP_clicked();

private:
    Ui::CapPage *ui;
};

#endif // CAPPAGE_H
