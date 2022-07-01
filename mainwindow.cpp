#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QUrl>
#include <QNetworkAccessManager>
#include <QNetworkReply>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);




    MainWindow::Run_everything();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::Run_everything(){
    ui->tabWidget->setCurrentIndex(0);

    /*
     reeee
    */
    QString thingy = readThings("https://clout.otterhosting.net/index.php/s/SdAXPmSLKSNCEqd/download/1Monday.txt");
    QStringList te = thingy.split(",");

    ui->label_monday->setText(te.at(0));
    te.removeFirst();


    foreach (QString str, te) {
               ui->listWidget_monday->addItem(str);
    }


    thingy = readThings("https://clout.otterhosting.net/index.php/s/wY6tA7Kg9JHHL6x/download/2Tuesday.txt");
    te = thingy.split(",");

    ui->label_tuesday->setText(te.at(0));
    te.removeFirst();


    foreach (QString str, te) {
               ui->listWidget_tuesday->addItem(str);
    }

    /*
     reeee
    */

    thingy = readThings("https://clout.otterhosting.net/index.php/s/p5tH44pxCdTfZDS/download/3Wednesday.txt");
    te = thingy.split(",");

    ui->label_wednesday->setText(te.at(0));
    te.removeFirst();



    foreach (QString str, te) {
               ui->listWidget_wednesday->addItem(str);
    }
    /*
     reeee
    */
    thingy = readThings("https://clout.otterhosting.net/index.php/s/AyBxpDyj4tMKtwH/download/4Thursday.txt");
    te = thingy.split(",");

    ui->label_thursday->setText(te.at(0));
    te.removeFirst();



    foreach (QString str, te) {
               ui->listWidget_thursday->addItem(str);
    }
    /*
     reeee
    */

    thingy = readThings("https://clout.otterhosting.net/index.php/s/QxRLSfJCf9eccR5/download/5Friday.txt");
    te = thingy.split(",");

    ui->label_friday->setText(te.at(0));
    te.removeFirst();



    foreach (QString str, te) {
               ui->listWidget_friday->addItem(str);
    }
    /*
     reeee
    */
    thingy = readThings("https://clout.otterhosting.net/index.php/s/SeMA7WNEgBdZPkQ/download/6Saturday.txt");
    te = thingy.split(",");

    ui->label_saturday->setText(te.at(0));
    te.removeFirst();



    foreach (QString str, te) {
               ui->listWidget_saturday->addItem(str);
    }
    /*
     reeee
    */

    thingy = readThings("https://clout.otterhosting.net/index.php/s/KAKkxTkqdKmAzQm/download/7Sunday.txt");
    te = thingy.split(",");

    ui->label_sunday->setText(te.at(0));
    te.removeFirst();



    foreach (QString str, te) {
               ui->listWidget_sunday->addItem(str);
    }
    /*
     reeee
    */
    thingy = readThings("https://clout.otterhosting.net/index.php/s/5yi8cJWYXTYLpw2/download/8Extra.txt");
    te = thingy.split(",");



    foreach (QString str, te) {
               ui->listWidget_extra->addItem(str);
    }
    /*
     reeee
    */

}


QString MainWindow::readThings(QString day){
    QUrl url(day);
    QNetworkAccessManager manager;
    QNetworkRequest request(url);
    QNetworkReply *reply(manager.get(request));
    QEventLoop loop;
    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();
    QString end = reply->readAll();
    end.replace("\n", ",");

    /*
    QFile file("https://clout.otterhosting.net/index.php/s/SdAXPmSLKSNCEqd/download/1Monday.txt");
    if(!file.open(QIODevice::OpenModeFlag::ReadOnly))
    {
        qCritical() << "could not open file";
        qCritical() << file.errorString();
        return "error";
    }
    QString readFile = "";
    while(!file.atEnd()){
        readFile = readFile + ", " + file.readLine().trimmed().simplified();
    }

    file.close();
    */
    qDebug() << end;

    return end.trimmed().simplified();

}


void MainWindow::on_tabWidget_currentChanged(int index)
{
    if(index == 8){
        ui->listWidget_extra->clear();
        ui->listWidget_monday->clear();
        ui->listWidget_tuesday->clear();
        ui->listWidget_wednesday->clear();
        ui->listWidget_thursday->clear();
        ui->listWidget_friday->clear();
        ui->listWidget_saturday->clear();
        ui->listWidget_sunday->clear();
        MainWindow::Run_everything();
    }
}

