#pragma once

#ifndef PIRATE_H
#define PIRATE_H

#include "person.h"
class PIRATE : public PERSON
{
public:
	PIRATE();
	PIRATE(U32 id_in);

	virtual ~PIRATE();
};

#endif // !PIRATE_H

