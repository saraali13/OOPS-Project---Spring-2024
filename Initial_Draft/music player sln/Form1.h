#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Open;
	private: System::Windows::Forms::Button^ Play;
	private: System::Windows::Forms::OpenFileDialog^ ofd;
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
			this->Open = (gcnew System::Windows::Forms::Button());
			this->Play = (gcnew System::Windows::Forms::Button());
			this->ofd = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// Open
			// 
			this->Open->Location = System::Drawing::Point(12, 12);
			this->Open->Name = L"Open";
			this->Open->Size = System::Drawing::Size(75, 23);
			this->Open->TabIndex = 0;
			this->Open->Text = L"Open";
			this->Open->UseVisualStyleBackColor = true;
			this->Open->Click += gcnew System::EventHandler(this, &Form1::Open_Click);
			// 
			// Play
			// 
			this->Play->Location = System::Drawing::Point(12, 41);
			this->Play->Name = L"Play";
			this->Play->Size = System::Drawing::Size(75, 23);
			this->Play->TabIndex = 1;
			this->Play->Text = L"Play";
			this->Play->UseVisualStyleBackColor = true;
			this->Play->Click += gcnew System::EventHandler(this, &Form1::Play_Click);
			// 
			// ofd
			// 
			this->ofd->FileName = L"sound";
			this->ofd->Filter = L"WAV files (*.wav)|*.wav|All files (*.*)|*.*";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(294, 255);
			this->Controls->Add(this->Play);
			this->Controls->Add(this->Open);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ path;
		SoundPlayer^ music = gcnew SoundPlayer;
	private: System::Void Open_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK) {
			path = ofd->FileName;
		}
		path = ofd->FileName;
		music->SoundLocation = path;
		
		
	}
	private: System::Void Play_Click(System::Object^ sender, System::EventArgs^ e) {
		music->Load();
		music->Play();
	}
};
}
