#pragma once

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
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
			this->flpBoard->SuspendLayout();
			this->mnuTop->SuspendLayout();
			this->SuspendLayout();
			// 
			// flpBoard
			// 
			this->flpBoard->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flpBoard.BackgroundImage")));
			this->flpBoard->Controls->Add(this->btnTopLeft);
			this->flpBoard->Controls->Add(this->btnTopMiddle);
			this->flpBoard->Controls->Add(this->btnTopRight);
			this->flpBoard->Controls->Add(this->btnMidLeft);
			this->flpBoard->Controls->Add(this->btnMidMid);
			this->flpBoard->Controls->Add(this->btnMidRight);
			this->flpBoard->Controls->Add(this->btnBotLeft);
			this->flpBoard->Controls->Add(this->btnBotMid);
			this->flpBoard->Controls->Add(this->btnBotRight);
			this->flpBoard->Location = System::Drawing::Point(19, 60);
			this->flpBoard->Name = L"flpBoard";
			this->flpBoard->Size = System::Drawing::Size(258, 250);
			this->flpBoard->TabIndex = 1;
			// 
			// btnTopLeft
			// 
			this->btnTopLeft->BackColor = System::Drawing::Color::White;
			this->btnTopLeft->Location = System::Drawing::Point(3, 3);
			this->btnTopLeft->Name = L"btnTopLeft";
			this->btnTopLeft->Size = System::Drawing::Size(75, 75);
			this->btnTopLeft->TabIndex = 0;
			this->btnTopLeft->UseVisualStyleBackColor = false;
			// 
			// btnTopMiddle
			// 
			this->btnTopMiddle->BackColor = System::Drawing::Color::White;
			this->btnTopMiddle->Location = System::Drawing::Point(84, 3);
			this->btnTopMiddle->Name = L"btnTopMiddle";
			this->btnTopMiddle->Size = System::Drawing::Size(85, 75);
			this->btnTopMiddle->TabIndex = 1;
			this->btnTopMiddle->UseVisualStyleBackColor = false;
			// 
			// btnTopRight
			// 
			this->btnTopRight->BackColor = System::Drawing::Color::White;
			this->btnTopRight->Location = System::Drawing::Point(175, 3);
			this->btnTopRight->Name = L"btnTopRight";
			this->btnTopRight->Size = System::Drawing::Size(75, 75);
			this->btnTopRight->TabIndex = 2;
			this->btnTopRight->UseVisualStyleBackColor = false;
			// 
			// btnMidLeft
			// 
			this->btnMidLeft->BackColor = System::Drawing::Color::White;
			this->btnMidLeft->Location = System::Drawing::Point(3, 84);
			this->btnMidLeft->Name = L"btnMidLeft";
			this->btnMidLeft->Size = System::Drawing::Size(75, 84);
			this->btnMidLeft->TabIndex = 3;
			this->btnMidLeft->UseVisualStyleBackColor = false;
			// 
			// btnMidMid
			// 
			this->btnMidMid->BackColor = System::Drawing::Color::White;
			this->btnMidMid->Location = System::Drawing::Point(84, 84);
			this->btnMidMid->Name = L"btnMidMid";
			this->btnMidMid->Size = System::Drawing::Size(85, 84);
			this->btnMidMid->TabIndex = 4;
			this->btnMidMid->UseVisualStyleBackColor = false;
			// 
			// btnMidRight
			// 
			this->btnMidRight->BackColor = System::Drawing::Color::White;
			this->btnMidRight->Location = System::Drawing::Point(175, 84);
			this->btnMidRight->Name = L"btnMidRight";
			this->btnMidRight->Size = System::Drawing::Size(75, 84);
			this->btnMidRight->TabIndex = 5;
			this->btnMidRight->UseVisualStyleBackColor = false;
			// 
			// btnBotLeft
			// 
			this->btnBotLeft->BackColor = System::Drawing::Color::White;
			this->btnBotLeft->Location = System::Drawing::Point(3, 174);
			this->btnBotLeft->Name = L"btnBotLeft";
			this->btnBotLeft->Size = System::Drawing::Size(75, 75);
			this->btnBotLeft->TabIndex = 6;
			this->btnBotLeft->UseVisualStyleBackColor = false;
			// 
			// btnBotMid
			// 
			this->btnBotMid->BackColor = System::Drawing::Color::White;
			this->btnBotMid->Location = System::Drawing::Point(84, 174);
			this->btnBotMid->Name = L"btnBotMid";
			this->btnBotMid->Size = System::Drawing::Size(85, 75);
			this->btnBotMid->TabIndex = 7;
			this->btnBotMid->UseVisualStyleBackColor = false;
			// 
			// btnBotRight
			// 
			this->btnBotRight->BackColor = System::Drawing::Color::White;
			this->btnBotRight->Location = System::Drawing::Point(175, 174);
			this->btnBotRight->Name = L"btnBotRight";
			this->btnBotRight->Size = System::Drawing::Size(75, 75);
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
			// 
			// creditsToolStripMenuItem
			// 
			this->creditsToolStripMenuItem->Name = L"creditsToolStripMenuItem";
			this->creditsToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->creditsToolStripMenuItem->Text = L"&Credits";
			// 
			// staBottom
			// 
			this->staBottom->Location = System::Drawing::Point(0, 319);
			this->staBottom->Name = L"staBottom";
			this->staBottom->Size = System::Drawing::Size(289, 22);
			this->staBottom->TabIndex = 3;
			this->staBottom->Text = L"statusStrip1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(289, 341);
			this->Controls->Add(this->staBottom);
			this->Controls->Add(this->flpBoard);
			this->Controls->Add(this->mnuTop);
			this->MainMenuStrip = this->mnuTop;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->flpBoard->ResumeLayout(false);
			this->mnuTop->ResumeLayout(false);
			this->mnuTop->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
