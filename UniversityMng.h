#ifndef UNIVERSITYMNG_H
#define UNIVERSITYMNG_H

#include <QWidget>

namespace Ui {
class UniversityMng;
}

class UniversityMng : public QWidget
{
    Q_OBJECT

public:
    explicit UniversityMng(QWidget *parent = nullptr);
    ~UniversityMng();

private:
    Ui::UniversityMng *ui;
protected:
    void closeEvent(QCloseEvent *event) override;
};

#endif // UNIVERSITYMNG_H
