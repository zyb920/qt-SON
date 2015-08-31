#include "eventbutton.h"

eventButton::eventButton(QWidget* parent)
    : QPushButton(parent)
{
    setText("空闲");
    setFixedSize(80, 80);
    setStyleSheet("QPushButton{background: green;}");
    hasEvent=false;
}
void eventButton::enterEvent(QEvent* e)
{
    if(hasEvent)
    {
        setText("已添加事件");
        setStyleSheet("QPushButton{background: red;}");
    }
    else
    {
        setText("添加事件");
        setStyleSheet("QPushButton{background: orange;}");
    }
}
void eventButton::leaveEvent(QEvent* e)
{
    if(hasEvent)
    {
        setText("已添加事件");
        setStyleSheet("QPushButton{background: red;}");
    }
    else
    {
        setText("空闲");
        setStyleSheet("QPushButton{background: green;}");
    }

}
