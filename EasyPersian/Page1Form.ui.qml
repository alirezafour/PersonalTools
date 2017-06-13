import QtQuick 2.7
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.0
import QtQuick.Controls.Styles 1.4

Item {
    id: item1
    property alias inputArea: inputTextAreaId
    property alias outputArea: outputTextAreaId
    property alias translateButton: translateButtonId
    property alias resetButtonId: resetButtonId
    property alias translateButtonId: translateButtonId

    ScrollView {
        id: viewInputId
        width: 334
        height: 142
        anchors.left: parent.left
        anchors.leftMargin: 40
        y: 87

        TextArea {
            id: inputTextAreaId
            width: 334
            height: 142
            //anchors.fill: parent
            text: qsTr("")
            placeholderText: qsTr("Enter your text here.")
            wrapMode: Text.WordWrap
            background: Rectangle {
                anchors.fill: parent
                border.color: "gray"
            }

        }
    }

    ScrollView{
        id: viewOutputId
        width: 334
        height: 142
        anchors.left: parent.left
        anchors.leftMargin: 40
        y: 272
        TextArea {
            id: outputTextAreaId
            text: ""
            width: 334
            height: 142
            //anchors.fill: parent
            readOnly: true
            horizontalAlignment: Text.AlignRight
            wrapMode: Text.WordWrap
            background: Rectangle {
                anchors.fill: parent
                border.color: "gray"
            }
        }
    }

    Button {
        id: translateButtonId
        x: 426
        y: 87
        text: qsTr("Translate")
    }

    Button {
        id: resetButtonId
        x: 426
        y: 138
        text: qsTr("Reset")
    }
}
