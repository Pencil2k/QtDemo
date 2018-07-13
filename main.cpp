#include<QApplication>
#include<QPushBotton>

int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    QPushButton pushButton(QObject::tr("hello qt"));
    pushButton.show();
    QObject::connect(&pushButton.SIGNAL(click()),&app,SLOT(quit()));
    return app.exec();
}
