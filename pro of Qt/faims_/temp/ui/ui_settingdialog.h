/********************************************************************************
** Form generated from reading UI file 'settingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDIALOG_H
#define UI_SETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QComboBox *serialPortInfoListBox;
    QLabel *descrptionlabel;
    QLabel *manufacturerlabel;
    QLabel *serialnumberlabel;
    QLabel *locationlabel;
    QLabel *vidlabel;
    QLabel *pidlabel;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *baudrateBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *databitsBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *parityBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *stopbitBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QComboBox *flowcontrolBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *autoCheckBox;
    QPushButton *searchButton;
    QPushButton *applyButton;

    void setupUi(QDialog *SettingDialog)
    {
        if (SettingDialog->objectName().isEmpty())
            SettingDialog->setObjectName(QStringLiteral("SettingDialog"));
        SettingDialog->resize(392, 289);
        gridLayout = new QGridLayout(SettingDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(SettingDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 221));
        groupBox->setMaximumSize(QSize(16777215, 221));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        serialPortInfoListBox = new QComboBox(groupBox);
        serialPortInfoListBox->setObjectName(QStringLiteral("serialPortInfoListBox"));
        serialPortInfoListBox->setMinimumSize(QSize(69, 22));
        serialPortInfoListBox->setMaximumSize(QSize(69, 22));

        verticalLayout_2->addWidget(serialPortInfoListBox);

        descrptionlabel = new QLabel(groupBox);
        descrptionlabel->setObjectName(QStringLiteral("descrptionlabel"));

        verticalLayout_2->addWidget(descrptionlabel);

        manufacturerlabel = new QLabel(groupBox);
        manufacturerlabel->setObjectName(QStringLiteral("manufacturerlabel"));

        verticalLayout_2->addWidget(manufacturerlabel);

        serialnumberlabel = new QLabel(groupBox);
        serialnumberlabel->setObjectName(QStringLiteral("serialnumberlabel"));

        verticalLayout_2->addWidget(serialnumberlabel);

        locationlabel = new QLabel(groupBox);
        locationlabel->setObjectName(QStringLiteral("locationlabel"));

        verticalLayout_2->addWidget(locationlabel);

        vidlabel = new QLabel(groupBox);
        vidlabel->setObjectName(QStringLiteral("vidlabel"));

        verticalLayout_2->addWidget(vidlabel);

        pidlabel = new QLabel(groupBox);
        pidlabel->setObjectName(QStringLiteral("pidlabel"));

        verticalLayout_2->addWidget(pidlabel);


        verticalLayout_4->addLayout(verticalLayout_2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(SettingDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 221));
        groupBox_2->setMaximumSize(QSize(16777215, 221));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        baudrateBox = new QComboBox(groupBox_2);
        baudrateBox->setObjectName(QStringLiteral("baudrateBox"));
        baudrateBox->setMinimumSize(QSize(69, 22));
        baudrateBox->setMaximumSize(QSize(69, 22));

        horizontalLayout_2->addWidget(baudrateBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        databitsBox = new QComboBox(groupBox_2);
        databitsBox->setObjectName(QStringLiteral("databitsBox"));
        databitsBox->setMinimumSize(QSize(69, 22));
        databitsBox->setMaximumSize(QSize(69, 22));

        horizontalLayout_3->addWidget(databitsBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        parityBox = new QComboBox(groupBox_2);
        parityBox->setObjectName(QStringLiteral("parityBox"));
        parityBox->setMinimumSize(QSize(69, 22));
        parityBox->setMaximumSize(QSize(69, 22));

        horizontalLayout_4->addWidget(parityBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        stopbitBox = new QComboBox(groupBox_2);
        stopbitBox->setObjectName(QStringLiteral("stopbitBox"));
        stopbitBox->setMinimumSize(QSize(69, 22));
        stopbitBox->setMaximumSize(QSize(69, 22));

        horizontalLayout_5->addWidget(stopbitBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        flowcontrolBox = new QComboBox(groupBox_2);
        flowcontrolBox->setObjectName(QStringLiteral("flowcontrolBox"));
        flowcontrolBox->setMinimumSize(QSize(69, 22));
        flowcontrolBox->setMaximumSize(QSize(69, 22));

        horizontalLayout_6->addWidget(flowcontrolBox);


        verticalLayout->addLayout(horizontalLayout_6);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        autoCheckBox = new QCheckBox(SettingDialog);
        autoCheckBox->setObjectName(QStringLiteral("autoCheckBox"));

        horizontalLayout->addWidget(autoCheckBox);

        searchButton = new QPushButton(SettingDialog);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setMinimumSize(QSize(75, 31));
        searchButton->setMaximumSize(QSize(75, 31));
        searchButton->setAutoDefault(false);

        horizontalLayout->addWidget(searchButton);

        applyButton = new QPushButton(SettingDialog);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        applyButton->setMinimumSize(QSize(75, 31));
        applyButton->setMaximumSize(QSize(75, 31));
        applyButton->setAutoDefault(false);

        horizontalLayout->addWidget(applyButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);


        retranslateUi(SettingDialog);

        QMetaObject::connectSlotsByName(SettingDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingDialog)
    {
        SettingDialog->setWindowTitle(QApplication::translate("SettingDialog", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SettingDialog", "Select Serial Port", Q_NULLPTR));
        descrptionlabel->setText(QApplication::translate("SettingDialog", "Description:", Q_NULLPTR));
        manufacturerlabel->setText(QApplication::translate("SettingDialog", "Manufacturer:", Q_NULLPTR));
        serialnumberlabel->setText(QApplication::translate("SettingDialog", "Serial number:", Q_NULLPTR));
        locationlabel->setText(QApplication::translate("SettingDialog", "Location:", Q_NULLPTR));
        vidlabel->setText(QApplication::translate("SettingDialog", "Vendor ID:", Q_NULLPTR));
        pidlabel->setText(QApplication::translate("SettingDialog", "Product ID:", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("SettingDialog", "Select Parameters", Q_NULLPTR));
        label->setText(QApplication::translate("SettingDialog", "BaudRate:", Q_NULLPTR));
        label_2->setText(QApplication::translate("SettingDialog", "Data bits:", Q_NULLPTR));
        label_3->setText(QApplication::translate("SettingDialog", "Parity:", Q_NULLPTR));
        label_4->setText(QApplication::translate("SettingDialog", "Stop bits:", Q_NULLPTR));
        label_5->setText(QApplication::translate("SettingDialog", "Flow control:", Q_NULLPTR));
        autoCheckBox->setText(QApplication::translate("SettingDialog", "Auto Connection", Q_NULLPTR));
        searchButton->setText(QApplication::translate("SettingDialog", "Search", Q_NULLPTR));
        applyButton->setText(QApplication::translate("SettingDialog", "Apply", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingDialog: public Ui_SettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDIALOG_H
