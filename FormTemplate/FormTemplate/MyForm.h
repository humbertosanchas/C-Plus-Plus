#pragma once
#include "Instructions.h"
#include "Credits.h"

namespace FormTemplate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^  flpBoard;
	protected:

	protected:
	private: System::Windows::Forms::Button^  btnTopLeft;
	private: System::Windows::Forms::Button^  btnTopMiddle;
	private: System::Windows::Forms::Button^  btnTopRight;
	private: System::Windows::Forms::Button^  btnMidLeft;
	private: System::Windows::Forms::Button^  btnMidMid;
	private: System::Windows::Forms::Button^  btnMidRight;
	private: System::Windows::Forms::Button^  btnBotLeft;
	private: System::Windows::Forms::Button^  btnBotMid;
	private: System::Windows::Forms::Button^  btnBotRight;
	private: System::Windows::Forms::MenuStrip^  mnuTop;

	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  instructionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  creditsToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^  staBottom;
	private: System::Windows::Forms::Label^  lblGamesPlayed;
	private: System::Windows::Forms::Label^  lblNumWinsX;
	private: System::Windows::Forms::Label^  lblNumWinsO;
	private: System::Windows::Forms::Label^  lblNumGamePlayedResult;
	private: System::Windows::Forms::Label^  lblWinsXResult;
	private: System::Windows::Forms::Label^  lblNumWinsOResult;
	private: System::Windows::Forms::ToolStripStatusLabel^  tslCurrentPlayer;
	private: System::Windows::Forms::ToolStripStatusLabel^  tslCurrentPlayersItYourTurn_OrYouWon;

	private: System::Windows::Forms::Button^  btnPlayAgain;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::Label^  lblNumOfTiesLbl;
	private: System::Windows::Forms::Label^  lblNumOfTiesResult;








	protected:

	protected:

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
			this->flpBoard = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btnTopLeft = (gcnew System::Windows::Forms::Button());
			this->btnTopMiddle = (gcnew System::Windows::Forms::Button());
			this->btnTopRight = (gcnew System::Windows::Forms::Button());
			this->btnMidLeft = (gcnew System::Windows::Forms::Button());
			this->btnMidMid = (gcnew System::Windows::Forms::Button());
			this->btnMidRight = (gcnew System::Windows::Forms::Button());
			this->btnBotLeft = (gcnew System::Windows::Forms::Button());
			this->btnBotMid = (gcnew System::Windows::Forms::Button());
			this->btnBotRight = (gcnew System::Windows::Forms::Button());
			this->mnuTop = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->instructionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->creditsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->staBottom = (gcnew System::Windows::Forms::StatusStrip());
			this->tslCurrentPlayer = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->tslCurrentPlayersItYourTurn_OrYouWon = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->lblGamesPlayed = (gcnew System::Windows::Forms::Label());
			this->lblNumWinsX = (gcnew System::Windows::Forms::Label());
			this->lblNumWinsO = (gcnew System::Windows::Forms::Label());
			this->lblNumGamePlayedResult = (gcnew System::Windows::Forms::Label());
			this->lblWinsXResult = (gcnew System::Windows::Forms::Label());
			this->lblNumWinsOResult = (gcnew System::Windows::Forms::Label());
			this->btnPlayAgain = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->lblNumOfTiesLbl = (gcnew System::Windows::Forms::Label());
			this->lblNumOfTiesResult = (gcnew System::Windows::Forms::Label());
			this->flpBoard->SuspendLayout();
			this->mnuTop->SuspendLayout();
			this->staBottom->SuspendLayout();
			this->SuspendLayout();
			// 
			// flpBoard
			// 
			this->flpBoard->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->flpBoard->Controls->Add(this->btnTopLeft);
			this->flpBoard->Controls->Add(this->btnTopMiddle);
			this->flpBoard->Controls->Add(this->btnTopRight);
			this->flpBoard->Controls->Add(this->btnMidLeft);
			this->flpBoard->Controls->Add(this->btnMidMid);
			this->flpBoard->Controls->Add(this->btnMidRight);
			this->flpBoard->Controls->Add(this->btnBotLeft);
			this->flpBoard->Controls->Add(this->btnBotMid);
			this->flpBoard->Controls->Add(this->btnBotRight);
			this->flpBoard->Location = System::Drawing::Point(18, 164);
			this->flpBoard->Margin = System::Windows::Forms::Padding(0);
			this->flpBoard->Name = L"flpBoard";
			this->flpBoard->Size = System::Drawing::Size(258, 250);
			this->flpBoard->TabIndex = 1;
			// 
			// btnTopLeft
			// 
			this->btnTopLeft->BackColor = System::Drawing::Color::White;
			this->btnTopLeft->Location = System::Drawing::Point(0, 0);
			this->btnTopLeft->Margin = System::Windows::Forms::Padding(0, 0, 3, 3);
			this->btnTopLeft->Name = L"btnTopLeft";
			this->btnTopLeft->Size = System::Drawing::Size(75, 75);
			this->btnTopLeft->TabIndex = 0;
			this->btnTopLeft->UseVisualStyleBackColor = false;
			// 
			// btnTopMiddle
			// 
			this->btnTopMiddle->BackColor = System::Drawing::Color::White;
			this->btnTopMiddle->Location = System::Drawing::Point(81, 0);
			this->btnTopMiddle->Margin = System::Windows::Forms::Padding(3, 0, 3, 3);
			this->btnTopMiddle->Name = L"btnTopMiddle";
			this->btnTopMiddle->Size = System::Drawing::Size(85, 75);
			this->btnTopMiddle->TabIndex = 1;
			this->btnTopMiddle->UseVisualStyleBackColor = false;
			// 
			// btnTopRight
			// 
			this->btnTopRight->BackColor = System::Drawing::Color::White;
			this->btnTopRight->Location = System::Drawing::Point(172, 0);
			this->btnTopRight->Margin = System::Windows::Forms::Padding(3, 0, 0, 3);
			this->btnTopRight->Name = L"btnTopRight";
			this->btnTopRight->Size = System::Drawing::Size(86, 75);
			this->btnTopRight->TabIndex = 2;
			this->btnTopRight->UseVisualStyleBackColor = false;
			// 
			// btnMidLeft
			// 
			this->btnMidLeft->BackColor = System::Drawing::Color::White;
			this->btnMidLeft->Location = System::Drawing::Point(0, 81);
			this->btnMidLeft->Margin = System::Windows::Forms::Padding(0, 3, 3, 3);
			this->btnMidLeft->Name = L"btnMidLeft";
			this->btnMidLeft->Size = System::Drawing::Size(75, 84);
			this->btnMidLeft->TabIndex = 3;
			this->btnMidLeft->UseVisualStyleBackColor = false;
			// 
			// btnMidMid
			// 
			this->btnMidMid->BackColor = System::Drawing::Color::White;
			this->btnMidMid->Location = System::Drawing::Point(81, 81);
			this->btnMidMid->Name = L"btnMidMid";
			this->btnMidMid->Size = System::Drawing::Size(85, 84);
			this->btnMidMid->TabIndex = 4;
			this->btnMidMid->UseVisualStyleBackColor = false;
			// 
			// btnMidRight
			// 
			this->btnMidRight->BackColor = System::Drawing::Color::White;
			this->btnMidRight->Location = System::Drawing::Point(172, 81);
			this->btnMidRight->Margin = System::Windows::Forms::Padding(3, 3, 0, 3);
			this->btnMidRight->Name = L"btnMidRight";
			this->btnMidRight->Size = System::Drawing::Size(86, 84);
			this->btnMidRight->TabIndex = 5;
			this->btnMidRight->UseVisualStyleBackColor = false;
			// 
			// btnBotLeft
			// 
			this->btnBotLeft->BackColor = System::Drawing::Color::White;
			this->btnBotLeft->Location = System::Drawing::Point(0, 171);
			this->btnBotLeft->Margin = System::Windows::Forms::Padding(0, 3, 3, 0);
			this->btnBotLeft->Name = L"btnBotLeft";
			this->btnBotLeft->Size = System::Drawing::Size(75, 79);
			this->btnBotLeft->TabIndex = 6;
			this->btnBotLeft->UseVisualStyleBackColor = false;
			// 
			// btnBotMid
			// 
			this->btnBotMid->BackColor = System::Drawing::Color::White;
			this->btnBotMid->Location = System::Drawing::Point(81, 171);
			this->btnBotMid->Margin = System::Windows::Forms::Padding(3, 3, 3, 0);
			this->btnBotMid->Name = L"btnBotMid";
			this->btnBotMid->Size = System::Drawing::Size(85, 79);
			this->btnBotMid->TabIndex = 7;
			this->btnBotMid->UseVisualStyleBackColor = false;
			// 
			// btnBotRight
			// 
			this->btnBotRight->BackColor = System::Drawing::Color::White;
			this->btnBotRight->Location = System::Drawing::Point(172, 171);
			this->btnBotRight->Margin = System::Windows::Forms::Padding(3, 3, 0, 0);
			this->btnBotRight->Name = L"btnBotRight";
			this->btnBotRight->Size = System::Drawing::Size(86, 79);
			this->btnBotRight->TabIndex = 8;
			this->btnBotRight->UseVisualStyleBackColor = false;
			// 
			// mnuTop
			// 
			this->mnuTop->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->mnuTop->Location = System::Drawing::Point(0, 0);
			this->mnuTop->Name = L"mnuTop";
			this->mnuTop->Size = System::Drawing::Size(289, 24);
			this->mnuTop->TabIndex = 2;
			this->mnuTop->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->newGameToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->newGameToolStripMenuItem->Text = L"&New Game";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->exitToolStripMenuItem->Text = L"&Exit";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->instructionsToolStripMenuItem,
					this->creditsToolStripMenuItem
			});
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"&About";
			// 
			// instructionsToolStripMenuItem
			// 
			this->instructionsToolStripMenuItem->Name = L"instructionsToolStripMenuItem";
			this->instructionsToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->instructionsToolStripMenuItem->Text = L"&Instructions";
			this->instructionsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::instructionsToolStripMenuItem_Click);
			// 
			// creditsToolStripMenuItem
			// 
			this->creditsToolStripMenuItem->Name = L"creditsToolStripMenuItem";
			this->creditsToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->creditsToolStripMenuItem->Text = L"&Credits";
			this->creditsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::creditsToolStripMenuItem_Click);
			// 
			// staBottom
			// 
			this->staBottom->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->tslCurrentPlayer,
					this->tslCurrentPlayersItYourTurn_OrYouWon
			});
			this->staBottom->Location = System::Drawing::Point(0, 507);
			this->staBottom->Name = L"staBottom";
			this->staBottom->Size = System::Drawing::Size(289, 22);
			this->staBottom->TabIndex = 3;
			this->staBottom->Text = L"statusStrip1";
			// 
			// tslCurrentPlayer
			// 
			this->tslCurrentPlayer->Name = L"tslCurrentPlayer";
			this->tslCurrentPlayer->Size = System::Drawing::Size(14, 17);
			this->tslCurrentPlayer->Text = L"X";
			// 
			// tslCurrentPlayersItYourTurn_OrYouWon
			// 
			this->tslCurrentPlayersItYourTurn_OrYouWon->Name = L"tslCurrentPlayersItYourTurn_OrYouWon";
			this->tslCurrentPlayersItYourTurn_OrYouWon->Size = System::Drawing::Size(70, 17);
			this->tslCurrentPlayersItYourTurn_OrYouWon->Text = L" its you turn";
			// 
			// lblGamesPlayed
			// 
			this->lblGamesPlayed->AutoSize = true;
			this->lblGamesPlayed->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGamesPlayed->Location = System::Drawing::Point(19, 46);
			this->lblGamesPlayed->Name = L"lblGamesPlayed";
			this->lblGamesPlayed->Size = System::Drawing::Size(178, 15);
			this->lblGamesPlayed->TabIndex = 4;
			this->lblGamesPlayed->Text = L"Number of Games Played : ";
			// 
			// lblNumWinsX
			// 
			this->lblNumWinsX->AutoSize = true;
			this->lblNumWinsX->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumWinsX->Location = System::Drawing::Point(19, 74);
			this->lblNumWinsX->Name = L"lblNumWinsX";
			this->lblNumWinsX->Size = System::Drawing::Size(170, 15);
			this->lblNumWinsX->TabIndex = 5;
			this->lblNumWinsX->Text = L"Number of Wins for X :  ";
			// 
			// lblNumWinsO
			// 
			this->lblNumWinsO->AutoSize = true;
			this->lblNumWinsO->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumWinsO->Location = System::Drawing::Point(19, 101);
			this->lblNumWinsO->Name = L"lblNumWinsO";
			this->lblNumWinsO->Size = System::Drawing::Size(163, 15);
			this->lblNumWinsO->TabIndex = 6;
			this->lblNumWinsO->Text = L"Number of Wins for O : ";
			// 
			// lblNumGamePlayedResult
			// 
			this->lblNumGamePlayedResult->AutoSize = true;
			this->lblNumGamePlayedResult->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumGamePlayedResult->Location = System::Drawing::Point(256, 43);
			this->lblNumGamePlayedResult->Name = L"lblNumGamePlayedResult";
			this->lblNumGamePlayedResult->Size = System::Drawing::Size(16, 18);
			this->lblNumGamePlayedResult->TabIndex = 7;
			this->lblNumGamePlayedResult->Text = L"0";
			// 
			// lblWinsXResult
			// 
			this->lblWinsXResult->AutoSize = true;
			this->lblWinsXResult->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblWinsXResult->Location = System::Drawing::Point(256, 71);
			this->lblWinsXResult->Name = L"lblWinsXResult";
			this->lblWinsXResult->Size = System::Drawing::Size(16, 18);
			this->lblWinsXResult->TabIndex = 8;
			this->lblWinsXResult->Text = L"0";
			// 
			// lblNumWinsOResult
			// 
			this->lblNumWinsOResult->AutoSize = true;
			this->lblNumWinsOResult->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumWinsOResult->Location = System::Drawing::Point(256, 98);
			this->lblNumWinsOResult->Name = L"lblNumWinsOResult";
			this->lblNumWinsOResult->Size = System::Drawing::Size(16, 18);
			this->lblNumWinsOResult->TabIndex = 9;
			this->lblNumWinsOResult->Text = L"0";
			// 
			// btnPlayAgain
			// 
			this->btnPlayAgain->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlayAgain->Location = System::Drawing::Point(18, 437);
			this->btnPlayAgain->Name = L"btnPlayAgain";
			this->btnPlayAgain->Size = System::Drawing::Size(127, 57);
			this->btnPlayAgain->TabIndex = 10;
			this->btnPlayAgain->Text = L"Play Again";
			this->btnPlayAgain->UseVisualStyleBackColor = true;
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(151, 437);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(127, 57);
			this->btnExit->TabIndex = 11;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// lblNumOfTiesLbl
			// 
			this->lblNumOfTiesLbl->AutoSize = true;
			this->lblNumOfTiesLbl->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumOfTiesLbl->Location = System::Drawing::Point(19, 128);
			this->lblNumOfTiesLbl->Name = L"lblNumOfTiesLbl";
			this->lblNumOfTiesLbl->Size = System::Drawing::Size(118, 15);
			this->lblNumOfTiesLbl->TabIndex = 12;
			this->lblNumOfTiesLbl->Text = L"Number of Ties : ";
			// 
			// lblNumOfTiesResult
			// 
			this->lblNumOfTiesResult->AutoSize = true;
			this->lblNumOfTiesResult->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumOfTiesResult->Location = System::Drawing::Point(256, 125);
			this->lblNumOfTiesResult->Name = L"lblNumOfTiesResult";
			this->lblNumOfTiesResult->Size = System::Drawing::Size(16, 18);
			this->lblNumOfTiesResult->TabIndex = 13;
			this->lblNumOfTiesResult->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(289, 529);
			this->Controls->Add(this->lblNumOfTiesResult);
			this->Controls->Add(this->lblNumOfTiesLbl);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnPlayAgain);
			this->Controls->Add(this->lblNumWinsOResult);
			this->Controls->Add(this->lblWinsXResult);
			this->Controls->Add(this->lblNumGamePlayedResult);
			this->Controls->Add(this->lblNumWinsO);
			this->Controls->Add(this->lblNumWinsX);
			this->Controls->Add(this->lblGamesPlayed);
			this->Controls->Add(this->staBottom);
			this->Controls->Add(this->flpBoard);
			this->Controls->Add(this->mnuTop);
			this->MainMenuStrip = this->mnuTop;
			this->Name = L"MyForm";
			this->Text = L"Tic Tac Toe";
			this->flpBoard->ResumeLayout(false);
			this->mnuTop->ResumeLayout(false);
			this->mnuTop->PerformLayout();
			this->staBottom->ResumeLayout(false);
			this->staBottom->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void instructionsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
	Instructions ^instructions = gcnew Instructions();
	instructions->Show();
}
private: System::Void creditsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Credits ^credis = gcnew Credits();
	credis->Show();
}
};
}
