#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//**********************************************************************
// Header includes
//**********************************************************************
#include <QStatusBar>
#include <QMainWindow>

//**********************************************************************
// Forward declarations
//**********************************************************************
namespace Ui {
class MainWindow;
}
namespace GUIService {
class View;
class ToolBar;
class ControlPanel;
}

//**********************************************************************
// Class declaration
//**********************************************************************
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
//**********************************************************************
//  Constructors & destructors
//**********************************************************************
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
//**********************************************************************
// Public slots
//**********************************************************************
    void onOpenFile();

private:
//**********************************************************************
// Private attributes
//**********************************************************************
    Ui::MainWindow* ui;
    QScopedPointer<QStatusBar> statusbar;
    QScopedPointer<GUIService::View> view;
    QScopedPointer<GUIService::ToolBar> toolbar;
    QScopedPointer<GUIService::ControlPanel> controlPanel;
};

#endif // MAINWINDOW_H
