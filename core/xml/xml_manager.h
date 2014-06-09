#ifndef XML_MANAGER_H
#define XML_MANAGER_H

#include "qmap.h"
#include "core/definitions/parameter_defs.h"

class XML_MANAGER
{

public:

	static void generate_test_xml();

	static void read_xml(STRING& temp_string);

private:
	static void save_xml(const QMap<QString, QString>& firstname, const QMap<QString, QString>& surname, const QMap<QString, QString>& phoneNumber);
};


#endif // XML_MANAGER_H
