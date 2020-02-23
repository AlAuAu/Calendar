#include <QApplication>
#include "widget.h"
//#include <QWSServer>
#include <QTextCodec>

//#include <QWSInputMethod>
//#include "syszuxpinyin.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Widget w;
    w.show();

    
    return a.exec();
}
