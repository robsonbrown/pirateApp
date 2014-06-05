#include "game_data.h"


GAME_DATA::GAME_DATA()
{
	test_variable = 5;
}


GAME_DATA::~GAME_DATA()
{
}

//--------------------------
//
//--------------------------
GAME_DATA* GAME_DATA::get_instance()
{
	static GAME_DATA instance;
	return &instance;

	// If an instance wasn't created yet.
	//if (instance == 0)
	//{
	//	instance = new GAME_DATA;
	//}
	//
	//return instance;
}
