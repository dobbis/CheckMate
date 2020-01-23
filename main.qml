import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.3
import QtQml 2.12
import "."

Window {
    id: idWindow
    visible: true
    width: 1000
    height: 1000
    title: qsTr("CheckMate")
    color: "gray"

    Rectangle {
        id: chessBoard
        x: 0
        y: 0
        width: 1000
        height: 1000
        color: "#ffffff"

        property bool inputMode: true

        Image {
            id: image
            x: 0
            y: 0
            width: 1000
            height: 1000
            fillMode: Image.PreserveAspectFit
            source: "./images/Chess_Board2.png"
        }

        Image {
            id: image_00
            x: 0
            y: 0
            width: 125
            height: 125
            source: "./images/rook_black.png"

            Rectangle {
                id: rectangle_00
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_01
            x: 0
            y: 125
            width: 125
            height: 125
            source: "./images/pawn_black.png"

            Rectangle {
                id: rectangle_01
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_02
            x: 0
            y: 250
            width: 125
            height: 125

            Rectangle {
                id: rectangle_02
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_03
            x: 0
            y: 375
            width: 125
            height: 125

            Rectangle {
                id: rectangle_03
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_04
            x: 0
            y: 500
            width: 125
            height: 125
            Rectangle {
                id: rectangle_04
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_05
            x: 0
            y: 625
            width: 125
            height: 125
            Rectangle {
                id: rectangle_05
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_06
            x: 0
            y: 750
            width: 125
            height: 125
            source: "./images/pawn_white.png"
            Rectangle {
                id: rectangle_06
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_07
            x: 0
            y: 875
            width: 125
            height: 125
            source: "./images/rook_white.png"
            Rectangle {
                id: rectangle_07
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_10
            x: 125
            y: 0
            width: 125
            height: 125
            source: "./images/knight_black.png"
            Rectangle {
                id: rectangle_10
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_11
            x: 125
            y: 125
            width: 125
            height: 125
            source: "./images/pawn_black.png"
            Rectangle {
                id: rectangle_11
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_12
            x: 125
            y: 250
            width: 125
            height: 125
            Rectangle {
                id: rectangle_12
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_13
            x: 125
            y: 375
            width: 125
            height: 125
            Rectangle {
                id: rectangle_13
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_14
            x: 125
            y: 500
            width: 125
            height: 125
            Rectangle {
                id: rectangle_14
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_15
            x: 125
            y: 625
            width: 125
            height: 125
            Rectangle {
                id: rectangle_15
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_16
            x: 125
            y: 750
            width: 125
            height: 125
            source: "./images/pawn_white.png"
            Rectangle {
                id: rectangle_16
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_17
            x: 125
            y: 875
            width: 125
            height: 125
            source: "./images/knight_white.png"
            Rectangle {
                id: rectangle_17
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_20
            x: 250
            y: 0
            width: 125
            height: 125
            source: "./images/bishop_black.png"
            Rectangle {
                id: rectangle_20
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_21
            x: 250
            y: 125
            width: 125
            height: 125
            source: "./images/pawn_black.png"
            Rectangle {
                id: rectangle_21
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_22
            x: 250
            y: 250
            width: 125
            height: 125
            Rectangle {
                id: rectangle_22
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_23
            x: 250
            y: 375
            width: 125
            height: 125
            Rectangle {
                id: rectangle_23
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_24
            x: 250
            y: 500
            width: 125
            height: 125
            Rectangle {
                id: rectangle_24
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_25
            x: 250
            y: 625
            width: 125
            height: 125
            Rectangle {
                id: rectangle_25
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_26
            x: 250
            y: 750
            width: 125
            height: 125
            source: "./images/pawn_white.png"
            Rectangle {
                id: rectangle_26
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_27
            x: 250
            y: 875
            width: 125
            height: 125
            source: "./images/bishop_white.png"
            Rectangle {
                id: rectangle_27
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_30
            x: 375
            y: 0
            width: 125
            height: 125
            source: "./images/queen_black.png"
            Rectangle {
                id: rectangle_30
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_31
            x: 375
            y: 125
            width: 125
            height: 125
            source: "./images/pawn_black.png"
            Rectangle {
                id: rectangle_31
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_32
            x: 375
            y: 250
            width: 125
            height: 125
            Rectangle {
                id: rectangle_32
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_33
            x: 375
            y: 375
            width: 125
            height: 125
            Rectangle {
                id: rectangle_33
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_34
            x: 375
            y: 500
            width: 125
            height: 125
            Rectangle {
                id: rectangle_34
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_35
            x: 375
            y: 625
            width: 125
            height: 125
            Rectangle {
                id: rectangle_35
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_36
            x: 375
            y: 750
            width: 125
            height: 125
            source: "./images/pawn_white.png"
            Rectangle {
                id: rectangle_36
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_37
            x: 375
            y: 875
            width: 125
            height: 125
            source: "./images/queen_white.png"
            Rectangle {
                id: rectangle_37
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_40
            x: 500
            y: 0
            width: 125
            height: 125
            source: "./images/king_black.png"
            Rectangle {
                id: rectangle_40
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_41
            x: 500
            y: 125
            width: 125
            height: 125
            source: "./images/pawn_black.png"
            Rectangle {
                id: rectangle_41
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_42
            x: 500
            y: 250
            width: 125
            height: 125
            Rectangle {
                id: rectangle_42
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_43
            x: 500
            y: 375
            width: 125
            height: 125
            Rectangle {
                id: rectangle_43
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_44
            x: 500
            y: 500
            width: 125
            height: 125
            Rectangle {
                id: rectangle_44
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_45
            x: 500
            y: 625
            width: 125
            height: 125
            Rectangle {
                id: rectangle_45
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_46
            x: 500
            y: 750
            width: 125
            height: 125
            source: "./images/pawn_white.png"
            Rectangle {
                id: rectangle_46
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_47
            x: 500
            y: 875
            width: 125
            height: 125
            source: "./images/king_white.png"
            Rectangle {
                id: rectangle_47
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_50
            x: 625
            y: 0
            width: 125
            height: 125
            source: "./images/bishop_black.png"
            Rectangle {
                id: rectangle_50
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_51
            x: 625
            y: 125
            width: 125
            height: 125
            source: "./images/pawn_black.png"
            Rectangle {
                id: rectangle_51
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_52
            x: 625
            y: 250
            width: 125
            height: 125
            Rectangle {
                id: rectangle_52
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_53
            x: 625
            y: 375
            width: 125
            height: 125
            Rectangle {
                id: rectangle_53
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_54
            x: 625
            y: 500
            width: 125
            height: 125
            Rectangle {
                id: rectangle_54
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_55
            x: 625
            y: 625
            width: 125
            height: 125
            Rectangle {
                id: rectangle_55
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_56
            x: 625
            y: 750
            width: 125
            height: 125
            source: "./images/pawn_white.png"
            Rectangle {
                id: rectangle_56
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_57
            x: 625
            y: 875
            width: 125
            height: 125
            source: "./images/bishop_white.png"
            Rectangle {
                id: rectangle_57
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_60
            x: 750
            y: 0
            width: 125
            height: 125
            source: "./images/knight_black.png"
            Rectangle {
                id: rectangle_60
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_61
            x: 750
            y: 125
            width: 125
            height: 125
            source: "./images/pawn_black.png"
            Rectangle {
                id: rectangle_61
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_62
            x: 750
            y: 250
            width: 125
            height: 125
            Rectangle {
                id: rectangle_62
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_63
            x: 750
            y: 375
            width: 125
            height: 125
            Rectangle {
                id: rectangle_63
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_64
            x: 750
            y: 500
            width: 125
            height: 125
            Rectangle {
                id: rectangle_64
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_65
            x: 750
            y: 625
            width: 125
            height: 125
            Rectangle {
                id: rectangle_65
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_66
            x: 750
            y: 750
            width: 125
            height: 125
            source: "./images/pawn_white.png"
            Rectangle {
                id: rectangle_66
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_67
            x: 750
            y: 875
            width: 125
            height: 125
            source: "./images/knight_white.png"
            Rectangle {
                id: rectangle_67
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_70
            x: 875
            y: 0
            width: 125
            height: 125
            source: "./images/rook_black.png"
            Rectangle {
                id: rectangle_70
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_71
            x: 875
            y: 125
            width: 125
            height: 125
            source: "./images/pawn_black.png"
            Rectangle {
                id: rectangle_71
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_72
            x: 875
            y: 250
            width: 125
            height: 125
            Rectangle {
                id: rectangle_72
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_73
            x: 875
            y: 375
            width: 125
            height: 125
            Rectangle {
                id: rectangle_73
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_74
            x: 875
            y: 500
            width: 125
            height: 125
            Rectangle {
                id: rectangle_74
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_75
            x: 875
            y: 625
            width: 125
            height: 125
            Rectangle {
                id: rectangle_75
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_76
            x: 875
            y: 750
            width: 125
            height: 125
            source: "./images/pawn_white.png"
            Rectangle {
                id: rectangle_76
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }
        Image {
            id: image_77
            x: 875
            y: 875
            width: 125
            height: 125
            source: "./images/rook_white.png"
            Rectangle {
                id: rectangle_77
                anchors.fill: parent
                opacity: 0.5
                color: "green"
                visible: false
            }
        }

        Component.onCompleted: {
            for(var i = 0; i < 8; i++) {
                for (var j = 0; j < 8; j++) {
                    listView.model.append({"x_pos": j * 125, "y_pos": i * 125})
                }
            }
        }

        Component {
            id: contactDelegate
            MouseArea {
                width: 125
                height: 125
                x: x_pos
                y: y_pos
                onClicked: {
                    if (chessBoard.inputMode) {
                        if (gamemanager.choosePiece(x_pos / 125, y_pos / 125)) {
                            chessBoard.inputMode = false;
                        }

                    } else {
                        if (gamemanager.oneMove(x_pos / 125, y_pos / 125)) {
                            if (gamemanager.getCheckmateFlag()) {
                                win_box.visible = true;
                            }
                        }
                        chessBoard.inputMode = true
                    }
                }
            }

        }

        Connections {
            target: gamemanager

            onSignal_00: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_00.visible = true
                } else {
                    rectangle_00.visible = false
                    image_00.source = gamemanager.getSourceUrl(image_00.x / 125, image_00.y / 125)
                }
            }
            onSignal_01: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_01.visible = true
                } else {
                    rectangle_01.visible = false
                    image_01.source = gamemanager.getSourceUrl(image_01.x / 125, image_01.y / 125)
                }
            }
            onSignal_02: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_02.visible = true
                } else {
                    rectangle_02.visible = false
                    image_02.source = gamemanager.getSourceUrl(image_02.x / 125, image_02.y / 125)
                }
            }
            onSignal_03: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_03.visible = true
                } else {
                    rectangle_03.visible = false
                    image_03.source = gamemanager.getSourceUrl(image_03.x / 125, image_03.y / 125)
                }
            }
            onSignal_04: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_04.visible = true
                } else {
                    rectangle_04.visible = false
                    image_04.source = gamemanager.getSourceUrl(image_04.x / 125, image_04.y / 125)
                }
            }
            onSignal_05: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_05.visible = true
                } else {
                    rectangle_05.visible = false
                    image_05.source = gamemanager.getSourceUrl(image_05.x / 125, image_05.y / 125)
                }
            }
            onSignal_06: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_06.visible = true
                } else {
                    rectangle_06.visible = false
                    image_06.source = gamemanager.getSourceUrl(image_06.x / 125, image_06.y / 125)
                }
            }
            onSignal_07: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_07.visible = true
                } else {
                    rectangle_07.visible = false
                    image_07.source = gamemanager.getSourceUrl(image_07.x / 125, image_07.y / 125)
                }
            }
            onSignal_10: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_10.visible = true
                } else {
                    rectangle_10.visible = false
                    image_10.source = gamemanager.getSourceUrl(image_10.x / 125, image_10.y / 125)
                }
            }
            onSignal_11: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_11.visible = true
                } else {
                    rectangle_11.visible = false
                    image_11.source = gamemanager.getSourceUrl(image_11.x / 125, image_11.y / 125)
                }
            }
            onSignal_12: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_12.visible = true
                } else {
                    rectangle_12.visible = false
                    image_12.source = gamemanager.getSourceUrl(image_12.x / 125, image_12.y / 125)
                }
            }
            onSignal_13: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_13.visible = true
                } else {
                    rectangle_13.visible = false
                    image_13.source = gamemanager.getSourceUrl(image_13.x / 125, image_13.y / 125)
                }
            }
            onSignal_14: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_14.visible = true
                } else {
                    rectangle_14.visible = false
                    image_14.source = gamemanager.getSourceUrl(image_14.x / 125, image_14.y / 125)
                }
            }
            onSignal_15: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_15.visible = true
                } else {
                    rectangle_15.visible = false
                    image_15.source = gamemanager.getSourceUrl(image_15.x / 125, image_15.y / 125)
                }
            }
            onSignal_16: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_16.visible = true
                } else {
                    rectangle_16.visible = false
                    image_16.source = gamemanager.getSourceUrl(image_16.x / 125, image_16.y / 125)
                }
            }
            onSignal_17: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_17.visible = true
                } else {
                    rectangle_17.visible = false
                    image_17.source = gamemanager.getSourceUrl(image_17.x / 125, image_17.y / 125)
                }
            }
            onSignal_20: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_20.visible = true
                } else {
                    rectangle_20.visible = false
                    image_20.source = gamemanager.getSourceUrl(image_20.x / 125, image_20.y / 125)
                }
            }
            onSignal_21: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_21.visible = true
                } else {
                    rectangle_21.visible = false
                    image_21.source = gamemanager.getSourceUrl(image_21.x / 125, image_21.y / 125)
                }
            }
            onSignal_22: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_22.visible = true
                } else {
                    rectangle_22.visible = false
                    image_22.source = gamemanager.getSourceUrl(image_22.x / 125, image_22.y / 125)
                }
            }
            onSignal_23: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_23.visible = true
                } else {
                    rectangle_23.visible = false
                    image_23.source = gamemanager.getSourceUrl(image_23.x / 125, image_23.y / 125)
                }
            }
            onSignal_24: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_24.visible = true
                } else {
                    rectangle_24.visible = false
                    image_24.source = gamemanager.getSourceUrl(image_24.x / 125, image_24.y / 125)
                }
            }
            onSignal_25: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_25.visible = true
                } else {
                    rectangle_25.visible = false
                    image_25.source = gamemanager.getSourceUrl(image_25.x / 125, image_25.y / 125)
                }
            }
            onSignal_26: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_26.visible = true
                } else {
                    rectangle_26.visible = false
                    image_26.source = gamemanager.getSourceUrl(image_26.x / 125, image_26.y / 125)
                }
            }
            onSignal_27: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_27.visible = true
                } else {
                    rectangle_27.visible = false
                    image_27.source = gamemanager.getSourceUrl(image_27.x / 125, image_27.y / 125)
                }
            }
            onSignal_30: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_30.visible = true
                } else {
                    rectangle_30.visible = false
                    image_30.source = gamemanager.getSourceUrl(image_30.x / 125, image_30.y / 125)
                }
            }
            onSignal_31: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_31.visible = true
                } else {
                    rectangle_31.visible = false
                    image_31.source = gamemanager.getSourceUrl(image_31.x / 125, image_31.y / 125)
                }
            }
            onSignal_32: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_32.visible = true
                } else {
                    rectangle_32.visible = false
                    image_32.source = gamemanager.getSourceUrl(image_32.x / 125, image_32.y / 125)
                }
            }
            onSignal_33: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_33.visible = true
                } else {
                    rectangle_33.visible = false
                    image_33.source = gamemanager.getSourceUrl(image_33.x / 125, image_33.y / 125)
                }
            }
            onSignal_34: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_34.visible = true
                } else {
                    rectangle_34.visible = false
                    image_34.source = gamemanager.getSourceUrl(image_34.x / 125, image_34.y / 125)
                }
            }
            onSignal_35: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_35.visible = true
                } else {
                    rectangle_35.visible = false
                    image_35.source = gamemanager.getSourceUrl(image_35.x / 125, image_35.y / 125)
                }
            }
            onSignal_36: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_36.visible = true
                } else {
                    rectangle_36.visible = false
                    image_36.source = gamemanager.getSourceUrl(image_36.x / 125, image_36.y / 125)
                }
            }
            onSignal_37: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_37.visible = true
                } else {
                    rectangle_37.visible = false
                    image_37.source = gamemanager.getSourceUrl(image_37.x / 125, image_37.y / 125)
                }
            }
            onSignal_40: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_40.visible = true
                } else {
                    rectangle_40.visible = false
                    image_40.source = gamemanager.getSourceUrl(image_40.x / 125, image_40.y / 125)
                }
            }
            onSignal_41: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_41.visible = true
                } else {
                    rectangle_41.visible = false
                    image_41.source = gamemanager.getSourceUrl(image_41.x / 125, image_41.y / 125)
                }
            }
            onSignal_42: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_42.visible = true
                } else {
                    rectangle_42.visible = false
                    image_42.source = gamemanager.getSourceUrl(image_42.x / 125, image_42.y / 125)
                }
            }
            onSignal_43: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_43.visible = true
                } else {
                    rectangle_43.visible = false
                    image_43.source = gamemanager.getSourceUrl(image_43.x / 125, image_43.y / 125)
                }
            }
            onSignal_44: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_44.visible = true
                } else {
                    rectangle_44.visible = false
                    image_44.source = gamemanager.getSourceUrl(image_44.x / 125, image_44.y / 125)
                }
            }
            onSignal_45: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_45.visible = true
                } else {
                    rectangle_45.visible = false
                    image_45.source = gamemanager.getSourceUrl(image_45.x / 125, image_45.y / 125)
                }
            }
            onSignal_46: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_46.visible = true
                } else {
                    rectangle_46.visible = false
                    image_46.source = gamemanager.getSourceUrl(image_46.x / 125, image_46.y / 125)
                }
            }
            onSignal_47: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_47.visible = true
                } else {
                    rectangle_47.visible = false
                    image_47.source = gamemanager.getSourceUrl(image_47.x / 125, image_47.y / 125)
                }
            }
            onSignal_50: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_50.visible = true
                } else {
                    rectangle_50.visible = false
                    image_50.source = gamemanager.getSourceUrl(image_50.x / 125, image_50.y / 125)
                }
            }
            onSignal_51: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_51.visible = true
                } else {
                    rectangle_51.visible = false
                    image_51.source = gamemanager.getSourceUrl(image_51.x / 125, image_51.y / 125)
                }
            }
            onSignal_52: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_52.visible = true
                } else {
                    rectangle_52.visible = false
                    image_52.source = gamemanager.getSourceUrl(image_52.x / 125, image_52.y / 125)
                }
            }
            onSignal_53: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_53.visible = true
                } else {
                    rectangle_53.visible = false
                    image_53.source = gamemanager.getSourceUrl(image_53.x / 125, image_53.y / 125)
                }
            }
            onSignal_54: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_54.visible = true
                } else {
                    rectangle_54.visible = false
                    image_54.source = gamemanager.getSourceUrl(image_54.x / 125, image_54.y / 125)
                }
            }
            onSignal_55: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_55.visible = true
                } else {
                    rectangle_55.visible = false
                    image_55.source = gamemanager.getSourceUrl(image_55.x / 125, image_55.y / 125)
                }
            }
            onSignal_56: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_56.visible = true
                } else {
                    rectangle_56.visible = false
                    image_56.source = gamemanager.getSourceUrl(image_56.x / 125, image_56.y / 125)
                }
            }
            onSignal_57: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_57.visible = true
                } else {
                    rectangle_57.visible = false
                    image_57.source = gamemanager.getSourceUrl(image_57.x / 125, image_57.y / 125)
                }
            }
            onSignal_60: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_60.visible = true
                } else {
                    rectangle_60.visible = false
                    image_60.source = gamemanager.getSourceUrl(image_60.x / 125, image_60.y / 125)
                }
            }
            onSignal_61: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_61.visible = true
                } else {
                    rectangle_61.visible = false
                    image_61.source = gamemanager.getSourceUrl(image_61.x / 125, image_61.y / 125)
                }
            }
            onSignal_62: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_62.visible = true
                } else {
                    rectangle_62.visible = false
                    image_62.source = gamemanager.getSourceUrl(image_62.x / 125, image_62.y / 125)
                }
            }
            onSignal_63: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_63.visible = true
                } else {
                    rectangle_63.visible = false
                    image_63.source = gamemanager.getSourceUrl(image_63.x / 125, image_63.y / 125)
                }
            }
            onSignal_64: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_64.visible = true
                } else {
                    rectangle_64.visible = false
                    image_64.source = gamemanager.getSourceUrl(image_64.x / 125, image_64.y / 125)
                }
            }
            onSignal_65: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_65.visible = true
                } else {
                    rectangle_65.visible = false
                    image_65.source = gamemanager.getSourceUrl(image_65.x / 125, image_65.y / 125)
                }
            }
            onSignal_66: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_66.visible = true
                } else {
                    rectangle_66.visible = false
                    image_66.source = gamemanager.getSourceUrl(image_66.x / 125, image_66.y / 125)
                }
            }
            onSignal_67: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_67.visible = true
                } else {
                    rectangle_67.visible = false
                    image_67.source = gamemanager.getSourceUrl(image_67.x / 125, image_67.y / 125)
                }
            }
            onSignal_70: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_70.visible = true
                } else {
                    rectangle_70.visible = false
                    image_70.source = gamemanager.getSourceUrl(image_70.x / 125, image_70.y / 125)
                }
            }
            onSignal_71: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_71.visible = true
                } else {
                    rectangle_71.visible = false
                    image_71.source = gamemanager.getSourceUrl(image_71.x / 125, image_71.y / 125)
                }
            }
            onSignal_72: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_72.visible = true
                } else {
                    rectangle_72.visible = false
                    image_72.source = gamemanager.getSourceUrl(image_72.x / 125, image_72.y / 125)
                }
            }
            onSignal_73: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_73.visible = true
                } else {
                    rectangle_73.visible = false
                    image_73.source = gamemanager.getSourceUrl(image_73.x / 125, image_73.y / 125)
                }
            }
            onSignal_74: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_74.visible = true
                } else {
                    rectangle_74.visible = false
                    image_74.source = gamemanager.getSourceUrl(image_74.x / 125, image_74.y / 125)
                }
            }
            onSignal_75: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_75.visible = true
                } else {
                    rectangle_75.visible = false
                    image_75.source = gamemanager.getSourceUrl(image_75.x / 125, image_75.y / 125)
                }
            }
            onSignal_76: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_76.visible = true
                } else {
                    rectangle_76.visible = false
                    image_76.source = gamemanager.getSourceUrl(image_76.x / 125, image_76.y / 125)
                }
            }
            onSignal_77: {
                if (gamemanager.getAvailableMoveFlag()) {
                    rectangle_77.visible = true
                } else {
                    rectangle_77.visible = false
                    image_77.source = gamemanager.getSourceUrl(image_77.x / 125, image_77.y / 125)
                }
            }
        }

        Repeater {
            id: listView
            anchors.fill: parent
            model: ListModel{}
            delegate: contactDelegate
        }


    }

    Rectangle {
        id: win_box
        x: 200
        y: 400
        width: 600
        height: 200
        color: "#6ed574"
        opacity: 0.5
        visible: false

        Text {
            id: element
            x: 100
            y: 33
            width: 400
            height: 100
            text: qsTr("CheckMate!")
            font.bold: true
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 70
        }
    }

}
