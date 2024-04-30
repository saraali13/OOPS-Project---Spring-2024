#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Media;


namespace Music_Player {

	/// <summary>
	/// Summary for Music_Player
	/// </summary>
	public ref class Music_Player : public System::Windows::Forms::UserControl
	{
	public:
		Music_Player(void)
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
		~Music_Player()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ PPbutton;
	protected:
	public: System::Windows::Forms::Label^ song_name;
	public: System::Windows::Forms::ListView^ song_list;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	public: String^ path = "";
	public: array <String^>^ path_arr = nullptr;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	public:
	private: System::Windows::Forms::Panel^ panel1;

	public:

	public:

	public:
	public:

	public:

	public:

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
			this->PPbutton = (gcnew System::Windows::Forms::Button());
			this->song_name = (gcnew System::Windows::Forms::Label());
			this->song_list = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// PPbutton
			// 
			this->PPbutton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PPbutton->Location = System::Drawing::Point(217, 11);
			this->PPbutton->Name = L"PPbutton";
			this->PPbutton->Size = System::Drawing::Size(129, 43);
			this->PPbutton->TabIndex = 0;
			this->PPbutton->Text = L"Play";
			this->PPbutton->UseVisualStyleBackColor = true;
			this->PPbutton->Click += gcnew System::EventHandler(this, &Music_Player::PPbutton_Click);
			// 
			// song_name
			// 
			this->song_name->AutoEllipsis = true;
			this->song_name->Dock = System::Windows::Forms::DockStyle::Top;
			this->song_name->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->song_name->ForeColor = System::Drawing::Color::Black;
			this->song_name->Location = System::Drawing::Point(3, 0);
			this->song_name->Name = L"song_name";
			this->song_name->Size = System::Drawing::Size(564, 38);
			this->song_name->TabIndex = 1;
			this->song_name->Text = L"Music Player";
			this->song_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// song_list
			// 
			this->song_list->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->song_list->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->columnHeader1 });
			this->song_list->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->song_list->ForeColor = System::Drawing::Color::White;
			this->song_list->FullRowSelect = true;
			this->song_list->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->song_list->HideSelection = false;
			this->song_list->Location = System::Drawing::Point(3, 114);
			this->song_list->Name = L"song_list";
			this->song_list->Size = System::Drawing::Size(564, 218);
			this->song_list->TabIndex = 2;
			this->song_list->UseCompatibleStateImageBehavior = false;
			this->song_list->View = System::Windows::Forms::View::Details;
			this->song_list->SelectedIndexChanged += gcnew System::EventHandler(this, &Music_Player::song_list_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Songs";
			this->columnHeader1->Width = 378;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->song_name);
			this->flowLayoutPanel1->Controls->Add(this->panel1);
			this->flowLayoutPanel1->Controls->Add(this->song_list);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 140);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(564, 332);
			this->flowLayoutPanel1->TabIndex = 3;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->PPbutton);
			this->panel1->Location = System::Drawing::Point(3, 41);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(573, 67);
			this->panel1->TabIndex = 2;
			// 
			// Music_Player
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Gray;
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"Music_Player";
			this->Size = System::Drawing::Size(564, 472);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		SoundPlayer^ music = gcnew SoundPlayer;
	private: System::Void PPbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (PPbutton->Text == "Play" && path != "") {
			music->SoundLocation = path;
			music->Load();
			music->Play();
			PPbutton->Text = "Stop";
		}
		else if (PPbutton->Text == "Stop") {
			music->Stop();
			PPbutton->Text = "Play";
		}
	}
private: System::Void song_list_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (song_list->SelectedItems->Count == 1) {
		for each (ListViewItem ^ item in song_list->SelectedItems)
		{
			song_name->Text = item->Text;
			path = item->SubItems[1]->Text;
		}
	}
}
};
}
