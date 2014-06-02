#include "game_data.h"
#include "pirateApp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	pirateApp w;
	w.show();

	//Initalise the singletons
	GAME_DATA::get_instance();

	return a.exec();
}

