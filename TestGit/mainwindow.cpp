#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  // 1
  // add 11
  // add 22
  // add 33
  // add 44
}

MainWindow::~MainWindow() { delete ui; }
