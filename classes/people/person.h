#pragma once

#ifndef PERSON_H
#define PERSON_H

#include "core/definitions/parameter_defs.h"

class PERSON
{
public:
	PERSON(U32 id_in);
	PERSON();

	virtual ~PERSON();

	//Getters & Setters
	U32		get_id() const			 { return id; }
	void	set_id(U32 id_in)		 { id = id_in; }

	STRING	get_name() const;

	STRING	get_fist_name() const				{ return fist_name; }
	void	set_fist_name(STRING fist_name_in)	{ fist_name = fist_name_in; }

	STRING	get_second_name() const					{ return second_name; }
	void	set_second_name(STRING second_name_in)	{ second_name = second_name_in; }

private:
	U32	   id;
	STRING fist_name;
	STRING second_name;
	
};

#endif // !PERSON_H

