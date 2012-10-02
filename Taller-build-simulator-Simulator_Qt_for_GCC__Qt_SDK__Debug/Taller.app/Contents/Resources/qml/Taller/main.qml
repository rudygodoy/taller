// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Rectangle {
    width: 360
    height: 360
    Text {
        text: qsTr("Speed Factory")
        font.bold: true
        font.pointSize: 16
        horizontalAlignment: Text.AlignHCenter
        anchors.centerIn: parent
    }
    MouseArea {
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }

        ListView {
            id: list_view1
            x: 27
            y: 239
            width: 110
            height: 160
            delegate: Item {
                x: 5
                height: 40
                Row {
                    id: row1
                    spacing: 10
                    Rectangle {
                        width: 40
                        height: 40
                        color: colorCode
                    }

                    Text {
                        text: name
                        anchors.verticalCenter: parent.verticalCenter
                        font.bold: true
                    }
                }
            }
            model: ListModel {
                ListElement {
                    name: "Grey"
                    colorCode: "grey"
                }

                ListElement {
                    name: "Red"
                    colorCode: "red"
                }

                ListElement {
                    name: "Blue"
                    colorCode: "blue"
                }

                ListElement {
                    name: "Green"
                    colorCode: "green"
                }
            }
            opacity: 0
        }
    }
    states: [
        State {
            name: "State1"

            PropertyChanges {
                target: grid1
                x: 33
                y: 48
                opacity: 1
            }

            PropertyChanges {
                target: row1
                x: -61
                y: 26
                opacity: 1
            }

            PropertyChanges {
                target: list_view1
                x: 29
                y: 84
                opacity: 1
            }
        }
    ]
}
