#pragma once

# include <vcclr.h>
String^ song_name(String^ filePath)
{
	// Convert System::String to const wchar_t*
	pin_ptr<const wchar_t> wch = PtrToStringChars(filePath);

	// Call Path::GetFileName to get the filename
	return gcnew String(System::IO::Path::GetFileName(gcnew String(wch)));
}



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
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::Label^ name;




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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->name = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Open
			// 
			this->Open->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Open->Location = System::Drawing::Point(12, 12);
			this->Open->Name = L"Open";
			this->Open->Size = System::Drawing::Size(99, 35);
			this->Open->TabIndex = 0;
			this->Open->Text = L"Open";
			this->Open->UseVisualStyleBackColor = true;
			this->Open->Click += gcnew System::EventHandler(this, &Form1::Open_Click);
			// 
			// Play
			// 
			this->Play->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Play->Location = System::Drawing::Point(255, 12);
			this->Play->Name = L"Play";
			this->Play->Size = System::Drawing::Size(156, 57);
			this->Play->TabIndex = 1;
			this->Play->Text = L"Play";
			this->Play->UseVisualStyleBackColor = true;
			this->Play->Visible = false;
			this->Play->Click += gcnew System::EventHandler(this, &Form1::Play_Click);
			// 
			// ofd
			// 
			this->ofd->FileName = L"sound";
			this->ofd->Filter = L"WAV files (*.wav)|*.wav|All files (*.*)|*.*";
			this->ofd->Multiselect = true;
			// 
			// listView1
			// 
			this->listView1->Activation = System::Windows::Forms::ItemActivation::TwoClick;
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->columnHeader1 });
			this->listView1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView1->ForeColor = System::Drawing::Color::White;
			this->listView1->FullRowSelect = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(0, 131);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(422, 204);
			this->listView1->TabIndex = 2;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->Visible = false;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Songs";
			this->columnHeader1->Width = 414;
			// 
			// name
			// 
			this->name->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::Color::White;
			this->name->Location = System::Drawing::Point(12, 82);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(398, 37);
			this->name->TabIndex = 3;
			this->name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->name->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(422, 335);
			this->Controls->Add(this->name);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->Play);
			this->Controls->Add(this->Open);
			this->Name = L"Form1";
			this->Text = L"Music Player";
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ path = "";
		Int16 ind = 0;
		array <String^>^ path_arr;
		SoundPlayer^ music = gcnew SoundPlayer;
	private: System::Void Open_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK) {
			path = ofd->FileName;
			path = ofd->FileName;
			music->SoundLocation = path;
			path_arr = ofd->FileNames;

			
			
			int sz = path_arr->Length;
			for (int i = 0; i < sz; i++) {
				ListViewItem^ it = gcnew ListViewItem(song_name(path_arr[i]));
				it->SubItems->Add(path_arr[i]);
				listView1->Items->Add(it);
			}
			
			// Making things visible after an item is opened...!
			this->listView1->Visible = true;
			this->Play->Visible = true;
			this->name->Visible = true;
			name->Text = song_name(path);
			this->Open->Visible = false;
		}
		
	}
		   //music->Load();
		   //music->Play();
	private: System::Void Play_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Play->Text == "Play" && path != "") {
			music->SoundLocation = path;
			music->Load();
			music->Play();
			Play->Text = "Stop";
		}
		else if (Play->Text == "Stop") {
			music->Stop();
			Play->Text = "Play";
		}
	}
		   int i = 1;
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (listView1->SelectedItems->Count == 1) {
		for each (ListViewItem ^ item in listView1->SelectedItems)
		{
			name->Text = item->Text;
			path = item->SubItems[1]->Text;

		}
	}
}
};
}
