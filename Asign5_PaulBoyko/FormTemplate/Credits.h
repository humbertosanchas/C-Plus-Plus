#pragma once

//Paul Boyko April 2016

namespace FormTemplate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Credits
	/// </summary>
	public ref class Credits : public System::Windows::Forms::Form
	{
	public:
		Credits(void)
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
		~Credits()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblCreditConceptLbl;
	protected:
	private: System::Windows::Forms::Label^  lblCreditsConceptResult;
	private: System::Windows::Forms::Label^  lblCreditsProgrammingLbl;
	private: System::Windows::Forms::Label^  LblCreditsProgrammingResult;
	private: System::Windows::Forms::Label^  lblCreditsDesignLbl;
	private: System::Windows::Forms::Label^  lblCreditDesignResult;
	private: System::Windows::Forms::Label^  lblCreditDateMade;
	private: System::Windows::Forms::Label^  lblCreditFor;

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
			this->lblCreditConceptLbl = (gcnew System::Windows::Forms::Label());
			this->lblCreditsConceptResult = (gcnew System::Windows::Forms::Label());
			this->lblCreditsProgrammingLbl = (gcnew System::Windows::Forms::Label());
			this->LblCreditsProgrammingResult = (gcnew System::Windows::Forms::Label());
			this->lblCreditsDesignLbl = (gcnew System::Windows::Forms::Label());
			this->lblCreditDesignResult = (gcnew System::Windows::Forms::Label());
			this->lblCreditDateMade = (gcnew System::Windows::Forms::Label());
			this->lblCreditFor = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblCreditConceptLbl
			// 
			this->lblCreditConceptLbl->AutoSize = true;
			this->lblCreditConceptLbl->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCreditConceptLbl->Location = System::Drawing::Point(13, 29);
			this->lblCreditConceptLbl->Name = L"lblCreditConceptLbl";
			this->lblCreditConceptLbl->Size = System::Drawing::Size(88, 18);
			this->lblCreditConceptLbl->TabIndex = 0;
			this->lblCreditConceptLbl->Text = L"Concept :  ";
			// 
			// lblCreditsConceptResult
			// 
			this->lblCreditsConceptResult->AutoSize = true;
			this->lblCreditsConceptResult->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCreditsConceptResult->Location = System::Drawing::Point(136, 29);
			this->lblCreditsConceptResult->Name = L"lblCreditsConceptResult";
			this->lblCreditsConceptResult->Size = System::Drawing::Size(97, 18);
			this->lblCreditsConceptResult->TabIndex = 1;
			this->lblCreditsConceptResult->Text = L"Gina Grossi";
			// 
			// lblCreditsProgrammingLbl
			// 
			this->lblCreditsProgrammingLbl->AutoSize = true;
			this->lblCreditsProgrammingLbl->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCreditsProgrammingLbl->Location = System::Drawing::Point(13, 47);
			this->lblCreditsProgrammingLbl->Name = L"lblCreditsProgrammingLbl";
			this->lblCreditsProgrammingLbl->Size = System::Drawing::Size(136, 18);
			this->lblCreditsProgrammingLbl->TabIndex = 2;
			this->lblCreditsProgrammingLbl->Text = L"Programming  :  ";
			// 
			// LblCreditsProgrammingResult
			// 
			this->LblCreditsProgrammingResult->AutoSize = true;
			this->LblCreditsProgrammingResult->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblCreditsProgrammingResult->Location = System::Drawing::Point(136, 47);
			this->LblCreditsProgrammingResult->Name = L"LblCreditsProgrammingResult";
			this->LblCreditsProgrammingResult->Size = System::Drawing::Size(93, 18);
			this->LblCreditsProgrammingResult->TabIndex = 3;
			this->LblCreditsProgrammingResult->Text = L"Paul Boyko";
			// 
			// lblCreditsDesignLbl
			// 
			this->lblCreditsDesignLbl->AutoSize = true;
			this->lblCreditsDesignLbl->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCreditsDesignLbl->Location = System::Drawing::Point(13, 65);
			this->lblCreditsDesignLbl->Name = L"lblCreditsDesignLbl";
			this->lblCreditsDesignLbl->Size = System::Drawing::Size(88, 18);
			this->lblCreditsDesignLbl->TabIndex = 4;
			this->lblCreditsDesignLbl->Text = L"Design  :  ";
			// 
			// lblCreditDesignResult
			// 
			this->lblCreditDesignResult->AutoSize = true;
			this->lblCreditDesignResult->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCreditDesignResult->Location = System::Drawing::Point(136, 65);
			this->lblCreditDesignResult->Name = L"lblCreditDesignResult";
			this->lblCreditDesignResult->Size = System::Drawing::Size(93, 18);
			this->lblCreditDesignResult->TabIndex = 5;
			this->lblCreditDesignResult->Text = L"Paul Boyko";
			// 
			// lblCreditDateMade
			// 
			this->lblCreditDateMade->AutoSize = true;
			this->lblCreditDateMade->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCreditDateMade->Location = System::Drawing::Point(55, 103);
			this->lblCreditDateMade->Name = L"lblCreditDateMade";
			this->lblCreditDateMade->Size = System::Drawing::Size(157, 18);
			this->lblCreditDateMade->TabIndex = 6;
			this->lblCreditDateMade->Text = L"Created : April 2016";
			// 
			// lblCreditFor
			// 
			this->lblCreditFor->AutoSize = true;
			this->lblCreditFor->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCreditFor->Location = System::Drawing::Point(55, 121);
			this->lblCreditFor->Name = L"lblCreditFor";
			this->lblCreditFor->Size = System::Drawing::Size(137, 18);
			this->lblCreditFor->TabIndex = 7;
			this->lblCreditFor->Text = L"For : BTGD 9111";
			// 
			// Credits
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(250, 153);
			this->Controls->Add(this->lblCreditFor);
			this->Controls->Add(this->lblCreditDateMade);
			this->Controls->Add(this->lblCreditDesignResult);
			this->Controls->Add(this->lblCreditsDesignLbl);
			this->Controls->Add(this->LblCreditsProgrammingResult);
			this->Controls->Add(this->lblCreditsProgrammingLbl);
			this->Controls->Add(this->lblCreditsConceptResult);
			this->Controls->Add(this->lblCreditConceptLbl);
			this->Name = L"Credits";
			this->Text = L"Credits";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


};
}
