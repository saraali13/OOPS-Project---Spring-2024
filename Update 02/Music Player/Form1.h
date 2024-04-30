#pragma once

# include <vcclr.h>
String^ song_name(String^ filePath)
{
	// Convert System::String to const wchar_t*
	pin_ptr<const wchar_t> wch = PtrToStringChars(filePath);

	// Call Path::GetFileName to get the filename
	return gcnew String(System::IO::Path::GetFileName(gcnew String(wch)));
}


# include "Music_Player.h"
# include "Open.h"

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


	private: System::Windows::Forms::OpenFileDialog^ ofd;



	private: System::Windows::Forms::Panel^ menu;
	private: System::Windows::Forms::Button^ music_player;
	private: Music_Player::Music_Player^ music_player_win = gcnew  Music_Player::Music_Player();
	private: Music_Player::Open^ open_win = gcnew Music_Player::Open();
	private: System::Windows::Forms::Button^ expand;

	private: System::Windows::Forms::Timer^ menu_trans;
	private: System::Windows::Forms::Button^ open_button;
	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::IContainer^ components;









	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->ofd = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menu = (gcnew System::Windows::Forms::Panel());
			this->expand = (gcnew System::Windows::Forms::Button());
			this->music_player = (gcnew System::Windows::Forms::Button());
			this->open_button = (gcnew System::Windows::Forms::Button());
			this->menu_trans = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menu->SuspendLayout();
			this->SuspendLayout();
			// 
			// ofd
			// 
			this->ofd->FileName = L"sound";
			this->ofd->Filter = L"WAV files (*.wav)|*.wav|All files (*.*)|*.*";
			this->ofd->Multiselect = true;
			// 
			// menu
			// 
			this->menu->Controls->Add(this->expand);
			this->menu->Controls->Add(this->music_player);
			this->menu->Controls->Add(this->open_button);
			this->menu->Dock = System::Windows::Forms::DockStyle::Left;
			this->menu->Location = System::Drawing::Point(0, 0);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(30, 433);
			this->menu->TabIndex = 4;
			// 
			// expand
			// 
			this->expand->Dock = System::Windows::Forms::DockStyle::Right;
			this->expand->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->expand->Location = System::Drawing::Point(0, 0);
			this->expand->Name = L"expand";
			this->expand->Size = System::Drawing::Size(30, 433);
			this->expand->TabIndex = 1;
			this->expand->Text = L">";
			this->expand->UseVisualStyleBackColor = true;
			this->expand->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// music_player
			// 
			this->music_player->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->music_player->Location = System::Drawing::Point(0, 109);
			this->music_player->Name = L"music_player";
			this->music_player->Size = System::Drawing::Size(141, 35);
			this->music_player->TabIndex = 0;
			this->music_player->Text = L"Music Player";
			this->music_player->UseVisualStyleBackColor = true;
			this->music_player->Click += gcnew System::EventHandler(this, &Form1::music_player_Click);
			// 
			// open_button
			// 
			this->open_button->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->open_button->Location = System::Drawing::Point(0, 68);
			this->open_button->Name = L"open_button";
			this->open_button->Size = System::Drawing::Size(141, 35);
			this->open_button->TabIndex = 2;
			this->open_button->Text = L"Open/Add";
			this->open_button->UseVisualStyleBackColor = true;
			this->open_button->Click += gcnew System::EventHandler(this, &Form1::open_button_Click);
			// 
			// menu_trans
			// 
			this->menu_trans->Interval = 10;
			this->menu_trans->Tick += gcnew System::EventHandler(this, &Form1::menu_trans_Tick);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(525, 433);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Music Player";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(548, 433);
			this->Controls->Add(this->menu);
			this->Controls->Add(this->label1);
			this->IsMdiContainer = true;
			this->Name = L"Form1";
			this->Text = L"Music Player";
			this->menu->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ path = "";

		array <String^>^ path_arr = nullptr;

private: System::Void music_player_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	
	//path_arr = open_win->path_arr;
	



	music_player_win->Size = this->Size;
	music_player_win->Dock = DockStyle::Fill;
	music_player_win->Parent = this;
	music_player_win->BringToFront();
	music_player_win->Show();

	

	if (open_win->path_arr != nullptr)
	{
		music_player_win->path = open_win->path;
		music_player_win->path_arr = open_win->path_arr;
		path_arr = open_win->path_arr;
		int sz = path_arr->Length;
		for (int i = 0; i < sz; i++) {
			ListViewItem^ it = gcnew ListViewItem(song_name(path_arr[i]));
			it->SubItems->Add(path_arr[i]);

			bool repeat = true;
			for (int j = 0; j < music_player_win->song_list->Items->Count; j++) {
				if (it->Text == music_player_win->song_list->Items[j]->Text) {
					repeat = false;
				}
			}
			if (repeat) {
				music_player_win->song_list->Items->Add(it);
			}
		}
	}
	
}




	   bool isExpand = false;
private: System::Void menu_trans_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (!isExpand) {
		if (menu->Width < 170) {
			menu->Width += 10;
		}
		else {
			menu_trans->Stop();
			expand->Text = "<";
			isExpand = true;
		}
	}
	if (isExpand) {
		if (menu->Width > 30) {
			menu->Width -= 10;
		}
		else {
			menu_trans->Stop();
			expand->Text = ">";	
			isExpand = false;
		}
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	menu_trans->Start();
}



private: System::Void open_button_Click(System::Object^ sender, System::EventArgs^ e) {
	open_win->Size = this->Size;
	open_win->Dock = DockStyle::Fill;
	open_win->Parent = this;
	open_win->BringToFront();
	open_win->Show();
}
};
}



//  Size of menu (176, 433)