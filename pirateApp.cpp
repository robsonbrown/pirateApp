#include "pirateApp.h"

#include "classes/people/pirate.h"
#include "core/xml/xml_manager.h"
#include "singletons/game_data.h"
#include <iostream>

using namespace std;

namespace PIRATE_APP
{
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

		TRACE("test");
	}

	//--------------------------
	//
	//--------------------------
	void pirateApp::initialise()
	{
		PIRATE tempPirate(1);
		STRING tempString = std::to_string(GAME_DATA::get_instance()->get_test_variable());

		ui.lblPirate->setText(QString::fromStdString(tempString));

		XML_MANAGER::generate_test_xml();

	}

}
