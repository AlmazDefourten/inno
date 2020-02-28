//dialog.cpp
Dialog::Dialog(QWidget *parent) :QDialog(parent), ui(new Ui::Dialog)
{
//создаем сервер. первый параметр стандартный - parent, второй - передадим ссылку на объект виджета, для подключения сигналов от myclient к нему
    _serv = new MyServer(this, this);
//подключаем сигналы от виджета к серверу
    connect(this, SIGNAL(messageFromGui(QString,QStringList)), _serv, SLOT(onMessageFromGui(QString,QStringList)));
    ...
    //по умолчанию запускаем сервер на 127.0.0.1:1234
    if (_serv->doStartServer(QHostAddress::LocalHost, 1234))
    {...}
    else
    {...}
}
