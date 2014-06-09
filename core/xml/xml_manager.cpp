
#include "core/xml/xml_manager.h"

#include "qfile.h"
#include <QXmlStreamWriter>
#include "qstring.h"
#include <string>

//--------------------------
//
//--------------------------
void XML_MANAGER::save_xml(const QMap<QString, QString>& firstname, const QMap<QString, QString>& surname, const QMap<QString, QString>& phoneNumber)
{
	QFile file("c://test/contacts.xml");

	/*open a file */
	if (!file.open(QIODevice::WriteOnly))
	{
		/* show error message if not able to open file */
		TRACE( "The XML file is in read only mode");
	}
	else
	{
		/*if file is successfully opened then create XML*/
		QXmlStreamWriter* xmlWriter = new QXmlStreamWriter();
		/* set device (here file)to streamwriter */
		xmlWriter->setDevice(&file);
		/* Writes a document start with the XML version number version. */
		xmlWriter->writeStartDocument();
		/* Writes a start element with name,
		* Subsequent calls to writeAttribute() will add attributes to this element.
		here we creating a tag <persons>*/
		xmlWriter->writeStartElement("persons");

		/* create mapiterator to iterate through maps*/
		QMapIterator<QString, QString> i(firstname);
		QMapIterator<QString, QString> j(surname);
		QMapIterator<QString, QString> k(phoneNumber);

		/*this while loop generates <person> tag with attributes and CDATA in each execution.
		* currently we have 5 element in map so loop creates 5 tags.
		*/
		while (i.hasNext() && j.hasNext() && k.hasNext())
		{
			i.next(); j.next();	k.next();
			/* create tag person */
			xmlWriter->writeStartElement("person");
			/*add one attribute and its value*/
			xmlWriter->writeAttribute(i.key(), i.value());
			/*add one attribute and its value*/
			xmlWriter->writeAttribute(j.key(), j.value());
			/*add one attribute and its value*/
			xmlWriter->writeAttribute(k.key(), k.value());
			/*add character data to tag person */
			xmlWriter->writeCharacters("kamlesh");
			/*close tag person  */
			xmlWriter->writeEndElement();

		}

		/*end tag persons*/
		xmlWriter->writeEndElement();
		/*end document */
		xmlWriter->writeEndDocument();
		delete xmlWriter;
	}
}

//--------------------------
//
//--------------------------
void XML_MANAGER::generate_test_xml()
{
	//ui.setupUi(this);
	//setWindowTitle("Generate XML");

	/* Assuming user rerived data from which he wants to creare XML.
	* lets we have data of 5 user to create XML.
	*/

	QMap<QString, QString> firstname;
	QMap<QString, QString> surname;
	QMap<QString, QString> phoneNumber;

	firstname.insertMulti("firstname", "abc");
	firstname.insertMulti("firstname", "ghi");
	firstname.insertMulti("firstname", "mno");
	firstname.insertMulti("firstname", "stu");
	firstname.insertMulti("firstname", "yza");

	surname.insertMulti("surname", "def");
	surname.insertMulti("surname", "jkl");
	surname.insertMulti("surname", "pqr");
	surname.insertMulti("surname", "vwx");
	surname.insertMulti("surname", "bcd");

	phoneNumber.insertMulti("number", "12345");
	phoneNumber.insertMulti("number", "67890");
	phoneNumber.insertMulti("number", "12356");
	phoneNumber.insertMulti("number", "87654");
	phoneNumber.insertMulti("number", "756776");

	/* call method to generate XML */
	save_xml( firstname, surname, phoneNumber );
}

//--------------------------
//
//--------------------------
void XML_MANAGER::read_xml( QString& temp_string )
{
	/* We'll parse the example.xml */
	QFile* file = new QFile("c://test/contacts.xml");

	/* If we can't open it, let's show an error message. */
	if (!file->open(QIODevice::ReadOnly | QIODevice::Text)) 
	{
		TRACE("Couldn't open XML");
		return;
	}
	/* QXmlStreamReader takes any QIODevice. */
	QXmlStreamReader xml(file);
	QList< QMap<QString, QString> > persons;
	/* We'll parse the XML until we reach end of it.*/
	while (!xml.atEnd() &&!xml.hasError()) 
	{
		/* Read next element.*/
		QXmlStreamReader::TokenType token = xml.readNext();
		/* If token is just StartDocument, we'll go to next.*/
		if (token == QXmlStreamReader::StartDocument) {
			continue;
		}
		/* If token is StartElement, we'll see if we can read it.*/
		if (token == QXmlStreamReader::StartElement) {
			/* If it's named persons, we'll go to the next.*/
			if (xml.name() == "persons") {
				continue;
			}

			/* If it's named person, we'll dig the information from there.*/
			if (xml.name() == "person") 
			{
				temp_string.append(xml.readElementText());

				//persons.append(this->parsePerson(xml));
			}
		}
	}
	/* Error handling. */
	if (xml.hasError()) {
		TRACE("Couldn't open XML as it's corrupted");
	}
	/* Removes any device() or data from the reader
	* and resets its internal state to the initial state. */
	xml.clear();
	//this->addPersonsToUI(persons);
}



