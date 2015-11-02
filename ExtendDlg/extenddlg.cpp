#include "extenddlg.h"

#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QPushButton>
#include <QDialogButtonBox>
#include <QHBoxLayout>

ExtendDlg::ExtendDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	setWindowTitle("Extension Dialog");
	createBaseInfo();
	createDetailInfo();

	QVBoxLayout *Layout = new QVBoxLayout(this);
	Layout->addWidget(baseWidget);
	Layout->addWidget(detailWidget);
	Layout->setSizeConstraint(QLayout::SetFixedSize);
	Layout->setSpacing(10);
}

ExtendDlg::~ExtendDlg()
{

}

void ExtendDlg::showDetailInfo()
{
	if (detailWidget->isHidden())
	{
		detailWidget->show();
	}
	else
	{
		detailWidget->hide();
	}
}

void ExtendDlg::createBaseInfo()
{
	baseWidget = new QWidget;
	QLabel *nameLabel = new QLabel("Name:");
	QLineEdit *nameEdit = new QLineEdit;
	QLabel *sexLabel = new QLabel("Sex:");
	QComboBox *sexComboBox = new QComboBox;
	sexComboBox->insertItem(0, "male");
	sexComboBox->insertItem(1, "female");

	QGridLayout *LeftLayout = new QGridLayout;
	LeftLayout->addWidget(nameLabel, 0, 0);
	LeftLayout->addWidget(nameEdit, 0, 1);
	LeftLayout->addWidget(sexLabel, 1, 0);
	LeftLayout->addWidget(sexComboBox, 1, 1);

	QPushButton *OkBtn = new QPushButton("Ok");
	QPushButton *DetailBtn = new QPushButton("Detail");

	QDialogButtonBox *btnBox = new QDialogButtonBox(Qt::Vertical);
	btnBox->addButton(OkBtn, QDialogButtonBox::ActionRole);
	btnBox->addButton(DetailBtn, QDialogButtonBox::ActionRole);

	QHBoxLayout *mainLayout = new QHBoxLayout(baseWidget);
	mainLayout->addLayout(LeftLayout);
	mainLayout->addWidget(btnBox);
	connect(DetailBtn, SIGNAL(clicked()), this, SLOT(showDetailInfo()));
}

void ExtendDlg::createDetailInfo()
{
	detailWidget = new QWidget;
	QLabel *AgeLabel = new QLabel("Age:");
	QLineEdit *AgeEdit = new QLineEdit;
	AgeEdit->setText("30");
	QLabel *Department = new QLabel("Department:");
	QComboBox *DepComboBox = new QComboBox;
	DepComboBox->addItem("Depart1");
	DepComboBox->addItem("Depart2");
	DepComboBox->addItem("Depart3");

	QLabel *emailLabel = new QLabel("email");
	QLineEdit *emailEdit = new QLineEdit;
	QGridLayout *mainLayout = new QGridLayout(detailWidget);
	mainLayout->addWidget(AgeLabel,0,0);
	mainLayout->addWidget(AgeEdit,0,1);
	mainLayout->addWidget(Department,1,0);
	mainLayout->addWidget(DepComboBox,1,1);
	mainLayout->addWidget(emailLabel,2,0);
	mainLayout->addWidget(emailEdit,2,1);
	detailWidget->hide();
}
