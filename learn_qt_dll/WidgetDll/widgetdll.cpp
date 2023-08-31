#include "widgetdll.h"
#include "ui_widgetdll.h"

WidgetDll::WidgetDll(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetDll)
{
    ui->setupUi(this);
}

WidgetDll::~WidgetDll()
{
    delete ui;
}

void WidgetDll::on_pushButton_clicked()
{
    qDebug() <<"aaaaaaaa";
}

