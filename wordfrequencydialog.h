#ifndef WORDFREQUENCYDIALOG_H
#define WORDFREQUENCYDIALOG_H

#include <QDialog>

namespace Ui {
class WordFrequencyDialog;
}

class WordFrequencyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WordFrequencyDialog(QWidget *parent = nullptr);
    ~WordFrequencyDialog();

private:
    Ui::WordFrequencyDialog *ui;
};

#endif // WORDFREQUENCYDIALOG_H
