#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Music_Player {

	/// <summary>
	/// Summary for Open
	/// </summary>
	public ref class Open : public System::Windows::Forms::UserControl
	{
	public:
		Open(void)
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
		~Open()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ Open_btn;
	protected:

	private: System::Windows::Forms::OpenFileDialog^ ofd;
	public: String^ path = "";
	public: array <String^>^ path_arr = nullptr;
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
			this->Open_btn = (gcnew System::Windows::Forms::Button());
			this->ofd = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// Open_btn
			// 
			this->Open_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Open_btn->Location = System::Drawing::Point(158, 205);
			this->Open_btn->Name = L"Open_btn";
			this->Open_btn->Size = System::Drawing::Size(129, 43);
			this->Open_btn->TabIndex = 1;
			this->Open_btn->Text = L"OPEN";
			this->Open_btn->UseVisualStyleBackColor = true;
			this->Open_btn->Click += gcnew System::EventHandler(this, &Open::Open_btn_Click);
			// 
			// ofd
			// 
			this->ofd->FileName = L"openFileDialog1";
			this->ofd->Filter = L"WAV files (*.wav)|*.wav|All files (*.*)|*.*";
			this->ofd->Multiselect = true;
			// 
			// Open
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->Controls->Add(this->Open_btn);
			this->Name = L"Open";
			this->Size = System::Drawing::Size(564, 472);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Open_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Open_btn->Text == "OPEN") {
			if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK) {
				path = ofd->FileName;
				path_arr = ofd->FileNames;
			}
			Open_btn->Text = "ADD";
		}
		else if (Open_btn->Text == "ADD") {
			if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK) {
				path = ofd->FileName;
				path_arr = ofd->FileNames;
			}
		}

	}
	};
}
