///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "frcurrentsUIDialogBase.h"

///////////////////////////////////////////////////////////////////////////

frcurrentsUIDialogBase::frcurrentsUIDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );

	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer71;
	sbSizer71 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Tidal Area") ), wxHORIZONTAL );

	wxString m_choiceAreaChoices[] = { _("Strait of Dover"), _("English Channel"),
		_("Fecamp to La Hague"), _("La Hague to Hx-de-Brehat"),
		_("Hx-de-Brehat to Brignogan"), _("Tip of Brittany"),
		_("South Brittany"), _("Vendee-Gironde"), _("Bay of Biscay") };

	int m_choiceAreaNChoices = sizeof( m_choiceAreaChoices ) / sizeof( wxString );
	m_choiceArea = new wxChoice( sbSizer71->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceAreaNChoices, m_choiceAreaChoices, 0 );
	m_choiceArea->SetSelection( 0 );
	m_choiceArea->SetToolTip( _("Select tidal area") );
	sbSizer71->Add( m_choiceArea, wxALIGN_LEFT | wxALIGN_CENTER_VERTICAL | wxALL, 5);

	sbSizer71->Add( 0, 0, 1, wxEXPAND, 5 );

	m_button8 = new wxBitmapButton(sbSizer71->GetStaticBox(), wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW | 0);
	m_button8->SetToolTip(_("Preferences"));
	sbSizer71->Add(m_button8, 0, wxALIGN_RIGHT | wxALL, 5);

	bSizerMain->Add( sbSizer71, 0, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer6;
	sbSizer6 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Standard Port") ), wxVERTICAL );

	wxArrayString m_choice1Choices;
	m_choice1 = new wxChoice( sbSizer6->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice1Choices, 0 );
	m_choice1->SetToolTip(_("Select Port"));
	m_choice1->SetSelection( 0 );
	sbSizer6->Add( m_choice1, 0, wxEXPAND|wxALL, 5 );

	bSizerMain->Add( sbSizer6, 0, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizerDateTime;
	sbSizerDateTime = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Tide Date") ), wxHORIZONTAL );

	m_datePicker1 = new wxDatePickerCtrl( sbSizerDateTime->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	m_datePicker1->SetToolTip(_("Select Date"));
	sbSizerDateTime->Add( m_datePicker1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	sbSizerDateTime->Add( 0, 0, 1, wxEXPAND, 5 );

	m_textCtrlCoefficient = new wxTextCtrl( sbSizerDateTime->GetStaticBox(), wxID_ANY, "   Coeff", wxDefaultPosition, wxDefaultSize, wxTE_BESTWRAP );
	m_textCtrlCoefficient->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	sbSizerDateTime->Add( m_textCtrlCoefficient, 0, wxALIGN_CENTER_VERTICAL, 5 );

	sbSizerDateTime->Add( 0, 0, 1, wxEXPAND, 5 );

	bSizerMain->Add( sbSizerDateTime, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizerHWLW = new wxBoxSizer(wxVERTICAL);

	m_staticTextHW = new wxStaticText(this, wxID_ANY, "High Water", wxDefaultPosition, wxDefaultSize, 0);
	m_staticTextHW->Wrap( -1 );
	bSizerHWLW->Add(m_staticTextHW, 0, wxALL, 5);

	wxArrayString m_choice2Choices;
	m_choice2 = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice2Choices, 0 );
	m_choice2->SetSelection( 0 );
	bSizerHWLW->Add( m_choice2, 0, wxALL|wxEXPAND, 5 );

	bSizerMain->Add(bSizerHWLW, 0, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizerControls;
	sbSizerControls = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Display Controls")), wxVERTICAL );

	wxFlexGridSizer* fbSizerCTRL = new wxFlexGridSizer(1, 6, 0, 0);
	fbSizerCTRL->AddGrowableCol(2);

	m_bpNow = new wxBitmapButton( sbSizerControls->GetStaticBox(), wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|0 );
	m_bpNow->SetToolTip( _("Now") );
	fbSizerCTRL->Add(m_bpNow, 0, wxALIGN_CENTER | wxALL, 5);

	fbSizerCTRL->Add(1, 0, 1, wxEXPAND, 5);

	wxFlexGridSizer* fbSizerDT = new wxFlexGridSizer(2, 1, 0, 0);
	fbSizerDT->AddGrowableCol(0);

	m_staticText2 = new wxStaticText(sbSizerControls->GetStaticBox(), wxID_FIND, "Display date/time", wxDefaultPosition, wxDefaultSize, 0);
	m_staticText2->Wrap(-1);
	fbSizerDT->Add(m_staticText2, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	m_staticText211 = new wxStaticText(sbSizerControls->GetStaticBox(), wxID_FIND, "High Water +-", wxDefaultPosition, wxDefaultSize, 0);
	m_staticText211->Wrap(-1);
	fbSizerDT->Add(m_staticText211, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	fbSizerCTRL->Add(fbSizerDT, 0, wxEXPAND, 0);

	fbSizerCTRL->Add(1, 0, 1, wxEXPAND, 5);

	m_bpPrev = new wxBitmapButton(sbSizerControls->GetStaticBox(), wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(-1, -1), wxBU_AUTODRAW | 0);
	m_bpPrev->SetToolTip(_("Previous"));
	fbSizerCTRL->Add(m_bpPrev, 0, wxALIGN_CENTER | wxALL, 5);

	m_bpNext = new wxBitmapButton(sbSizerControls->GetStaticBox(), wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(-1, -1), wxBU_AUTODRAW | 0);
	m_bpNext->SetToolTip(_("Next"));
	fbSizerCTRL->Add(m_bpNext, 0, wxALIGN_CENTER | wxALL, 5);

	sbSizerControls->Add(fbSizerCTRL, 0, wxALL, 5);

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );

	m_button4 = new wxButton(sbSizerControls->GetStaticBox(), 0, _("HW-6"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer4->Add(m_button4, 0, wxALL, 5);

	bSizer4->Add(0, 0, 1, wxEXPAND, 5);

	m_button5 = new wxButton(sbSizerControls->GetStaticBox(), 6, _("HW"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer4->Add(m_button5, 0, wxALL, 5);

	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );

	m_button6 = new wxButton(sbSizerControls->GetStaticBox(), 12, _("HW+6"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button6, 0, wxALL, 5 );

	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );

	sbSizerControls->Add(bSizer4, 0, wxEXPAND, 5);

	bSizerMain->Add(sbSizerControls, 0, wxEXPAND, 5);

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer(wxVERTICAL);

	m_staticText1 = new wxStaticText(this, wxID_FIND, "Time Zone", wxDefaultPosition, wxDefaultSize, 0);
	m_staticText1->Wrap(-1);
	m_staticText1->SetToolTip(_("'Local TZ' means Time Zone set on your device"));
	bSizer5->Add(m_staticText1, 0, wxEXPAND|wxALL, 5);

	wxStaticLine* m_staticline1 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer5->Add(m_staticline1, 0, wxEXPAND | wxALL, 5 );

	bSizerMain->Add( bSizer5, 0, wxEXPAND, 5 );

	this->SetSizer( bSizerMain );
	this->Layout();
	bSizerMain->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( frcurrentsUIDialogBase::OnClose ) );
	this->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( frcurrentsUIDialogBase::OnDLeftClick ) );
	this->Connect( wxEVT_MOVE, wxMoveEventHandler( frcurrentsUIDialogBase::OnMove ) );
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( frcurrentsUIDialogBase::OnSize ) );
	m_choiceArea->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( frcurrentsUIDialogBase::OnAreaSelected ), NULL, this );
	m_button8->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frcurrentsUIDialogBase::OnPreferences ), NULL, this );
	m_choice1->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( frcurrentsUIDialogBase::OnPortChanged ), NULL, this );
	m_datePicker1->Connect( wxEVT_DATE_CHANGED, wxDateEventHandler( frcurrentsUIDialogBase::OnDateSelChanged ), NULL, this );
	m_bpNow->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frcurrentsUIDialogBase::OnNow ), NULL, this );
	m_bpPrev->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frcurrentsUIDialogBase::OnPrev ), NULL, this );
	m_bpNext->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frcurrentsUIDialogBase::OnNext ), NULL, this );
	m_button5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frcurrentsUIDialogBase::OnChooseTideButton ), NULL, this );
	m_button4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frcurrentsUIDialogBase::OnChooseTideButton ), NULL, this );
	m_button6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frcurrentsUIDialogBase::OnChooseTideButton ), NULL, this );
        this->Connect(
            wxEVT_CONTEXT_MENU,
            wxContextMenuEventHandler(frcurrentsUIDialogBase::OnContextMenu),
            NULL, this);
        this->Connect(
            wxEVT_COMMAND_MENU_SELECTED,
            wxCommandEventHandler(frcurrentsUIDialogBase::OnContextMenuSelect),
            NULL, this);
        this->Connect(wxEVT_LEFT_DOWN,
            wxMouseEventHandler(frcurrentsUIDialogBase::OnMouseEvent));
        this->Connect(wxEVT_LEFT_UP,
               wxMouseEventHandler(frcurrentsUIDialogBase::OnMouseEvent));
        this->Connect(wxEVT_MOTION, wxMouseEventHandler(
                                        frcurrentsUIDialogBase::OnMouseEvent));
}

frcurrentsUIDialogBase::~frcurrentsUIDialogBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( frcurrentsUIDialogBase::OnClose ) );
	this->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( frcurrentsUIDialogBase::OnDLeftClick ) );
	this->Disconnect( wxEVT_MOVE, wxMoveEventHandler( frcurrentsUIDialogBase::OnMove ) );
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( frcurrentsUIDialogBase::OnSize ) );
	this->Disconnect(
            wxEVT_LEFT_DOWN,
            wxMouseEventHandler(frcurrentsUIDialogBase::OnMouseEvent));
        this->Disconnect(wxEVT_LEFT_UP,
               wxMouseEventHandler(frcurrentsUIDialogBase::OnMouseEvent));
        this->Disconnect(wxEVT_MOTION, wxMouseEventHandler(
                                        frcurrentsUIDialogBase::OnMouseEvent));
	m_choiceArea->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( frcurrentsUIDialogBase::OnAreaSelected ), NULL, this );
	m_button8->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frcurrentsUIDialogBase::OnPreferences ), NULL, this );
	m_choice1->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( frcurrentsUIDialogBase::OnPortChanged ), NULL, this );
	m_datePicker1->Disconnect( wxEVT_DATE_CHANGED, wxDateEventHandler( frcurrentsUIDialogBase::OnDateSelChanged ), NULL, this );
	m_bpNow->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frcurrentsUIDialogBase::OnNow ), NULL, this );
	m_bpPrev->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frcurrentsUIDialogBase::OnPrev ), NULL, this );
	m_bpNext->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frcurrentsUIDialogBase::OnNext ), NULL, this );
	m_button5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frcurrentsUIDialogBase::OnChooseTideButton ), NULL, this );
	m_button4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frcurrentsUIDialogBase::OnChooseTideButton ), NULL, this );
	m_button6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frcurrentsUIDialogBase::OnChooseTideButton ), NULL, this );

  this->Disconnect(
            wxEVT_CONTEXT_MENU,
            wxContextMenuEventHandler(frcurrentsUIDialogBase::OnContextMenu),
            NULL, this);
        this->Disconnect(
            wxEVT_COMMAND_MENU_SELECTED,
            wxCommandEventHandler(frcurrentsUIDialogBase::OnContextMenuSelect),
            NULL, this);
}

frcurrentsPreferencesDialogBase::frcurrentsPreferencesDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );

	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerCheckboxes;
	bSizerCheckboxes = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerDoubleParam = new wxBoxSizer( wxHORIZONTAL );

	m_cbUseRate = new wxCheckBox( this, wxID_ANY, _("Display tidal rates (knots)"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerDoubleParam->Add( m_cbUseRate, 0, wxALL, 5 );

	bSizerDoubleParam->Add(0, 0, 1, wxEXPAND, 0);

	m_button01 = new wxButton(this, wxID_ANY, _("Information"), wxDefaultPosition, wxDefaultSize, 0);
	bSizerDoubleParam->Add(m_button01, 0, wxALIGN_RIGHT|wxALL, 5);

	bSizerCheckboxes->Add(bSizerDoubleParam, 0, wxEXPAND, 0);

	m_cbUseDirection = new wxCheckBox( this, wxID_ANY, _("Display tidal direction"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerCheckboxes->Add( m_cbUseDirection, 0, wxALL, 5 );

	m_cbFillColour = new wxCheckBox( this, wxID_ANY, _("Fill Colour"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerCheckboxes->Add( m_cbFillColour, 0, wxALL, 5 );

	m_cbUseHighRes = new wxCheckBox( this, wxID_ANY, _("High Resolution Display"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerCheckboxes->Add( m_cbUseHighRes, 0, wxALL, 5 );


	bSizerMain->Add( bSizerCheckboxes, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	wxStaticBoxSizer* sbSizerColours;
	sbSizerColours = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Tidal Current Arrow Colour") ), wxVERTICAL );

	wxFlexGridSizer* fgSizerColours;
	fgSizerColours = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerColours->AddGrowableCol( 1 );
	fgSizerColours->SetFlexibleDirection( wxBOTH );
	fgSizerColours->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	staticTextLess05 = new wxStaticText( sbSizerColours->GetStaticBox(), wxID_ANY, _("      < 0.5 knots"), wxDefaultPosition, wxDefaultSize, 0 );
	staticTextLess05->Wrap( -1 );
	fgSizerColours->Add( staticTextLess05, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	myColourPicker0 = new wxColourPickerCtrl( sbSizerColours->GetStaticBox(), wxID_ANY, wxColour( 255, 0, 0 ), wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizerColours->Add( myColourPicker0, 1, wxALL|wxEXPAND, 5 );

	staticText0515 = new wxStaticText( sbSizerColours->GetStaticBox(), wxID_ANY, _(">= 0.5 and < 1.5"), wxDefaultPosition, wxDefaultSize, 0 );
	staticText0515->Wrap( -1 );
	fgSizerColours->Add( staticText0515, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	myColourPicker1 = new wxColourPickerCtrl( sbSizerColours->GetStaticBox(), wxID_ANY, wxColour( 255, 0, 0 ), wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizerColours->Add( myColourPicker1, 1, wxALL|wxEXPAND, 5 );

	staticText1525  = new wxStaticText( sbSizerColours->GetStaticBox(), wxID_ANY, _(">= 1.5 and < 2.5"), wxDefaultPosition, wxDefaultSize, 0 );
	staticText1525 ->Wrap( -1 );
	fgSizerColours->Add( staticText1525 , 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	myColourPicker2 = new wxColourPickerCtrl( sbSizerColours->GetStaticBox(), wxID_ANY, wxColour( 255, 0, 0 ), wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizerColours->Add( myColourPicker2, 1, wxALL|wxEXPAND, 5 );

	staticText2535 = new wxStaticText( sbSizerColours->GetStaticBox(), wxID_ANY, _(">= 2.5 and < 3.5"), wxDefaultPosition, wxDefaultSize, 0 );
	staticText2535->Wrap( -1 );
	fgSizerColours->Add( staticText2535, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	myColourPicker3 = new wxColourPickerCtrl( sbSizerColours->GetStaticBox(), wxID_ANY, wxColour( 255, 0, 0 ), wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizerColours->Add( myColourPicker3, 1, wxALL|wxEXPAND, 5 );

	m_staticTextMore35 = new wxStaticText( sbSizerColours->GetStaticBox(), wxID_ANY, _(">= 3.5 knots    "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextMore35->Wrap( -1 );
	fgSizerColours->Add( m_staticTextMore35, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	myColourPicker4 = new wxColourPickerCtrl( sbSizerColours->GetStaticBox(), wxID_ANY, wxColour( 255, 0, 0 ), wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizerColours->Add( myColourPicker4, 1, wxALL|wxEXPAND, 5 );


	sbSizerColours->Add( fgSizerColours, 1, wxEXPAND, 5 );


	bSizer4->Add( sbSizerColours, 0, wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer5;
	sbSizer5 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Arrow Style") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer2->AddGrowableCol( 1 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText8 = new wxStaticText( sbSizer5->GetStaticBox(), wxID_ANY, _("Options:   "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	fgSizer2->Add( m_staticText8, 0, wxALL, 5 );

	wxString m_cStyleChoices[] = { _T("1"), _T("2"), _T("3") };
	int m_cStyleNChoices = sizeof( m_cStyleChoices ) / sizeof( wxString );
	m_cStyle = new wxChoice( sbSizer5->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_cStyleNChoices, m_cStyleChoices, 0 );
	m_cStyle->SetSelection( 0 );
	fgSizer2->Add( m_cStyle, 0, wxALL, 5 );


	sbSizer5->Add( fgSizer2, 0, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer11;
	sbSizer11 = new wxStaticBoxSizer( new wxStaticBox( sbSizer5->GetStaticBox(), wxID_ANY, _("Arrow Options :") ), wxVERTICAL );

	m_staticText13 = new wxStaticText( sbSizer11->GetStaticBox(), wxID_ANY, _("1: Normal\n2: Small \n3: Normal length, \n    narrow width"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	sbSizer11->Add( m_staticText13, 0, wxALL|wxEXPAND, 5 );

	sbSizer5->Add( sbSizer11, 0, wxEXPAND, 5 );

	bSizer4->Add( sbSizer5, 0, wxALL|wxEXPAND, 5 );

	bSizerMain->Add( bSizer4, 0, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizerHarmonics;
	sbSizerHarmonics = new wxStaticBoxSizer(new wxStaticBox(this, wxID_ANY, _("Tide Harmonics IDX Directory")), wxVERTICAL);

	m_button02 = new wxButton(sbSizerHarmonics->GetStaticBox(), wxID_ANY, _("Select Directory"), wxDefaultPosition, wxDefaultSize, 0);
	sbSizerHarmonics->Add(m_button02, 0, wxALL, 5);

	m_dirPicker1 = new wxTextCtrl(sbSizerHarmonics->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	sbSizerHarmonics->Add(m_dirPicker1, 0, wxALL | wxEXPAND, 5);

	bSizerMain->Add(sbSizerHarmonics, 1, wxEXPAND, 5);

	wxStaticBoxSizer* sbSizerScale;
	sbSizerScale = new wxStaticBoxSizer(new wxStaticBox(this, wxID_ANY, wxEmptyString), wxHORIZONTAL);

	wxStaticBoxSizer * sbSizerIconsFactor;
	sbSizerIconsFactor = new wxStaticBoxSizer(new wxStaticBox(sbSizerScale->GetStaticBox(), wxID_ANY, _("Icons Size Factor")), wxVERTICAL);

	wxStaticBoxSizer* sbSizerTime;
	sbSizerTime = new wxStaticBoxSizer(new wxStaticBox(sbSizerScale->GetStaticBox(), wxID_ANY, _("Time Zone Options")), wxVERTICAL);
	wxString m_choiceTimes[] = { _("UTC"), _("Local TZ") };
	int m_choiceNTimes = sizeof(m_choiceTimes) / sizeof(wxString);
	m_rTimeZoneOptions = new wxRadioBox(sbSizerTime->GetStaticBox(), wxID_ANY, _(""),
		wxDefaultPosition, wxDefaultSize, m_choiceNTimes, m_choiceTimes, 0, wxRA_SPECIFY_ROWS);
	m_rTimeZoneOptions->SetToolTip(_("'Local TZ' means Time Zone set on your device"));
	sbSizerTime->Add(m_rTimeZoneOptions, 0, wxEXPAND, 5);

	sbSizerScale->Add(sbSizerTime, 0, wxEXPAND, 5);

	m_sIconSizeFactor =
	new wxSlider(sbSizerIconsFactor->GetStaticBox(), wxID_ANY, 0, -6, 6, wxDefaultPosition,
					wxDefaultSize, wxSL_BOTTOM | wxSL_HORIZONTAL | wxSL_LABELS);
					sbSizerIconsFactor->Add(m_sIconSizeFactor, 0, wxEXPAND, 5);
	sbSizerIconsFactor->Add(0, 0, wxEXPAND, 5);

	sbSizerScale->Add(sbSizerIconsFactor, 0, wxEXPAND, 5);

	wxStaticBoxSizer * sbSizerFontFactor;
	sbSizerFontFactor = new wxStaticBoxSizer(new wxStaticBox(sbSizerScale->GetStaticBox(), wxID_ANY, _("Font Size Factor")), wxVERTICAL);

	m_sFontSizeFactor =
	new wxSlider(sbSizerFontFactor->GetStaticBox(), wxID_ANY, 0, -3, 3, wxDefaultPosition,
					wxDefaultSize, wxSL_BOTTOM | wxSL_HORIZONTAL | wxSL_LABELS);
	sbSizerFontFactor->Add(m_sFontSizeFactor, 0, wxEXPAND, 5);

	sbSizerScale->Add(sbSizerFontFactor, 0, wxEXPAND, 5);

	bSizerMain->Add(sbSizerScale, 0, wxEXPAND, 5);

	m_sdbSizerButtons = new wxStdDialogButtonSizer();
	m_sdbSizerButtonsOK = new wxButton(this, wxID_OK);
	m_sdbSizerButtons->AddButton(m_sdbSizerButtonsOK);
	m_sdbSizerButtonsCancel = new wxButton(this, wxID_CANCEL);
	m_sdbSizerButtons->AddButton(m_sdbSizerButtonsCancel);
	m_sdbSizerButtons->Realize();

	bSizerMain->Add(m_sdbSizerButtons, 0, wxALL | wxEXPAND, 5);

	this->SetSizer( bSizerMain );
	this->Layout();
	bSizerMain->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_cStyle->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( frcurrentsPreferencesDialogBase::OnChoice ), NULL, this );
	m_sIconSizeFactor->Connect(wxEVT_SLIDER, wxCommandEventHandler(frcurrentsPreferencesDialogBase::OnIconsSlidersChange), NULL, this);
	m_sFontSizeFactor->Connect(wxEVT_SLIDER, wxCommandEventHandler(frcurrentsPreferencesDialogBase::OnFontSlidersChange), NULL, this);
	m_rTimeZoneOptions->Connect(wxEVT_RADIOBOX, wxCommandEventHandler(frcurrentsPreferencesDialogBase::OnTimeZoneChange), NULL, this);
	m_button01->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(frcurrentsPreferencesDialogBase::OnShowInformation), NULL, this);
	m_button02->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(frcurrentsPreferencesDialogBase::OnSelectData), NULL, this);
}

frcurrentsPreferencesDialogBase::~frcurrentsPreferencesDialogBase()
{
	// Disconnect Events
	m_cStyle->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( frcurrentsPreferencesDialogBase::OnChoice ), NULL, this );
	m_sIconSizeFactor->Disconnect(wxEVT_SLIDER, wxCommandEventHandler(frcurrentsPreferencesDialogBase::OnIconsSlidersChange), NULL, this);
	m_sFontSizeFactor->Disconnect(wxEVT_SLIDER, wxCommandEventHandler(frcurrentsPreferencesDialogBase::OnFontSlidersChange), NULL, this);
	m_rTimeZoneOptions->Disconnect(wxEVT_RADIOBOX, wxCommandEventHandler(frcurrentsPreferencesDialogBase::OnTimeZoneChange), NULL, this);
	m_button01->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(frcurrentsPreferencesDialogBase::OnShowInformation), NULL, this);
	m_button02->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(frcurrentsPreferencesDialogBase::OnSelectData), NULL, this);
}
