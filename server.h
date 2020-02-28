class MyServer : public QTcpServer
{
public:
    bool doStartServer(QHostAddress addr, qint16 port);
    void doSendToAllUserJoin(QString name); //уведомить о новом пользователе
    void doSendToAllUserLeft(QString name);
    void doSendToAllMessage(QString message, QString fromUsername); //разослать сообщение
    void doSendToAllServerMessage(QString message);//серверное сообщение
    void doSendServerMessageToUsers(QString message, const QStringList &users); //приватное серверное сообщение
    void doSendMessageToUsers(QString message, const QStringList &users, QString fromUsername);
    QStringList getUsersOnline() const; //узнать список пользователей
    bool isNameValid(QString name) const; //проверить имя
    bool isNameUsed(QString name) const; //проверить используется ли имя
protected:
    void incomingConnection(int handle);
private:
    QList<MyClient *> _clients; //список пользователей
    QWidget *_widget; //ссылка на виджет для подключения к нему сигналов от myclient
};

//myserver.cpp
void MyServer::incomingConnection(int handle)
{
//передаем дескрпитор сокета, указатель на сервер (для вызова его методов), и стандартный параметр - parent
    MyClient *client = new MyClient(handle, this, this);
//подключаем сигналы напрямую к виджету, если его передали в конструктор сервера
    if (_widget != 0)
    {
        connect(client, SIGNAL(addUserToGui(QString)), _widget, SLOT(onAddUserToGui(QString)));
        connect(client, SIGNAL(removeUserFromGui(QString)), _widget, SLOT(onRemoveUserFromGui(QString)));
        ...
    }
    _clients.append(client);
}
/*
При рассылке сообщения всем нужно делать проверку авторизован ли текущий пользователь, ибо в массиве _clients, возможно, находятся не авторизованные
*/
void MyServer::doSendServerMessageToUsers(QString message, const QStringList &users)
{
//знакомые по клиенту действия
    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out << (quint16)0 << MyClient::comPrivateServerMessage << message;
    out.device()->seek(0);
    out << (quint16)(block.size() - sizeof(quint16));
//отправка сообщения всем (тут отсутствует проверка, ибо все пользователи в users гарантированно авторизованы)
    for (int j = 0; j < _clients.length(); ++j)
        if (users.contains(_clients.at(j)->getName()))
            _clients.at(j)->_sok->write(block);
}
