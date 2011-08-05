/*
*
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QDir>
#include <QtCore/QProcess>
#include <QtCore/QTextCodec>
#include <QtGui/QApplication>
#include <QtGui/QMainWindow>
#include <QtGui/QStyleFactory>


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void initForm();

private:
    Ui::MainWindow *ui;
    QProcess process;

private slots:
    void on_actionAbout_triggered();
    void on_actionAbout_QT_triggered();
    void on_buttonBox_accepted();
    void on_pushButtonIn_clicked();
    void on_pushButtonOut_clicked();

    QList<QString> getLangugagelist();
    void version_info();
    void processErrors();
    void processFinished(int exitCode, QProcess::ExitStatus exitStatus);
    void processError(QProcess::ProcessError error);
};

#endif // MAINWINDOW_H
