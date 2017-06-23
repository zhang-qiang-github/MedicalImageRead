#ifndef ZQMAINWINDOW_H
#define ZQMAINWINDOW_H


#include <QWidget>
#include "../../Include/Common/OverrideWidget/ZQPushbutton.h"

class ZQMainWindow : public QWidget
{
public:
	ZQMainWindow(QWidget * parent = 0);
	~ZQMainWindow();

public:
	void InitGUI();
	void InstallSlot();

private:
	ZQPushButton * m_dicomViewerBtn;
	ZQPushButton * m_mipViewerBtn;
	ZQPushButton * m_vesselViewerBtn;
};


#endif