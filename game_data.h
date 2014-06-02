#pragma once

#include "parameter_defs.h"

class GAME_DATA
{
public:
	static GAME_DATA* GAME_DATA::get_instance();

	U32  get_test_variable() const				 { return test_variable; }
	void set_test_variable(U32 test_variable_in) { test_variable = test_variable_in; }

protected:
	GAME_DATA();
	GAME_DATA(const GAME_DATA&);
	virtual ~GAME_DATA();
	GAME_DATA& operator= (const GAME_DATA&);

private:
	GAME_DATA* instance;
	
	U32 test_variable;
};

