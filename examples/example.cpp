#include <QApplication>
#include <QLabel>
#include <QTranslator>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QTranslator translator;
    if (translator.load(QLocale::system(), "diff-match-patch", "_", ":/translations")) {
        app.installTranslator(&translator);
    }

    QLabel *l = new QLabel("hello world");
    l->show();

    return app.exec();
}