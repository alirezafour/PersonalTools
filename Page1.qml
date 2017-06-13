import QtQuick 2.7
import toPersion.test 1.0

Page1Form {
    translateButtonId.onClicked: {
        outputArea.text = tpcId.fromEnglish(inputArea.text)
    }
    resetButtonId.onClicked: {
        inputArea.text = ""
    }
    ToPersionConvertor {
        id: tpcId
    }
    inputArea.onTextChanged: {
        outputArea.text = tpcId.fromEnglish(inputArea.text)
    }

}
