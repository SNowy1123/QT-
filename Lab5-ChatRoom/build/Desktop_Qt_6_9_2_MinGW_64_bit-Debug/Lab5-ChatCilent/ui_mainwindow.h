/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *titleLabel;
    QStackedWidget *stackedWidget;
    QWidget *loginPage;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QFrame *loginFrame;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *serverEdit;
    QLabel *label_3;
    QLineEdit *usernameEdit;
    QSpacerItem *verticalSpacer;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QWidget *chatPage;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTextEdit *roomTextEdit;
    QListWidget *userListWidget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *sayLineEdit;
    QPushButton *sayButton;
    QPushButton *logoutButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(24);
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QString::fromUtf8("#titleLabel {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, \n"
"                                      stop:0 #3498db, stop:1 #2ecc71);\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 15px;\n"
"    border-radius: 0px;\n"
"    margin-bottom: 10px;\n"
"}"));
        titleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(titleLabel);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        gridLayout = new QGridLayout(loginPage);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_2 = new QSpacerItem(20, 100, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        loginFrame = new QFrame(loginPage);
        loginFrame->setObjectName("loginFrame");
        loginFrame->setMinimumSize(QSize(400, 250));
        loginFrame->setFrameShape(QFrame::Shape::StyledPanel);
        loginFrame->setFrameShadow(QFrame::Shadow::Raised);
        loginFrame->setStyleSheet(QString::fromUtf8("#loginFrame {\n"
"    background-color: #f8f9fa;\n"
"    border: 2px solid #e9ecef;\n"
"    border-radius: 12px;\n"
"    padding: 30px;\n"
"}"));
        verticalLayout = new QVBoxLayout(loginFrame);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(loginFrame);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(11);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: #495057; font-weight: bold;"));

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        serverEdit = new QLineEdit(loginFrame);
        serverEdit->setObjectName("serverEdit");
        serverEdit->setFont(font1);
        serverEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding: 8px;\n"
"    border: 2px solid #dee2e6;\n"
"    border-radius: 6px;\n"
"    background-color: white;\n"
"    color: #212529;\n"
"}\n"
"QLineEdit:focus {\n"
"    border-color: #3498db;\n"
"    outline: none;\n"
"}"));

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, serverEdit);

        label_3 = new QLabel(loginFrame);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: #495057; font-weight: bold;"));

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_3);

        usernameEdit = new QLineEdit(loginFrame);
        usernameEdit->setObjectName("usernameEdit");
        usernameEdit->setFont(font1);
        usernameEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding: 8px;\n"
"    border: 2px solid #dee2e6;\n"
"    border-radius: 6px;\n"
"    background-color: white;\n"
"    color: #212529;\n"
"}\n"
"QLineEdit:focus {\n"
"    border-color: #3498db;\n"
"    outline: none;\n"
"}"));

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, usernameEdit);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        loginButton = new QPushButton(loginFrame);
        loginButton->setObjectName("loginButton");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(12);
        font2.setBold(true);
        loginButton->setFont(font2);
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 12px 24px;\n"
"    border-radius: 6px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #21618c;\n"
"}"));

        verticalLayout->addWidget(loginButton);


        gridLayout->addWidget(loginFrame, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 100, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        stackedWidget->addWidget(loginPage);
        chatPage = new QWidget();
        chatPage->setObjectName("chatPage");
        verticalLayout_2 = new QVBoxLayout(chatPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        roomTextEdit = new QTextEdit(chatPage);
        roomTextEdit->setObjectName("roomTextEdit");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font3.setPointSize(10);
        roomTextEdit->setFont(font3);
        roomTextEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    background-color: white;\n"
"    border: 2px solid #dee2e6;\n"
"    border-radius: 8px;\n"
"    padding: 10px;\n"
"    color: #212529;\n"
"    selection-background-color: #3498db;\n"
"}"));

        horizontalLayout->addWidget(roomTextEdit);

        userListWidget = new QListWidget(chatPage);
        userListWidget->setObjectName("userListWidget");
        userListWidget->setMinimumWidth(180);
        userListWidget->setMaximumWidth(200);
        userListWidget->setFont(font3);
        userListWidget->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"    background-color: #f8f9fa;\n"
"    border: 2px solid #dee2e6;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    color: #212529;\n"
"}\n"
"QListWidget::item {\n"
"    padding: 8px;\n"
"    border-radius: 4px;\n"
"    color: #212529;\n"
"}\n"
"QListWidget::item:hover {\n"
"    background-color: #e9ecef;\n"
"}\n"
"QListWidget::item:selected {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"}"));

        horizontalLayout->addWidget(userListWidget);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        sayLineEdit = new QLineEdit(chatPage);
        sayLineEdit->setObjectName("sayLineEdit");
        sayLineEdit->setFont(font1);
        sayLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding: 10px;\n"
"    border: 2px solid #dee2e6;\n"
"    border-radius: 6px;\n"
"    background-color: white;\n"
"    color: #212529;\n"
"}\n"
"QLineEdit:focus {\n"
"    border-color: #3498db;\n"
"    outline: none;\n"
"}"));

        horizontalLayout_2->addWidget(sayLineEdit);

        sayButton = new QPushButton(chatPage);
        sayButton->setObjectName("sayButton");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font4.setPointSize(11);
        font4.setBold(true);
        sayButton->setFont(font4);
        sayButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2ecc71;\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 6px;\n"
"    min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #27ae60;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #219653;\n"
"}"));

        horizontalLayout_2->addWidget(sayButton);

        logoutButton = new QPushButton(chatPage);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setFont(font4);
        logoutButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #e74c3c;\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 6px;\n"
"    min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #c0392b;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #a93226;\n"
"}"));

        horizontalLayout_2->addWidget(logoutButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(chatPage);

        verticalLayout_3->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\201\212\345\244\251\345\256\244\345\256\242\346\210\267\347\253\257", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "\351\203\221\344\274\237\344\270\232\347\232\204\350\201\212\345\244\251\345\256\244", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200", nullptr));
        serverEdit->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\230\265\347\247\260", nullptr));
        usernameEdit->setText(QCoreApplication::translate("MainWindow", "\351\203\221\344\274\237\344\270\232", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225\350\201\212\345\244\251\345\256\244", nullptr));
        sayLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\346\266\210\346\201\257...", nullptr));
        sayButton->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
