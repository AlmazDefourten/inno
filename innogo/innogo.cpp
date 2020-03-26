#include "innogo.h"
#include "ui_innogo.h"

innogo::innogo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::innogo)
{
    ui->setupUi(this);
}

innogo::~innogo()
{
    delete ui;
}

void innogo::goEngineShow()
{
    ui->goEngine->load(QUrl("https://vk.com/artist/korolishut/top_audios"));
}
