#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->IncorrectPasswordLabel->setVisible(false); //Hide login error message on startup
    ui->stackedWidget->setCurrentIndex(0); //Starting program on the login page
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*************************************************************************
 * MainWindow::on_LoginButton_clicked()
 * -----------------------------------------------------------------------
 * This function tests if the username/password is correct.  If so, the
 * MainPage is displayed with administrator privileges.  If not, an error
 * message is displayed.
 * ***********************************************************************/
void MainWindow::on_LoginButton_clicked()
{
    if(ui->UsernameEntry->text() == "Admin" && ui->PasswordEntry->text() == "Admin") //Checking if entries are correct
    {
        ui->UserLabel->setText("Admin"); //Set user label on MainPage to "admin"
        ui->stackedWidget->setCurrentIndex(1); //Changing to MainPage
        ui->IncorrectPasswordLabel->setVisible(false); //Hiding error message
        ui->UsernameEntry->setText("");
        ui->PasswordEntry->setText(""); //Setting username/password entries empty after login
    }
    else
    {
        ui->IncorrectPasswordLabel->setVisible(true); //Displaying error message
    }
}

void MainWindow::on_LogoutButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

/*************************************************************************
 * MainWindow::on_LoginButtonGuest_clicked()
 * -----------------------------------------------------------------------
 * This function switches to the MainPage without a username/password with
 * "guest user" privileges.
 * ***********************************************************************/
void MainWindow::on_LoginButtonGuest_clicked()
{
    ui->UserLabel->setText("Guest"); //Set user label on MainPage to "guest"
    ui->stackedWidget->setCurrentIndex(1); //Changing to MainPage
    ui->IncorrectPasswordLabel->setVisible(false); //Hiding error message
    ui->UsernameEntry->setText("");
    ui->PasswordEntry->setText(""); //Setting username/password entries empty after login
}
