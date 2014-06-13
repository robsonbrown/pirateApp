#include "pirateApp.h"

#include "classes/people/pirate.h"
#include "core/definitions/parameter_defs.h"
#include "core/xml/xml_manager.h"
#include "singletons/game_data.h"

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
	}

	//--------------------------
	//
	//--------------------------
	void pirateApp::initialise()
	{
		PIRATE tempPirate(1);
		STRING tempString /*= std::to_string(GAME_DATA::get_instance()->get_test_variable())*/;

		XML_MANAGER::generate_test_xml();

		XML_MANAGER::read_xml(tempString);

		DYNAMIC_ARRAY<STRING> temp_string_array;

		temp_string_array.push_back("TEST");
		temp_string_array.push_back("HELLO");

		ui.lblPirate->setText(temp_string_array.at(1)  );
	}

}
