#include "pirateApp.h"
#include "singletons/game_data.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	PIRATE_APP::pirateApp w;
	w.show();

	//Initalise the singletons
	GAME_DATA::get_instance();

	return a.exec();
}

