#ifndef WIDGETDLL_H
#define WIDGETDLL_H

#include <QWidget>
#include "WidgetDll_global.h"

namespace Ui {
class WidgetDll;
}

class WIDGETDLL_EXPORT WidgetDll : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetDll(QWidget *parent = nullptr);
    ~WidgetDll();

private slots:
    void on_pushButton_clicked();

private:
    Ui::WidgetDll *ui;
};

#endif // WIDGETDLL_H
