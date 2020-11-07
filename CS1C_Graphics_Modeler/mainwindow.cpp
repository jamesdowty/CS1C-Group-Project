#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_LoginButton_clicked()
{
    //ui->LoginButton->setText("Changed");
    if(ui->UsernameEntry->text() == "Admin" && ui->PasswordEntry->text() == "Admin")
    {
        ui->LoginButton->setText("Verified");
        // Start Program for admin
        ui->stackedWidget->setCurrentIndex(1);
    }
    else
    {
        ui->LoginButton->setText("Failed");
        // Start Program for user
    }
}

void MainWindow::on_LogoutButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
