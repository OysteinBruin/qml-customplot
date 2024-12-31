#pragma once

#include <QtQuick>
class QCustomPlot;
class QCPAbstractPlottable;

class CustomPlotItem : public QQuickPaintedItem
{
    Q_OBJECT

public:
    CustomPlotItem( QQuickItem* parent = 0 );
    virtual ~CustomPlotItem();

    void paint( QPainter* painter );

    Q_INVOKABLE void initCustomPlot();

private:
    void setupRealtimeDataDemo(QCustomPlot *customPlot);
    QCustomPlot*         m_CustomPlot;
    QTimer dataTimer;

private slots:
    void onCustomReplot();
    void updateCustomPlotSize();
    void realtimeDataSlot();


};
