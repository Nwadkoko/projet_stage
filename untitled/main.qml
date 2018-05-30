import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.3
import QtQuick.Controls.Styles 1.4
import QtQuick.Extras 1.4

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
            onHoveredChanged: {
                if(sendButton.hovered)
                {
                    ToolTip.visible = true;
                    ToolTip.text = "send";
                }else
                {
                    ToolTip.visible = false;

                }
            }
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
            id: comboBoxFrequencyBand
            x: 211
            y: 158
            width: 140
            height: 30
            font.pixelSize: 16
            //model: ["700 MHz", "900 MHz", "1800 MHz", "2170 MHz", "2450 MHz", "2700 MHz"]
            model: ListModel {
                id: cbItems
                ListElement { text: "700 MHz"}
                ListElement { text: "900 MHz"}
                ListElement { text: "1800 MHz"}
                ListElement { text: "2170 MHz"}
                ListElement { text: "2450 MHz"}
                ListElement { text: "2700 MHz"}
            }
            onAccepted: {
                if(find(currentText) === -1){
                    cbItems.append({text: editText})
                    currentIndex = find(editText)
                }
            }

            onCurrentIndexChanged: console.debug(cbItems.get(currentIndex).text)
        }

        SpinBox {
            id: spinBoxC1
            x: 570
            y: 68
            font.pointSize: 12
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
            y: 68
            font.pointSize: 12
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
            width: 75
            height: 25
            color: "#ffffff"
            text: qsTr("Channel 1")
            lineHeight: 0.9
            font.pixelSize: 16
        }

        Text {
            id: text9
            x: 483
            y: 192
            width: 72
            height: 20
            color: "#ffffff"
            text: qsTr("Channel 3")
            font.pixelSize: 16
        }

        Text {
            id: text10
            x: 859
            y: 192
            width: 72
            height: 20
            color: "#ffffff"
            text: qsTr("Channel 4")
            font.pixelSize: 16
        }

        SpinBox {
            id: spinBoxC3
            x: 570
            y: 182
            font.pointSize: 12
            to: 4095
            editable: true
        }

        SpinBox {
            id: spinBoxC4
            x: 940
            y: 182
            font.pointSize: 12
            to: 4095
            editable: true
        }

        Text {
            id: text11
            x: 483
            y: 300
            width: 72
            height: 20
            color: "#ffffff"
            text: qsTr("Channel 5")
            font.pixelSize: 16
        }

        SpinBox {
            id: spinBoxC5
            x: 570
            y: 290
            font.pointSize: 12
            to: 4095
            editable: true
        }

        Text {
            id: text12
            x: 859
            y: 300
            width: 72
            height: 20
            color: "#ffffff"
            text: qsTr("Channel 6")
            font.pixelSize: 16
        }

        SpinBox {
            id: spinBoxC6
            x: 940
            y: 290
            font.pointSize: 12
            to: 4095
            editable: true
        }

        StatusIndicator {
            id: statusIndicatorC3
            x: 505
            y: 218
        }

        StatusIndicator {
            id: statusIndicatorC1
            x: 505
            y: 106
            active: false
        }

        StatusIndicator {
            id: statusIndicatorC2
            x: 882
            y: 106
        }

        StatusIndicator {
            id: statusIndicatorC4
            x: 882
            y: 218
        }

        StatusIndicator {
            id: statusIndicatorC5
            x: 505
            y: 326
        }

        StatusIndicator {
            id: statusIndicatorC6
            x: 882
            y: 326
        }

        Text {
            id: text13
            x: 56
            y: 242
            width: 66
            height: 19
            color: "#ffffff"
            text: qsTr("Emission")
            font.pixelSize: 16
        }

        StatusIndicator {
            id: statusIndicatorEmission
            x: 131
            y: 242
        }

        Button {
            id: buttonValidate
            x: 704
            y: 397
            width: 178
            height: 40
            text: qsTr("Validate")
            onClicked: {
                //                if(checkBoxC1CA.checked){
                //                    connectionCom.writeData(monAmp.puissanceChar(monAmp.puissance(spinBoxC1.value, 1)), 10);
                //                }else {}

                if(spinBoxC1.value > 0)
                {
                    statusIndicatorC1.active = true;
                }


                connectionCom.writeData(monAmp.puissanceChar(monAmp.puissance(spinBoxC2.value, 2)), 10);
                console.debug(monAmp.commutation(1, 'A'));
                /* console.debug(monAmp.puissance(spinBoxC1.value, 1));
                console.debug(monAmp.puissance(spinBoxC2.value, 2));
                console.debug(monAmp.puissance(spinBoxC3.value, 3));
                console.debug(monAmp.puissance(spinBoxC4.value, 4));
                console.debug(monAmp.puissance(spinBoxC5.value, 5));
                console.debug(monAmp.puissance(spinBoxC6.value, 6));*/
            }
        }

        Text {
            id: textMwC1
            x: 608
            y: 114
            width: 64
            height: 18
            color: "#ffffff"
            text: qsTr("")
            font.pixelSize: 14
        }

        Text {
            id: textMwC2
            x: 978
            y: 114
            width: 64
            height: 18
            color: "#ffffff"
            text: qsTr("")
            font.pixelSize: 14
        }

        Text {
            id: textMwC3
            x: 608
            y: 228
            width: 64
            height: 18
            color: "#ffffff"
            text: qsTr("")
            font.pixelSize: 14
        }

        Text {
            id: textMwC4
            x: 978
            y: 228
            width: 64
            height: 18
            color: "#ffffff"
            text: qsTr("")
            font.pixelSize: 14
        }

        Text {
            id: textMwC5
            x: 608
            y: 336
            width: 64
            height: 18
            color: "#ffffff"
            text: qsTr("")
            font.pixelSize: 14
        }

        Text {
            id: textMwC6
            x: 978
            y: 336
            width: 64
            height: 18
            color: "#ffffff"
            text: qsTr("")
            font.pixelSize: 14
        }

        Text {
            id: text14
            x: 76
            y: 607
            color: "#ffffff"
            text: qsTr("Channel 1")
            font.pixelSize: 14
        }

        Text {
            id: text15
            x: 227
            y: 607
            color: "#ffffff"
            text: qsTr("Channel 2")
            font.pixelSize: 14
        }

        Text {
            id: text16
            x: 380
            y: 607
            color: "#ffffff"
            text: qsTr("Channel 3")
            font.pixelSize: 14
        }

        Text {
            id: text17
            x: 530
            y: 607
            color: "#ffffff"
            text: qsTr("Channel 4")
            font.pixelSize: 14
        }

        Text {
            id: text18
            x: 685
            y: 607
            color: "#ffffff"
            text: qsTr("Channel 5")
            font.pixelSize: 14
        }

        Text {
            id: text19
            x: 842
            y: 607
            color: "#ffffff"
            text: qsTr("Channel 6")
            font.pixelSize: 14
        }

        Text {
            id: text20
            x: 962
            y: 649
            width: 41
            height: 26
            color: "#ffffff"
            text: qsTr("V/m")
            font.pixelSize: 20
        }

    }


}
