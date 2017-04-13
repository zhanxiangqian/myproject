#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "snchart.h"



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:

void omCurrentTextChanged(const QString & text);
void onItemClicked(QListWidgetItem *item);
private:
   
    SNChart *snChart;
};

#endif // MAINWINDOW_H
