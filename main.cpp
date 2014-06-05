#include "pirateApp.h"
#include "singletons/game_data.h"
#include <QtWidgets/QApplication>
#include <consoleapi.h>

int main(int argc, char *argv[])
{
#ifdef _DEBUG
	AllocConsole();
#endif

	QApplication a(argc, argv);

	PIRATE_APP::pirateApp w;
	w.show();

	//Initalise the singletons
	GAME_DATA::get_instance();


	//If we're in debug, we're going to want a console window as well

	return a.exec();
}

