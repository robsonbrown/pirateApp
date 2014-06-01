#include "person.h"


PERSON::PERSON()
{
}

PERSON::PERSON(U32 id_in)
{
	set_id(id_in);
}

PERSON::~PERSON()
{
}

//--------------------------
//
//--------------------------
STRING PERSON::get_name() const
{
	return ( get_fist_name() + " " + get_second_name() );
}
