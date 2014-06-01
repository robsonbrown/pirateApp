#ifndef PIRATEAPP_H
#define PIRATEAPP_H

#include <QtWidgets/QMainWindow>
#include "ui_pirateApp.h"

class pirateApp : public QMainWindow
{
	Q_OBJECT

public:
	pirateApp(QWidget *parent = 0);
	~pirateApp();

private:
	Ui::pirateAppClass ui;

	void initialise();

	public slots:
	void on_btnHello_clicked();
};

#endif // PIRATEAPP_H
