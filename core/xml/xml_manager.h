#ifndef XML_MANAGER_H
#define XML_MANAGER_H

#include "qmap.h"

class XML_MANAGER
{

public:

	static void generate_test_xml();

private:
	static void save_xml(const QMap<QString, QString>& firstname, const QMap<QString, QString>& surname, const QMap<QString, QString>& phoneNumber);
	
};


#endif // XML_MANAGER_H
