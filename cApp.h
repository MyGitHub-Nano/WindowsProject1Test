#pragma once

#include "wx/wx.h"
#include "cMain.h"

//Commentaire en moins



class cApp : public wxApp
{
public:
	cApp();
	~cApp();

private:
	cMain* m_frame1 = nullptr;

public:
	virtual bool OnInit();

};


