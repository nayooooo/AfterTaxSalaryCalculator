#include "aftertaxsalarycalculator.h"
#include "ui_aftertaxsalarycalculator.h"

AfterTaxSalaryCalculator::AfterTaxSalaryCalculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AfterTaxSalaryCalculator)
{
    ui->setupUi(this);
}

AfterTaxSalaryCalculator::~AfterTaxSalaryCalculator()
{
    delete ui;
}
