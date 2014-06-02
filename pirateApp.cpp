#include "pirateApp.h"

#include "pirate.h"
#include "game_data.h"

pirateApp::pirateApp(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);
	initialise();
}

pirateApp::~pirateApp()
{

}

//----------------------------------
//
//----------------------------------
void pirateApp::on_btnHello_clicked()
{
	ui.btnHello->setText("Hello123");
	ui.btnHello->setEnabled(false);
}

//--------------------------
//
//--------------------------
void pirateApp::initialise()
{
	PIRATE tempPirate(1);
	STRING tempString = std::to_string(GAME_DATA::get_instance()->get_test_variable());

	ui.lblPirate->setText(QString::fromStdString(tempString));
}
