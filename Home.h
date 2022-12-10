#pragma once
#include "All_room.h"
#include "LivingRoom.h"
#include "Bedroom.h"
#include "Bathroom.h"
#include "Kitchen.h"

namespace SmartHome {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public: String^ checkUsername;
	public:
		Home(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}
		Home(String^ username)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			checkUsername = username;
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnKitchen;
	protected:

	protected:
	private: System::Windows::Forms::Panel^ panelChildForm;

	private: System::Windows::Forms::Panel^ panelSideMenu;
	private: System::Windows::Forms::Button^ btnBathroom;
	private: System::Windows::Forms::Button^ btnBedroom;


	private: System::Windows::Forms::Button^ btnLivingRoom;
	private: System::Windows::Forms::Button^ btnHome;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ labelTime;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->btnKitchen = (gcnew System::Windows::Forms::Button());
			this->panelChildForm = (gcnew System::Windows::Forms::Panel());
			this->panelSideMenu = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnBathroom = (gcnew System::Windows::Forms::Button());
			this->btnBedroom = (gcnew System::Windows::Forms::Button());
			this->btnLivingRoom = (gcnew System::Windows::Forms::Button());
			this->btnHome = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelTime = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panelSideMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnKitchen
			// 
			this->btnKitchen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->btnKitchen->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnKitchen->FlatAppearance->BorderColor = System::Drawing::Color::Gainsboro;
			this->btnKitchen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnKitchen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnKitchen->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnKitchen->Location = System::Drawing::Point(0, 450);
			this->btnKitchen->Margin = System::Windows::Forms::Padding(2);
			this->btnKitchen->Name = L"btnKitchen";
			this->btnKitchen->Size = System::Drawing::Size(320, 90);
			this->btnKitchen->TabIndex = 4;
			this->btnKitchen->Text = L"     Kitchen";
			this->btnKitchen->UseVisualStyleBackColor = false;
			this->btnKitchen->Click += gcnew System::EventHandler(this, &Home::btnKitchen_Click_1);
			// 
			// panelChildForm
			// 
			this->panelChildForm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->panelChildForm->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelChildForm->Location = System::Drawing::Point(322, 0);
			this->panelChildForm->Margin = System::Windows::Forms::Padding(2);
			this->panelChildForm->Name = L"panelChildForm";
			this->panelChildForm->Size = System::Drawing::Size(1101, 913);
			this->panelChildForm->TabIndex = 14;
			// 
			// panelSideMenu
			// 
			this->panelSideMenu->AutoScroll = true;
			this->panelSideMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->panelSideMenu->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelSideMenu->Controls->Add(this->pictureBox6);
			this->panelSideMenu->Controls->Add(this->pictureBox5);
			this->panelSideMenu->Controls->Add(this->pictureBox4);
			this->panelSideMenu->Controls->Add(this->pictureBox3);
			this->panelSideMenu->Controls->Add(this->pictureBox2);
			this->panelSideMenu->Controls->Add(this->btnKitchen);
			this->panelSideMenu->Controls->Add(this->btnBathroom);
			this->panelSideMenu->Controls->Add(this->btnBedroom);
			this->panelSideMenu->Controls->Add(this->btnLivingRoom);
			this->panelSideMenu->Controls->Add(this->btnHome);
			this->panelSideMenu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelSideMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelSideMenu->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panelSideMenu->Location = System::Drawing::Point(0, 0);
			this->panelSideMenu->Margin = System::Windows::Forms::Padding(2);
			this->panelSideMenu->Name = L"panelSideMenu";
			this->panelSideMenu->Size = System::Drawing::Size(322, 913);
			this->panelSideMenu->TabIndex = 12;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(31, 47);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(85, 76);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 9;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(18, 469);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(58, 47);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 8;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(18, 383);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(58, 47);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(18, 290);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(58, 47);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 196);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(58, 47);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// btnBathroom
			// 
			this->btnBathroom->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnBathroom->FlatAppearance->BorderColor = System::Drawing::Color::Gainsboro;
			this->btnBathroom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBathroom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnBathroom->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnBathroom->Location = System::Drawing::Point(0, 360);
			this->btnBathroom->Margin = System::Windows::Forms::Padding(2);
			this->btnBathroom->Name = L"btnBathroom";
			this->btnBathroom->Size = System::Drawing::Size(320, 90);
			this->btnBathroom->TabIndex = 3;
			this->btnBathroom->Text = L"     Bathroom";
			this->btnBathroom->UseVisualStyleBackColor = true;
			this->btnBathroom->Click += gcnew System::EventHandler(this, &Home::btnBathroom_Click);
			// 
			// btnBedroom
			// 
			this->btnBedroom->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnBedroom->FlatAppearance->BorderColor = System::Drawing::Color::Gainsboro;
			this->btnBedroom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBedroom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnBedroom->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnBedroom->Location = System::Drawing::Point(0, 270);
			this->btnBedroom->Margin = System::Windows::Forms::Padding(2);
			this->btnBedroom->Name = L"btnBedroom";
			this->btnBedroom->Size = System::Drawing::Size(320, 90);
			this->btnBedroom->TabIndex = 2;
			this->btnBedroom->Text = L"     Bedroom";
			this->btnBedroom->UseVisualStyleBackColor = true;
			this->btnBedroom->Click += gcnew System::EventHandler(this, &Home::btnKitchen_Click);
			// 
			// btnLivingRoom
			// 
			this->btnLivingRoom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->btnLivingRoom->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnLivingRoom->FlatAppearance->BorderColor = System::Drawing::Color::Gainsboro;
			this->btnLivingRoom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLivingRoom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnLivingRoom->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnLivingRoom->Location = System::Drawing::Point(0, 180);
			this->btnLivingRoom->Margin = System::Windows::Forms::Padding(2);
			this->btnLivingRoom->Name = L"btnLivingRoom";
			this->btnLivingRoom->Size = System::Drawing::Size(320, 90);
			this->btnLivingRoom->TabIndex = 1;
			this->btnLivingRoom->Text = L"     Living Room";
			this->btnLivingRoom->UseVisualStyleBackColor = false;
			this->btnLivingRoom->Click += gcnew System::EventHandler(this, &Home::btnLivingRoom_Click);
			// 
			// btnHome
			// 
			this->btnHome->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnHome->FlatAppearance->BorderColor = System::Drawing::Color::Gainsboro;
			this->btnHome->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->btnHome->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnHome->Location = System::Drawing::Point(0, 0);
			this->btnHome->Margin = System::Windows::Forms::Padding(2);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(320, 180);
			this->btnHome->TabIndex = 0;
			this->btnHome->Text = L"      Home";
			this->btnHome->UseVisualStyleBackColor = true;
			this->btnHome->Click += gcnew System::EventHandler(this, &Home::btnHome_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->labelTime);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 913);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1423, 70);
			this->panel1->TabIndex = 13;
			// 
			// labelTime
			// 
			this->labelTime->Dock = System::Windows::Forms::DockStyle::Right;
			this->labelTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->labelTime->ForeColor = System::Drawing::Color::Gainsboro;
			this->labelTime->Location = System::Drawing::Point(1051, 0);
			this->labelTime->Name = L"labelTime";
			this->labelTime->Size = System::Drawing::Size(370, 68);
			this->labelTime->TabIndex = 6;
			this->labelTime->Text = L"label";
			this->labelTime->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(57, 68);
			this->panel2->TabIndex = 5;
			this->panel2->Click += gcnew System::EventHandler(this, &Home::Logout);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->ForeColor = System::Drawing::Color::Gainsboro;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Logout";
			this->label1->Click += gcnew System::EventHandler(this, &Home::Logout);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(19, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(36, 27);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Home::Logout);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Home::timer1_Tick);
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1423, 983);
			this->Controls->Add(this->panelChildForm);
			this->Controls->Add(this->panelSideMenu);
			this->Controls->Add(this->panel1);
			this->Name = L"Home";
			this->Text = L"Home";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Home::Close);
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			this->panelSideMenu->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	template <class T>
	void Active(T FormActive) {
		if (this->panelChildForm->Controls->Count > 0)
			this->panelChildForm->Controls->RemoveAt(0);
		FormActive->TopLevel = false;
		FormActive->Dock = DockStyle::Fill;
		this->panelChildForm->Controls->Add(FormActive);
		this->panelChildForm->Tag = FormActive;
		FormActive->Show();
	}
	private: System::Void btnLivingRoom_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Active(gcnew SmartHome::LivingRoom);
		btnLivingRoom->BackColor = System::Drawing::Color::FromArgb(61, 27, 70);
		btnBedroom->BackColor = System::Drawing::Color::FromArgb(11, 7, 17);
		btnKitchen->BackColor = System::Drawing::Color::FromArgb(11, 7, 17);
		btnBathroom->BackColor = System::Drawing::Color::FromArgb(11, 7, 17);
	}
	private: System::Void btnKitchen_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Active(gcnew SmartHome::Bedroom);
		btnBedroom->BackColor = System::Drawing::Color::FromArgb(61, 27, 70);
		btnLivingRoom->BackColor = System::Drawing::Color::FromArgb(11, 7, 17);
		btnKitchen->BackColor = System::Drawing::Color::FromArgb(11, 7, 17);
		btnBathroom->BackColor = System::Drawing::Color::FromArgb(11, 7, 17);
	}
	private: System::Void btnBathroom_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Active(gcnew SmartHome::Bathroom);
		btnBedroom->BackColor = System::Drawing::Color::FromArgb(11, 7, 17);
		btnLivingRoom->BackColor = System::Drawing::Color::FromArgb(11, 7, 17);
		btnKitchen->BackColor = System::Drawing::Color::FromArgb(11, 7, 17);
		btnBathroom->BackColor = System::Drawing::Color::FromArgb(61, 27, 70);
	}
	private: System::Void btnKitchen_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Active(gcnew SmartHome::Kitchen);
		btnBedroom->BackColor = System::Drawing::Color::FromArgb(11, 7, 17);
		btnLivingRoom->BackColor = System::Drawing::Color::FromArgb(11, 7, 17);
		btnKitchen->BackColor = System::Drawing::Color::FromArgb(61, 27, 70);
		btnBathroom->BackColor = System::Drawing::Color::FromArgb(11, 7, 17);
	}
	public: bool backtologin = false;
	private: System::Void Logout(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult logout = MessageBox::Show("Are you sure to Logout?", "Logout", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
		if (System::Windows::Forms::DialogResult::OK == logout)
		{
			backtologin = true;
			this->Hide();
		}
	}
	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
		btnHome->PerformClick();

	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		labelTime->Text = System::Convert::ToString(DateTime::Now);
		pictureBox2->BackColor = btnLivingRoom->BackColor;
		pictureBox3->BackColor = btnBedroom->BackColor;
		pictureBox4->BackColor = btnBathroom->BackColor;
		pictureBox5->BackColor = btnKitchen->BackColor;
	}


	private: System::Void Close(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		System::Windows::Forms::Application::Exit();
	}
	private: System::Void btnHome_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Active(gcnew SmartHome::All_room(checkUsername));
		btnBedroom->BackColor = System::Drawing::Color::FromArgb(11, 7, 17);
		btnLivingRoom->BackColor = System::Drawing::Color::FromArgb(11, 7, 17);
		btnKitchen->BackColor = System::Drawing::Color::FromArgb(11, 7, 17);
		btnBathroom->BackColor = System::Drawing::Color::FromArgb(11, 7, 17);
	}

};
}
