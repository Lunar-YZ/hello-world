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
  // add 55
  // add 66
  // add 88
  // add 100
  // add 101

  // add 110
  // add 111
}

MainWindow::~MainWindow() { delete ui; }
