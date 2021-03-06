import QtQuick 2.0

AbstractViewportType {
    id: item

    fillForeground: true

    foreground.y: height * (1-ratio) * 0.2
    foreground.opacity: ratio

    Behavior on ratio {
        NumberAnimation { easing.type: Easing.OutCubic; duration: 250 }
    }
}
