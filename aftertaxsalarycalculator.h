#ifndef AFTERTAXSALARYCALCULATOR_H
#define AFTERTAXSALARYCALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class AfterTaxSalaryCalculator;
}
QT_END_NAMESPACE

class AfterTaxSalaryCalculator : public QMainWindow
{
    Q_OBJECT

public:
    AfterTaxSalaryCalculator(QWidget *parent = nullptr);
    ~AfterTaxSalaryCalculator();

private:
    Ui::AfterTaxSalaryCalculator *ui;
};
#endif // AFTERTAXSALARYCALCULATOR_H
