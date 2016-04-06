#pragma once


namespace TypeWriter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmTypeWriter
	/// </summary>
	public ref class frmTypeWriter : public System::Windows::Forms::Form
	{
	public:
		frmTypeWriter(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//Add initilize function here.
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmTypeWriter()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  rtbMessage;
	protected:
	private: System::Windows::Forms::Button^  btnQ;
	private: System::Windows::Forms::Button^  btnW;
	private: System::Windows::Forms::Button^  btnE;
	private: System::Windows::Forms::Button^  btnR;
	private: System::Windows::Forms::Button^  btnT;
	private: System::Windows::Forms::Button^  btnY;
	private: System::Windows::Forms::Button^  btnU;
	private: System::Windows::Forms::Button^  btnI;
	private: System::Windows::Forms::Button^  btnO;
	private: System::Windows::Forms::Button^  btnP;
	private: System::Windows::Forms::Button^  btnL;
	private: System::Windows::Forms::Button^  btnK;
	private: System::Windows::Forms::Button^  btnJ;
	private: System::Windows::Forms::Button^  btnH;
	private: System::Windows::Forms::Button^  btnG;
	private: System::Windows::Forms::Button^  btnF;
	private: System::Windows::Forms::Button^  btnD;
	private: System::Windows::Forms::Button^  btnS;
	private: System::Windows::Forms::Button^  btnA;
	private: System::Windows::Forms::Button^  btnM;
	private: System::Windows::Forms::Button^  btnN;
	private: System::Windows::Forms::Button^  btnB;
	private: System::Windows::Forms::Button^  btnV;
	private: System::Windows::Forms::Button^  btnC;
	private: System::Windows::Forms::Button^  btnX;
	private: System::Windows::Forms::Button^  btnZ;
	private: System::Windows::Forms::Button^  btnSpace;
	private: System::Windows::Forms::Button^  btnBackSpace;
	private: System::Windows::Forms::Button^  btnClearAll;
	private: System::Windows::Forms::Button^  btnShift;
	private: System::Windows::Forms::Button^  btnEnter;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->rtbMessage = (gcnew System::Windows::Forms::RichTextBox());
			this->btnQ = (gcnew System::Windows::Forms::Button());
			this->btnW = (gcnew System::Windows::Forms::Button());
			this->btnE = (gcnew System::Windows::Forms::Button());
			this->btnR = (gcnew System::Windows::Forms::Button());
			this->btnT = (gcnew System::Windows::Forms::Button());
			this->btnY = (gcnew System::Windows::Forms::Button());
			this->btnU = (gcnew System::Windows::Forms::Button());
			this->btnI = (gcnew System::Windows::Forms::Button());
			this->btnO = (gcnew System::Windows::Forms::Button());
			this->btnP = (gcnew System::Windows::Forms::Button());
			this->btnL = (gcnew System::Windows::Forms::Button());
			this->btnK = (gcnew System::Windows::Forms::Button());
			this->btnJ = (gcnew System::Windows::Forms::Button());
			this->btnH = (gcnew System::Windows::Forms::Button());
			this->btnG = (gcnew System::Windows::Forms::Button());
			this->btnF = (gcnew System::Windows::Forms::Button());
			this->btnD = (gcnew System::Windows::Forms::Button());
			this->btnS = (gcnew System::Windows::Forms::Button());
			this->btnA = (gcnew System::Windows::Forms::Button());
			this->btnM = (gcnew System::Windows::Forms::Button());
			this->btnN = (gcnew System::Windows::Forms::Button());
			this->btnB = (gcnew System::Windows::Forms::Button());
			this->btnV = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnX = (gcnew System::Windows::Forms::Button());
			this->btnZ = (gcnew System::Windows::Forms::Button());
			this->btnSpace = (gcnew System::Windows::Forms::Button());
			this->btnBackSpace = (gcnew System::Windows::Forms::Button());
			this->btnClearAll = (gcnew System::Windows::Forms::Button());
			this->btnShift = (gcnew System::Windows::Forms::Button());
			this->btnEnter = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// rtbMessage
			// 
			this->rtbMessage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtbMessage->Location = System::Drawing::Point(18, 22);
			this->rtbMessage->Margin = System::Windows::Forms::Padding(2);
			this->rtbMessage->Name = L"rtbMessage";
			this->rtbMessage->ReadOnly = true;
			this->rtbMessage->Size = System::Drawing::Size(404, 171);
			this->rtbMessage->TabIndex = 0;
			this->rtbMessage->TabStop = false;
			this->rtbMessage->Text = L"";
			// 
			// btnQ
			// 
			this->btnQ->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnQ->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnQ->FlatAppearance->BorderSize = 2;
			this->btnQ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnQ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnQ->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnQ->Location = System::Drawing::Point(38, 210);
			this->btnQ->Margin = System::Windows::Forms::Padding(2);
			this->btnQ->Name = L"btnQ";
			this->btnQ->Size = System::Drawing::Size(26, 30);
			this->btnQ->TabIndex = 1;
			this->btnQ->Text = L"Q";
			this->btnQ->UseVisualStyleBackColor = false;
			this->btnQ->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnW
			// 
			this->btnW->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnW->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnW->FlatAppearance->BorderSize = 2;
			this->btnW->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnW->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnW->Location = System::Drawing::Point(76, 210);
			this->btnW->Margin = System::Windows::Forms::Padding(2);
			this->btnW->Name = L"btnW";
			this->btnW->Size = System::Drawing::Size(26, 30);
			this->btnW->TabIndex = 2;
			this->btnW->Text = L"W";
			this->btnW->UseVisualStyleBackColor = false;
			this->btnW->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnE
			// 
			this->btnE->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnE->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnE->FlatAppearance->BorderSize = 2;
			this->btnE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnE->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnE->Location = System::Drawing::Point(116, 210);
			this->btnE->Margin = System::Windows::Forms::Padding(2);
			this->btnE->Name = L"btnE";
			this->btnE->Size = System::Drawing::Size(26, 30);
			this->btnE->TabIndex = 3;
			this->btnE->Text = L"E";
			this->btnE->UseVisualStyleBackColor = false;
			this->btnE->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnR
			// 
			this->btnR->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnR->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnR->FlatAppearance->BorderSize = 2;
			this->btnR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnR->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnR->Location = System::Drawing::Point(154, 210);
			this->btnR->Margin = System::Windows::Forms::Padding(2);
			this->btnR->Name = L"btnR";
			this->btnR->Size = System::Drawing::Size(26, 30);
			this->btnR->TabIndex = 4;
			this->btnR->Text = L"R";
			this->btnR->UseVisualStyleBackColor = false;
			this->btnR->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnT
			// 
			this->btnT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnT->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnT->FlatAppearance->BorderSize = 2;
			this->btnT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnT->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnT->Location = System::Drawing::Point(194, 210);
			this->btnT->Margin = System::Windows::Forms::Padding(2);
			this->btnT->Name = L"btnT";
			this->btnT->Size = System::Drawing::Size(26, 30);
			this->btnT->TabIndex = 5;
			this->btnT->Text = L"T";
			this->btnT->UseVisualStyleBackColor = false;
			this->btnT->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnY
			// 
			this->btnY->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnY->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnY->FlatAppearance->BorderSize = 2;
			this->btnY->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnY->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnY->Location = System::Drawing::Point(232, 210);
			this->btnY->Margin = System::Windows::Forms::Padding(2);
			this->btnY->Name = L"btnY";
			this->btnY->Size = System::Drawing::Size(26, 30);
			this->btnY->TabIndex = 6;
			this->btnY->Text = L"Y";
			this->btnY->UseVisualStyleBackColor = false;
			this->btnY->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnU
			// 
			this->btnU->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnU->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnU->FlatAppearance->BorderSize = 2;
			this->btnU->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnU->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnU->Location = System::Drawing::Point(272, 210);
			this->btnU->Margin = System::Windows::Forms::Padding(2);
			this->btnU->Name = L"btnU";
			this->btnU->Size = System::Drawing::Size(26, 30);
			this->btnU->TabIndex = 7;
			this->btnU->Text = L"U";
			this->btnU->UseVisualStyleBackColor = false;
			this->btnU->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnI
			// 
			this->btnI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnI->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnI->FlatAppearance->BorderSize = 2;
			this->btnI->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnI->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnI->Location = System::Drawing::Point(310, 210);
			this->btnI->Margin = System::Windows::Forms::Padding(2);
			this->btnI->Name = L"btnI";
			this->btnI->Size = System::Drawing::Size(26, 30);
			this->btnI->TabIndex = 8;
			this->btnI->Text = L"I";
			this->btnI->UseVisualStyleBackColor = false;
			this->btnI->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnO
			// 
			this->btnO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnO->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnO->FlatAppearance->BorderSize = 2;
			this->btnO->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnO->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnO->Location = System::Drawing::Point(350, 210);
			this->btnO->Margin = System::Windows::Forms::Padding(2);
			this->btnO->Name = L"btnO";
			this->btnO->Size = System::Drawing::Size(26, 30);
			this->btnO->TabIndex = 9;
			this->btnO->Text = L"O";
			this->btnO->UseVisualStyleBackColor = false;
			this->btnO->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnP
			// 
			this->btnP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnP->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnP->FlatAppearance->BorderSize = 2;
			this->btnP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnP->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnP->Location = System::Drawing::Point(388, 210);
			this->btnP->Margin = System::Windows::Forms::Padding(2);
			this->btnP->Name = L"btnP";
			this->btnP->Size = System::Drawing::Size(26, 30);
			this->btnP->TabIndex = 10;
			this->btnP->Text = L"P";
			this->btnP->UseVisualStyleBackColor = false;
			this->btnP->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnL
			// 
			this->btnL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnL->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnL->FlatAppearance->BorderSize = 2;
			this->btnL->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnL->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnL->Location = System::Drawing::Point(370, 253);
			this->btnL->Margin = System::Windows::Forms::Padding(2);
			this->btnL->Name = L"btnL";
			this->btnL->Size = System::Drawing::Size(26, 30);
			this->btnL->TabIndex = 19;
			this->btnL->Text = L"L";
			this->btnL->UseVisualStyleBackColor = false;
			this->btnL->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnK
			// 
			this->btnK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnK->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnK->FlatAppearance->BorderSize = 2;
			this->btnK->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnK->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnK->Location = System::Drawing::Point(332, 253);
			this->btnK->Margin = System::Windows::Forms::Padding(2);
			this->btnK->Name = L"btnK";
			this->btnK->Size = System::Drawing::Size(26, 30);
			this->btnK->TabIndex = 18;
			this->btnK->Text = L"K";
			this->btnK->UseVisualStyleBackColor = false;
			this->btnK->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnJ
			// 
			this->btnJ->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnJ->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnJ->FlatAppearance->BorderSize = 2;
			this->btnJ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnJ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnJ->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnJ->Location = System::Drawing::Point(292, 253);
			this->btnJ->Margin = System::Windows::Forms::Padding(2);
			this->btnJ->Name = L"btnJ";
			this->btnJ->Size = System::Drawing::Size(26, 30);
			this->btnJ->TabIndex = 17;
			this->btnJ->Text = L"J";
			this->btnJ->UseVisualStyleBackColor = false;
			this->btnJ->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnH
			// 
			this->btnH->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnH->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnH->FlatAppearance->BorderSize = 2;
			this->btnH->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnH->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnH->Location = System::Drawing::Point(254, 253);
			this->btnH->Margin = System::Windows::Forms::Padding(2);
			this->btnH->Name = L"btnH";
			this->btnH->Size = System::Drawing::Size(26, 30);
			this->btnH->TabIndex = 16;
			this->btnH->Text = L"H";
			this->btnH->UseVisualStyleBackColor = false;
			this->btnH->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnG
			// 
			this->btnG->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnG->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnG->FlatAppearance->BorderSize = 2;
			this->btnG->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnG->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnG->Location = System::Drawing::Point(214, 253);
			this->btnG->Margin = System::Windows::Forms::Padding(2);
			this->btnG->Name = L"btnG";
			this->btnG->Size = System::Drawing::Size(26, 30);
			this->btnG->TabIndex = 15;
			this->btnG->Text = L"G";
			this->btnG->UseVisualStyleBackColor = false;
			this->btnG->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnF
			// 
			this->btnF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnF->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnF->FlatAppearance->BorderSize = 2;
			this->btnF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnF->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnF->Location = System::Drawing::Point(176, 253);
			this->btnF->Margin = System::Windows::Forms::Padding(2);
			this->btnF->Name = L"btnF";
			this->btnF->Size = System::Drawing::Size(26, 30);
			this->btnF->TabIndex = 14;
			this->btnF->Text = L"F";
			this->btnF->UseVisualStyleBackColor = false;
			this->btnF->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnD
			// 
			this->btnD->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnD->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnD->FlatAppearance->BorderSize = 2;
			this->btnD->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnD->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnD->Location = System::Drawing::Point(136, 253);
			this->btnD->Margin = System::Windows::Forms::Padding(2);
			this->btnD->Name = L"btnD";
			this->btnD->Size = System::Drawing::Size(26, 30);
			this->btnD->TabIndex = 13;
			this->btnD->Text = L"D";
			this->btnD->UseVisualStyleBackColor = false;
			this->btnD->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnS
			// 
			this->btnS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnS->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnS->FlatAppearance->BorderSize = 2;
			this->btnS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnS->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnS->Location = System::Drawing::Point(98, 253);
			this->btnS->Margin = System::Windows::Forms::Padding(2);
			this->btnS->Name = L"btnS";
			this->btnS->Size = System::Drawing::Size(26, 30);
			this->btnS->TabIndex = 12;
			this->btnS->Text = L"S";
			this->btnS->UseVisualStyleBackColor = false;
			this->btnS->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnA
			// 
			this->btnA->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnA->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnA->FlatAppearance->BorderSize = 2;
			this->btnA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnA->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnA->Location = System::Drawing::Point(58, 253);
			this->btnA->Margin = System::Windows::Forms::Padding(2);
			this->btnA->Name = L"btnA";
			this->btnA->Size = System::Drawing::Size(26, 30);
			this->btnA->TabIndex = 11;
			this->btnA->Text = L"A";
			this->btnA->UseVisualStyleBackColor = false;
			this->btnA->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnM
			// 
			this->btnM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnM->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnM->FlatAppearance->BorderSize = 2;
			this->btnM->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnM->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnM->Location = System::Drawing::Point(332, 295);
			this->btnM->Margin = System::Windows::Forms::Padding(2);
			this->btnM->Name = L"btnM";
			this->btnM->Size = System::Drawing::Size(26, 30);
			this->btnM->TabIndex = 26;
			this->btnM->Text = L"M";
			this->btnM->UseVisualStyleBackColor = false;
			this->btnM->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnN
			// 
			this->btnN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnN->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnN->FlatAppearance->BorderSize = 2;
			this->btnN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnN->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnN->Location = System::Drawing::Point(292, 295);
			this->btnN->Margin = System::Windows::Forms::Padding(2);
			this->btnN->Name = L"btnN";
			this->btnN->Size = System::Drawing::Size(26, 30);
			this->btnN->TabIndex = 25;
			this->btnN->Text = L"N";
			this->btnN->UseVisualStyleBackColor = false;
			this->btnN->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnB
			// 
			this->btnB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnB->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnB->FlatAppearance->BorderSize = 2;
			this->btnB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnB->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnB->Location = System::Drawing::Point(254, 295);
			this->btnB->Margin = System::Windows::Forms::Padding(2);
			this->btnB->Name = L"btnB";
			this->btnB->Size = System::Drawing::Size(26, 30);
			this->btnB->TabIndex = 24;
			this->btnB->Text = L"B";
			this->btnB->UseVisualStyleBackColor = false;
			this->btnB->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnV
			// 
			this->btnV->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnV->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnV->FlatAppearance->BorderSize = 2;
			this->btnV->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnV->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnV->Location = System::Drawing::Point(214, 295);
			this->btnV->Margin = System::Windows::Forms::Padding(2);
			this->btnV->Name = L"btnV";
			this->btnV->Size = System::Drawing::Size(26, 30);
			this->btnV->TabIndex = 23;
			this->btnV->Text = L"V";
			this->btnV->UseVisualStyleBackColor = false;
			this->btnV->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnC
			// 
			this->btnC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnC->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnC->FlatAppearance->BorderSize = 2;
			this->btnC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnC->Location = System::Drawing::Point(176, 295);
			this->btnC->Margin = System::Windows::Forms::Padding(2);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(26, 30);
			this->btnC->TabIndex = 22;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = false;
			this->btnC->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnX
			// 
			this->btnX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnX->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnX->FlatAppearance->BorderSize = 2;
			this->btnX->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnX->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnX->Location = System::Drawing::Point(136, 295);
			this->btnX->Margin = System::Windows::Forms::Padding(2);
			this->btnX->Name = L"btnX";
			this->btnX->Size = System::Drawing::Size(26, 30);
			this->btnX->TabIndex = 21;
			this->btnX->Text = L"X";
			this->btnX->UseVisualStyleBackColor = false;
			this->btnX->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnZ
			// 
			this->btnZ->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnZ->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnZ->FlatAppearance->BorderSize = 2;
			this->btnZ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnZ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnZ->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnZ->Location = System::Drawing::Point(98, 295);
			this->btnZ->Margin = System::Windows::Forms::Padding(2);
			this->btnZ->Name = L"btnZ";
			this->btnZ->Size = System::Drawing::Size(26, 30);
			this->btnZ->TabIndex = 20;
			this->btnZ->Text = L"Z";
			this->btnZ->UseVisualStyleBackColor = false;
			this->btnZ->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnLetter_Click);
			// 
			// btnSpace
			// 
			this->btnSpace->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnSpace->FlatAppearance->BorderSize = 2;
			this->btnSpace->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSpace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSpace->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnSpace->Location = System::Drawing::Point(116, 341);
			this->btnSpace->Margin = System::Windows::Forms::Padding(2);
			this->btnSpace->Name = L"btnSpace";
			this->btnSpace->Size = System::Drawing::Size(220, 27);
			this->btnSpace->TabIndex = 27;
			this->btnSpace->UseVisualStyleBackColor = true;
			this->btnSpace->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnSpace_Click);
			// 
			// btnBackSpace
			// 
			this->btnBackSpace->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnBackSpace->FlatAppearance->BorderSize = 2;
			this->btnBackSpace->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnBackSpace->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBackSpace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBackSpace->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnBackSpace->Location = System::Drawing::Point(350, 341);
			this->btnBackSpace->Margin = System::Windows::Forms::Padding(2);
			this->btnBackSpace->Name = L"btnBackSpace";
			this->btnBackSpace->Size = System::Drawing::Size(91, 27);
			this->btnBackSpace->TabIndex = 28;
			this->btnBackSpace->Text = L"Backspace";
			this->btnBackSpace->UseVisualStyleBackColor = true;
			this->btnBackSpace->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnBackSpace_Click);
			// 
			// btnClearAll
			// 
			this->btnClearAll->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnClearAll->FlatAppearance->BorderSize = 2;
			this->btnClearAll->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClearAll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClearAll->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnClearAll->Location = System::Drawing::Point(29, 341);
			this->btnClearAll->Margin = System::Windows::Forms::Padding(2);
			this->btnClearAll->Name = L"btnClearAll";
			this->btnClearAll->Size = System::Drawing::Size(73, 27);
			this->btnClearAll->TabIndex = 29;
			this->btnClearAll->Text = L"Clear All";
			this->btnClearAll->UseVisualStyleBackColor = true;
			this->btnClearAll->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnClearAll_Click);
			// 
			// btnShift
			// 
			this->btnShift->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnShift->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnShift->FlatAppearance->BorderSize = 2;
			this->btnShift->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnShift->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnShift->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnShift->Location = System::Drawing::Point(29, 298);
			this->btnShift->Margin = System::Windows::Forms::Padding(2);
			this->btnShift->Name = L"btnShift";
			this->btnShift->Size = System::Drawing::Size(55, 27);
			this->btnShift->TabIndex = 30;
			this->btnShift->Text = L"Shift";
			this->btnShift->UseVisualStyleBackColor = false;
			this->btnShift->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnShift_Click);
			// 
			// btnEnter
			// 
			this->btnEnter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnEnter->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnEnter->FlatAppearance->BorderSize = 2;
			this->btnEnter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEnter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEnter->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnEnter->Location = System::Drawing::Point(366, 298);
			this->btnEnter->Margin = System::Windows::Forms::Padding(2);
			this->btnEnter->Name = L"btnEnter";
			this->btnEnter->Size = System::Drawing::Size(55, 27);
			this->btnEnter->TabIndex = 31;
			this->btnEnter->Text = L"Enter";
			this->btnEnter->UseVisualStyleBackColor = false;
			this->btnEnter->Click += gcnew System::EventHandler(this, &frmTypeWriter::btnEnter_Click);
			// 
			// frmTypeWriter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(452, 388);
			this->Controls->Add(this->btnEnter);
			this->Controls->Add(this->btnShift);
			this->Controls->Add(this->btnClearAll);
			this->Controls->Add(this->btnBackSpace);
			this->Controls->Add(this->btnSpace);
			this->Controls->Add(this->btnM);
			this->Controls->Add(this->btnN);
			this->Controls->Add(this->btnB);
			this->Controls->Add(this->btnV);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnX);
			this->Controls->Add(this->btnZ);
			this->Controls->Add(this->btnL);
			this->Controls->Add(this->btnK);
			this->Controls->Add(this->btnJ);
			this->Controls->Add(this->btnH);
			this->Controls->Add(this->btnG);
			this->Controls->Add(this->btnF);
			this->Controls->Add(this->btnD);
			this->Controls->Add(this->btnS);
			this->Controls->Add(this->btnA);
			this->Controls->Add(this->btnP);
			this->Controls->Add(this->btnO);
			this->Controls->Add(this->btnI);
			this->Controls->Add(this->btnU);
			this->Controls->Add(this->btnY);
			this->Controls->Add(this->btnT);
			this->Controls->Add(this->btnR);
			this->Controls->Add(this->btnE);
			this->Controls->Add(this->btnW);
			this->Controls->Add(this->btnQ);
			this->Controls->Add(this->rtbMessage);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmTypeWriter";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Type";
			this->ResumeLayout(false);

		}
#pragma endregion

#pragma region Button Events

	//-----------------------------------------------------------------------------------------------------------------------
	// - Custom click event handler which handles all the letter clicks - Reduces code from 26 functions to 1... Woot Woot!!
	private: System::Void btnLetter_Click(System::Object^  sender, System::EventArgs^  e) {

				// Declare a pointer to a button

				// Since the sender is a button object we can cast it to a button and get the address 
			    // The buttonSelected pointer now points to the button that was clicked
				 
				//Check if caps is on -- if it is set text of selected button to upper case else set text to lower case
		Button^ clickedButton;
		clickedButton = safe_cast<Button^>(sender);
		
		if (CapsOn)
		{
			letter = clickedButton->Text->ToUpper();
		}
		else
		{
			letter = clickedButton->Text->ToLower();
		}
				

				// Call Display message which appends the letter to the rich text box
		DisplayMessage();
	}

	private: System::Void btnClearAll_Click(System::Object^  sender, System::EventArgs^  e) 
	{
				//initialize system and clear text box
			InitializeMessage();
	}

	private: System::Void btnSpace_Click(System::Object^  sender, System::EventArgs^  e) {

		letter = " ";
		DisplayMessage();
				//"space" button is pressed
	}

	private: System::Void btnBackSpace_Click(System::Object^  sender, System::EventArgs^  e) {
			//back space button has been pressed do clear the last typed letter	 
			BackspaceClear();
	}

	private: System::Void btnShift_Click(System::Object^  sender, System::EventArgs^  e) {

				//Set caps to "on" or "off" and set color appropiately
				
				 if (CapsOn)
				 {
					 btnShift->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						 static_cast<System::Int32>(static_cast<System::Byte>(255)));
					 CapsOn = false;
				 }
				 else
				 {
					 btnShift->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
						 static_cast<System::Int32>(static_cast<System::Byte>(255)));
					 CapsOn = true;
				 }
	}

	private: System::Void btnEnter_Click(System::Object^  sender, System::EventArgs^  e) {

		letter = "\n";
		DisplayMessage();
	}
#pragma endregion		


#pragma region My Code

			 String ^letter = nullptr; //Declare a letter pointer (this will represent the letter we type)
			 bool CapsOn = false;

			 //----------------------------------------------------------------------------------
			 void InitializeMessage()
			 {
				//initlialze all data members here (note that this should be called in the consructor
				 letter = "";
				 rtbMessage->Text = "";


				 btnShift->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
					 static_cast<System::Int32>(static_cast<System::Byte>(255)));
			 }

			 //----------------------------------------------------------------------------------
			 void DisplayMessage()
			 {
				 //display the current letter typed by appending it to the rich text box
				 rtbMessage->AppendText(letter);
			 }

			 //----------------------------------------------------------------------------------
			 void BackspaceClear()
			 {
				 if (rtbMessage->Text->Length > 0)
				 {
					 rtbMessage->Text = rtbMessage->Text->Remove(rtbMessage->Text->Length - 1);
				 }
				 //when the backspace key is pressed  clear the last typed letter
			 }

			 //----------------------------------------------------------------------------------
			 void ClearAll()
			 {
				//clear the entire text box
			 }

#pragma endregion


	};
}
