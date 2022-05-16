#include "wordfrequencydialog.h"
#include "ui_wordfrequencydialog.h"

WordFrequencyDialog::WordFrequencyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WordFrequencyDialog)
{
    ui->setupUi(this);
}

WordFrequencyDialog::~WordFrequencyDialog()
{
    delete ui;
}
