#include <QApplication>
#include <QMainWindow>
#include <array>
#include <iostream>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QCoreApplication::setOrganizationName("upupming");
    app.setApplicationName("vscode-qt-vcpkg-template");
    app.setApplicationVersion(QT_VERSION_STR);

#if _DEBUG
    std::cout << "Debug mode" << std::endl;
#else
    std::cout << "Release mode" << std::endl;
#endif

    QMainWindow mainWindow;
    mainWindow.show();

    return app.exec();
}
