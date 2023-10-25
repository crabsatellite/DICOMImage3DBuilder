#ifndef TOOLBAR_H
#define TOOLBAR_H

//**********************************************************************
// Header includes
//**********************************************************************
#include <QAction>
#include <QToolBar>
#include <QMainWindow>

//**********************************************************************
// Class declaration
//**********************************************************************
namespace GUIService {

class ToolBar : public QObject
{
    Q_OBJECT

public:
//**********************************************************************
// Constructors & destructors
//**********************************************************************
    ToolBar();
    ~ToolBar() = default;

public:
//**********************************************************************
// Public methods
//**********************************************************************
    void setupToolbar(QMainWindow *parent);

private:
//**********************************************************************
// Private attributes
//**********************************************************************
    QSharedPointer<QToolBar> toolbar;
};
}

#endif // TOOLBAR_H
