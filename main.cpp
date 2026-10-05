#include "mainwindow.h"

#include <QApplication>
#include <QFont>
#include <QFontDatabase>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // 1. Add the Inter font from resources or file path
    int fontId = QFontDatabase::addApplicationFont(":/fonts/Inter-Regular.ttf");
    QString family = QFontDatabase::applicationFontFamilies(fontId).at(0);

    // 2. Set it as the default application font
    QFont interFont(family);
    interFont.setPointSize(10); // Set your preferred default size
    app.setFont(interFont);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return QApplication::exec();
}
