#pragma once

namespace FormTemplate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AboutForm
	/// </summary>
	public ref class AboutForm : public System::Windows::Forms::Form
	{
	public:
		AboutForm(void)
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
		~AboutForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  rtbAboutMessage;
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
			this->rtbAboutMessage = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// rtbAboutMessage
			// 
			this->rtbAboutMessage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->rtbAboutMessage->Location = System::Drawing::Point(12, 12);
			this->rtbAboutMessage->Name = L"rtbAboutMessage";
			this->rtbAboutMessage->Size = System::Drawing::Size(260, 115);
			this->rtbAboutMessage->TabIndex = 0;
			this->rtbAboutMessage->Text = L"Don\'t worry even people who are good at math use a calculator some times.  Its no"
				L" big deal";
			// 
			// AboutForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 141);
			this->Controls->Add(this->rtbAboutMessage);
			this->Name = L"AboutForm";
			this->Text = L"About Message";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
