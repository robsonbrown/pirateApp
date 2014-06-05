#include <string>

//Integers

typedef unsigned char U8;
typedef char S8;

typedef unsigned short U16;
typedef short		   S16;

typedef unsigned int U32;
typedef int			 S32;

typedef unsigned long U64;
typedef long		  S64;

//Strings
typedef std::string STRING;


//Trace
#if defined NDEBUG
#define TRACE( format, ... )
#else
#define TRACE( format, ... )   printf( "%s::%s(%d)" format, __FILE__, __FUNCTION__,  __LINE__, __VA_ARGS__ )
#endif