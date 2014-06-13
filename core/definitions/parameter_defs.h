#include "qstring.h"
#include <map>
#include <vector>

#ifndef PARAMETER_DEFS_H
#define PARAMETER_DEFS_H

//Integers

typedef unsigned char	U8;
typedef char			S8;

typedef unsigned short	U16;
typedef short			S16;

typedef unsigned int	U32;
typedef int				S32;

typedef unsigned long	U64;
typedef long			S64;

//Strings
typedef QString			STRING;

//Arrays
template<typename T>
using DYNAMIC_ARRAY = std::vector < T >;

template<typename T, typename P>
using ASSOCIATIVE_ARRAY = std::map < T, P >;

//Trace
#if defined NDEBUG
#define TRACE( format, ... )
#else
#define TRACE( format, ... )   printf( "%s::%s(%d)" format, __FILE__, __FUNCTION__,  __LINE__, __VA_ARGS__ )
#endif


#endif //PARAMETER_DEFS_H