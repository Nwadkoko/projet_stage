import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.3

import QtQuick.Controls.Styles 1.4

Window {
    width: 1280
    height: 720
    color: "#444444"
    visible: true
    title: qsTr("IHM Peritox")




    Rectangle {
        id: rectangle
        x: 0
        y: 0
        width: 1280
        height: 720
        color: "#444444"
        visible: true

        Button {
            id: sendButton
            x: 587
            y: 491
            width: 109
            height: 55
            text: qsTr("Send")
            font.pointSize: 13
            onClicked: {
                connectionGen.setIpAddress(textEditIpAddressGen.text);
                connectionGen.setPort(textEditPortGen.text);
                connectionCom.setIpAddress(textEditIpAddressCom.text);
                connectionCom.setPort(textEditPortCom.text);
                rectangle.visible = false;
                rectangle1.visible = true;
            }
        }

        Text {
            id: textHome
            x: 588
            y: 41
            width: 314
            height: 51
            color: "#ffffff"
            text: qsTr("Connection and configuration page")
            elide: Text.ElideNone
            wrapMode: Text.WordWrap
            font.pixelSize: 20
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Item {
            id: itemGenConfig
            x: 134
            y: 179
            width: 373
            height: 218

            Text {
                id: textGeneratorConfig
                x: 89
                y: 45
                width: 194
                height: 20
                color: "#ffffff"
                text: qsTr("Generator configuration")
                font.family: "Verdana"
                styleColor: "#ffffff"
                font.pixelSize: 16
            }

            Text {
                id: textIpAddGenConfig
                x: 52
                y: 99
                width: 77
                height: 19
                color: "#ffffff"
                text: qsTr("IP Address")
                textFormat: Text.RichText
                font.pixelSize: 16
            }

            Text {
                id: textPortGenConfig
                x: 52
                y: 161
                width: 29
                height: 19
                color: "#ffffff"
                text: qsTr("Port")
                font.pixelSize: 16
            }

            TextEdit {
                id: textEditPortGen
                x: 167
                y: 161
                width: 145
                height: 19
                color: "#ffffff"
                text: ""
                font.pixelSize: 16

                property string placeholderText: "Example : 40"

                Text {
                    x: 0
                    y: 2
                    width: 145
                    height: 19
                    text: textEditPortGen.placeholderText
                    font.wordSpacing: -0.2
                    style: Text.Normal
                    fontSizeMode: Text.FixedSize
                    font.italic: true
                    font.capitalization: Font.Capitalize
                    font.pixelSize: 16
                    color: "#aaa"
                    visible: !textEditPortGen.text
                }
            }

            TextEdit {
                id: textEditIpAddressGen
                x: 180
                y: 96
                width: 145
                height: 19
                color: "#ffffff"
                text: ""
                anchors.verticalCenterOffset: -220
                anchors.horizontalCenterOffset: -231
                anchors.rightMargin: 54
                anchors.bottomMargin: 99
                anchors.leftMargin: 167
                anchors.topMargin: 98
                font.pixelSize: 16
                selectionColor: "#cc020080"
                anchors.fill: parent
                anchors.centerIn: parent

                property string placeholderText: "Example : 192.0.0.1"

                Text {
                    x: 0
                    y: 1
                    width: 145
                    height: 19
                    text: textEditIpAddressGen.placeholderText
                    font.italic: true
                    style: Text.Normal
                    font.capitalization: Font.Capitalize
                    font.pixelSize: 16
                    color: "#aaa"
                    visible: !textEditIpAddressGen.text
                }

            }
        }

        Item {
            id: itemComConfig
            x: 747
            y: 179
            width: 367
            height: 218

            Text {
                id: textComConfig
                x: 91
                y: 42
                color: "#ffffff"
                text: qsTr("Commutator configuration")
                font.pixelSize: 16
            }

            Text {
                id: textIpAddressComConfig
                x: 23
                y: 93
                color: "#ffffff"
                text: qsTr("IP Address")
                font.pixelSize: 16
            }

            Text {
                id: textPortComConfig
                x: 23
                y: 158
                color: "#ffffff"
                text: qsTr("Port")
                font.pixelSize: 16
            }



            TextEdit {
                id: textEditIpAddressCom
                x: 196
                y: 93
                width: 150
                height: 20
                color: "#ffffff"
                text: qsTr("")
                font.pixelSize: 16

                property string placeholderText: "Example 192.0.0.2"

                Text {
                    id: text1
                    width: 148
                    height: 20
                    color: "#aaaaaa"
                    font.italic: true
                    font.pixelSize: 16
                    text: textEditIpAddressCom.placeholderText
                    visible: !textEditIpAddressCom.text
                }
            }

            TextEdit {
                id: textEditPortCom
                x: 196
                y: 158
                width: 150
                height: 20
                text: qsTr("")
                font.pixelSize: 16
                color: "#ffffff"

                property string placeholderText: "Example 41"

                Text {
                    id: text2
                    width: 150
                    height: 20
                    color: "#aaaaaa"
                    text: textEditPortCom.placeholderText
                    font.italic: true
                    font.pixelSize: 16
                    visible: !textEditPortCom.text
                }
            }
        }

        ProgressBar {
            id: progressBar
            x: 365
            y: 614
            width: 552
            height: 56
            indeterminate: true
            value: 0
        }
    }

    Rectangle {
        id: rectangle1
        x: 0
        y: 0
        width: 1280
        height: 720
        color: "#444444"
        visible: false

        Text {
            id: textSetFrequency
            x: 56
            y: 77
            width: 101
            height: 21
            color: "#ffffff"
            text: qsTr("Set frequency")
            font.pixelSize: 16
        }

        TextEdit {
            id: textEditFrequency
            x: 175
            y: 79
            width: 145
            height: 19
            color: "#ffffff"
            text: ""
            font.pixelSize: 16

            property string placeholderText: "Example : 1000"

            Text {
                id: textFrequencyExample
                x: 8
                y: 0
                width: 145
                height: 19
                text: textEditFrequency.placeholderText
                font.wordSpacing: -0.2
                style: Text.Raised
                fontSizeMode: Text.Fit
                font.italic: true
                font.capitalization: Font.Capitalize
                font.pixelSize: 16
                color: "#aaa"
                visible: !textEditFrequency.text
            }
        }

        Text {
            id: textSetFrequencyBand
            x: 56
            y: 163
            width: 140
            height: 20
            color: "#ffffff"
            text: qsTr("Set frequency band")
            font.pixelSize: 16
        }

        ComboBox {
            id: comboBox
            x: 211
            y: 158
            width: 140
            height: 30
            font.pixelSize: 16
            /*model: ListModel {
                id: cbItems
                ListElement { text: "700 MHz"}
                ListElement { text: "900 MHz"}
                ListElement { text: "1800 MHz"}
                ListElement { text: "2170 MHz"}
                ListElement { text: "2450 MHz"}
                ListElement { text: "2700 MHz"}
            }*/
            onCurrentIndexChanged: console.debug(cbItems.get(currentIndex).text)
        }

        SpinBox {
            id: spinBoxC1
            x: 570
            y: 68
            to: 4095
            editable: true
        }

        CheckBox {
            id: checkBoxC1CA
            x: 716
            y: 49
            width: 45
            height: 40
            text: ""
            font.pixelSize: 12
            rightPadding: 6
            transformOrigin: Item.Center
            checked: true && !checkBoxC1CB.checked
        }

        CheckBox {
            id: checkBoxC1CB
            x: 715
            y: 85
            font.pixelSize: 12
            checked: !checkBoxC1CA.checked

        }

        Text {
            id: text4
            x: 760
            y: 60
            width: 66
            height: 19
            color: "#ffffff"
            text: qsTr("Channel A")
            font.pixelSize: 14
        }

        Text {
            id: text5
            x: 760
            y: 98
            width: 71
            height: 15
            color: "#ffffff"
            text: qsTr("Channel B")
            font.pixelSize: 14
        }

        Text {
            id: text6
            x: 859
            y: 81
            color: "#ffffff"
            text: qsTr("Channel 2")
            font.pixelSize: 16
        }

        SpinBox {
            id: spinBoxC2
            x: 940
            y: 69
            to: 4095
        }

        CheckBox {
            id: checkBoxC2CA
            x: 1085
            y: 49
            width: 40
            height: 41
            text: qsTr("")
            checked: true && !checkBoxC2CB.checked

        }

        CheckBox {
            id: checkBoxC2CB
            x: 1086
            y: 88
            width: 38
            height: 37
            text: qsTr("")
            checked: !checkBoxC2CA.checked
        }


        Text {
            id: text7
            x: 1127
            y: 60
            width: 66
            height: 19
            color: "#ffffff"
            text: qsTr("Channel A")
            font.pixelSize: 14
        }

        Text {
            id: text8
            x: 1127
            y: 94
            width: 66
            height: 19
            color: "#ffffff"
            text: qsTr("Channel B")
            font.pixelSize: 14
        }

        Text {
            id: text3
            x: 483
            y: 79
            width: 72
            height: 20
            color: "#ffffff"
            text: qsTr("Channel 1")
            font.pixelSize: 16
        }
    }


}
