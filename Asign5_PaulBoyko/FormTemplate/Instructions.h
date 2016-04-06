#pragma once

namespace FormTemplate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class Instructions : public System::Windows::Forms::Form
	{
	public:
		Instructions(void)
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
		~Instructions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  rtbInstructions;
	protected:
	private: System::Windows::Forms::Button^  btnExitInstructions;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Instructions::typeid));
			this->rtbInstructions = (gcnew System::Windows::Forms::RichTextBox());
			this->btnExitInstructions = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// rtbInstructions
			// 
			this->rtbInstructions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtbInstructions->Location = System::Drawing::Point(35, 32);
			this->rtbInstructions->Name = L"rtbInstructions";
			this->rtbInstructions->Size = System::Drawing::Size(300, 151);
			this->rtbInstructions->TabIndex = 0;
			this->rtbInstructions->Text = resources->GetString(L"rtbInstructions.Text");
			// 
			// btnExitInstructions
			// 
			this->btnExitInstructions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExitInstructions->Location = System::Drawing::Point(107, 189);
			this->btnExitInstructions->Name = L"btnExitInstructions";
			this->btnExitInstructions->Size = System::Drawing::Size(146, 63);
			this->btnExitInstructions->TabIndex = 1;
			this->btnExitInstructions->Text = L"Close ";
			this->btnExitInstructions->UseVisualStyleBackColor = true;
			this->btnExitInstructions->Click += gcnew System::EventHandler(this, &Instructions::btnExitInstructions_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(359, 264);
			this->Controls->Add(this->btnExitInstructions);
			this->Controls->Add(this->rtbInstructions);
			this->Name = L"MyForm1";
			this->Text = L"Instructions";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnExitInstructions_Click(System::Object^  sender, System::EventArgs^  e) {

		this->Close();
	}
	};
}
