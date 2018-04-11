//11/4/2018
// By: Zakaria Gomma

import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 1.4


Window {
    visible: true
    width: 500
    height: 500

    id: root



    Canvas {
        id: canvas
        anchors.top: tools.bottom
        width: 500
        height: 500
        property int lastX: 0
        property int lastY: 0


        onPaint: {
            //Do cool stuff
            var ctx = getContext("2d")
            ctx.lineWidth = 2
            ctx.strokeStyle = color.red
            ctx.beginPath()
            ctx.moveTo(lastX, lastY)
            lastX = area.mouseX
            lastY = area.mouseY
            ctx.lineTo(lastX, lastY)
            ctx.stroke()

            mouse.test()
            mouse.add(lastX,lastY);
            mouse.add(Qt.point(lastX,lastY));


        }
        MouseArea {
                   id: area
                   anchors.fill: parent
                   onPressed: {
                     canvas.lastX = mouseX
                     canvas.lastY = mouseY
                   }

                   onPositionChanged: {
                       canvas.requestPaint()
                   }
               }
           }

}




