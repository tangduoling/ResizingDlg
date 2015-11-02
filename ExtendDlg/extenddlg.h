#ifndef EXTENDDLG_H
#define EXTENDDLG_H

#include <QtWidgets/QDialog>
#include "ui_extenddlg.h"


class ExtendDlg : public QDialog
{
	Q_OBJECT

public:
	ExtendDlg(QWidget *parent = 0);
	~ExtendDlg();

private slots:
	void showDetailInfo();

private:
	void createBaseInfo();
	void createDetailInfo();

	QWidget *baseWidget;
	QWidget *detailWidget;

private:
	Ui::ExtendDlgClass ui;
};

#endif // EXTENDDLG_H
