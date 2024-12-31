import QtQuick
import QtQuick.Controls.Material
import com.myapp.CustomPlot 1.0

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("QCustomplom QML demo")

    CustomPlotItem {
        id: customPlot
        anchors.fill: parent

        Component.onCompleted: customPlot.initCustomPlot()
    }
}
