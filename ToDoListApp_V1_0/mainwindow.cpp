#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect the Add Task button
    connect(ui->addTaskButton, &QPushButton::clicked, this, &MainWindow::addTask);

    // Connect the Clear All button
    connect(ui->clearAllButton, &QPushButton::clicked, this, &MainWindow::clearTasks);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addTask()
{
    QString taskText = ui->taskInput->text().trimmed();  // Read and trim spaces

    if(!taskText.isEmpty()) {
        ui->taskList->addItem(taskText);  // Add to the list
        ui->taskInput->clear();           // Clear input field
    }
}

void MainWindow::clearTasks()
{
    ui->taskList->clear();  // Clears all tasks
}


