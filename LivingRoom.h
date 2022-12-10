#pragma once
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace std;
namespace SmartHome {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Data::SQLite;

	/// <summary>
	/// Summary for LivingRoom
	/// </summary>
	public ref class LivingRoom : public System::Windows::Forms::Form
	{
	public:
		LivingRoom(void)
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
		~LivingRoom()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:








	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ txtAC;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ ACLivingRoom_off;
	private: System::Windows::Forms::Button^ ACLivingRoom_on;
	private: System::Windows::Forms::PictureBox^ pictureAC;
	private: System::Windows::Forms::TrackBar^ ACLivingRoom;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label4;




















	private: System::Windows::Forms::Timer^ timer1;

	private: System::Windows::Forms::Label^ txt_temp;
	private: System::Windows::Forms::Label^ txt_humi;








	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ LightLivingRoom_off;
	private: System::Windows::Forms::Button^ LightLivingRoom_on;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label3;








private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::TextBox^ txtTV;
private: System::Windows::Forms::Label^ Volumn;
private: System::Windows::Forms::Button^ TVLivingRoom_off;
private: System::Windows::Forms::Button^ TVLivingRoom_on;
private: System::Windows::Forms::PictureBox^ pictureTV;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TrackBar^ TVLivingRoom;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::TextBox^ txtFan;
private: System::Windows::Forms::Label^ Speed;
private: System::Windows::Forms::Button^ FanLivingRoom_off;
private: System::Windows::Forms::Button^ FanLivingRoom_on;
private: System::Windows::Forms::TrackBar^ Fan_LivingRoom;
private: System::Windows::Forms::PictureBox^ pictureFan;
private: System::Windows::Forms::Label^ Fan;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LivingRoom::typeid));
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->txtAC = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ACLivingRoom_off = (gcnew System::Windows::Forms::Button());
			this->ACLivingRoom_on = (gcnew System::Windows::Forms::Button());
			this->pictureAC = (gcnew System::Windows::Forms::PictureBox());
			this->ACLivingRoom = (gcnew System::Windows::Forms::TrackBar());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->txt_temp = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->txt_humi = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LightLivingRoom_off = (gcnew System::Windows::Forms::Button());
			this->LightLivingRoom_on = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->Fan = (gcnew System::Windows::Forms::Label());
			this->pictureFan = (gcnew System::Windows::Forms::PictureBox());
			this->Fan_LivingRoom = (gcnew System::Windows::Forms::TrackBar());
			this->FanLivingRoom_on = (gcnew System::Windows::Forms::Button());
			this->FanLivingRoom_off = (gcnew System::Windows::Forms::Button());
			this->Speed = (gcnew System::Windows::Forms::Label());
			this->txtFan = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->TVLivingRoom = (gcnew System::Windows::Forms::TrackBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureTV = (gcnew System::Windows::Forms::PictureBox());
			this->TVLivingRoom_on = (gcnew System::Windows::Forms::Button());
			this->TVLivingRoom_off = (gcnew System::Windows::Forms::Button());
			this->Volumn = (gcnew System::Windows::Forms::Label());
			this->txtTV = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureAC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ACLivingRoom))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFan))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Fan_LivingRoom))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TVLivingRoom))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTV))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label8->ForeColor = System::Drawing::Color::Gainsboro;
			this->label8->Location = System::Drawing::Point(12, 10);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 29);
			this->label8->TabIndex = 1;
			this->label8->Text = L"AC";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label6->ForeColor = System::Drawing::Color::Gainsboro;
			this->label6->Location = System::Drawing::Point(12, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(182, 36);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Temperature";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label5->ForeColor = System::Drawing::Color::Gainsboro;
			this->label5->Location = System::Drawing::Point(42, 19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 36);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Humidity";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(37, 11);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(81, 70);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->txtAC);
			this->panel7->Controls->Add(this->label7);
			this->panel7->Controls->Add(this->ACLivingRoom_off);
			this->panel7->Controls->Add(this->ACLivingRoom_on);
			this->panel7->Controls->Add(this->pictureAC);
			this->panel7->Controls->Add(this->label8);
			this->panel7->Controls->Add(this->ACLivingRoom);
			this->panel7->Location = System::Drawing::Point(28, 329);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(333, 300);
			this->panel7->TabIndex = 19;
			// 
			// txtAC
			// 
			this->txtAC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->txtAC->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtAC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtAC->ForeColor = System::Drawing::Color::Gainsboro;
			this->txtAC->Location = System::Drawing::Point(74, 244);
			this->txtAC->Name = L"txtAC";
			this->txtAC->Size = System::Drawing::Size(29, 23);
			this->txtAC->TabIndex = 7;
			this->txtAC->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label7->ForeColor = System::Drawing::Color::Gainsboro;
			this->label7->Location = System::Drawing::Point(3, 243);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 24);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Temp:";
			// 
			// ACLivingRoom_off
			// 
			this->ACLivingRoom_off->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ACLivingRoom_off->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->ACLivingRoom_off->ForeColor = System::Drawing::Color::Gainsboro;
			this->ACLivingRoom_off->Location = System::Drawing::Point(212, 187);
			this->ACLivingRoom_off->Name = L"ACLivingRoom_off";
			this->ACLivingRoom_off->Size = System::Drawing::Size(75, 35);
			this->ACLivingRoom_off->TabIndex = 4;
			this->ACLivingRoom_off->Text = L"OFF";
			this->ACLivingRoom_off->UseVisualStyleBackColor = false;
			this->ACLivingRoom_off->Click += gcnew System::EventHandler(this, &LivingRoom::ACLivingRoom_off_Click);
			// 
			// ACLivingRoom_on
			// 
			this->ACLivingRoom_on->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ACLivingRoom_on->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->ACLivingRoom_on->ForeColor = System::Drawing::Color::Gainsboro;
			this->ACLivingRoom_on->Location = System::Drawing::Point(94, 187);
			this->ACLivingRoom_on->Name = L"ACLivingRoom_on";
			this->ACLivingRoom_on->Size = System::Drawing::Size(75, 35);
			this->ACLivingRoom_on->TabIndex = 3;
			this->ACLivingRoom_on->Text = L"ON";
			this->ACLivingRoom_on->UseVisualStyleBackColor = false;
			this->ACLivingRoom_on->Click += gcnew System::EventHandler(this, &LivingRoom::ACLivingRoom_on_Click);
			// 
			// pictureAC
			// 
			this->pictureAC->Location = System::Drawing::Point(94, 10);
			this->pictureAC->Name = L"pictureAC";
			this->pictureAC->Size = System::Drawing::Size(193, 156);
			this->pictureAC->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureAC->TabIndex = 2;
			this->pictureAC->TabStop = false;
			// 
			// ACLivingRoom
			// 
			this->ACLivingRoom->Location = System::Drawing::Point(104, 241);
			this->ACLivingRoom->Maximum = 30;
			this->ACLivingRoom->Minimum = 16;
			this->ACLivingRoom->Name = L"ACLivingRoom";
			this->ACLivingRoom->Size = System::Drawing::Size(209, 56);
			this->ACLivingRoom->TabIndex = 0;
			this->ACLivingRoom->Value = 16;
			this->ACLivingRoom->Scroll += gcnew System::EventHandler(this, &LivingRoom::ACLivingRoom_Scroll);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1101, 134);
			this->panel4->TabIndex = 18;
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->txt_temp);
			this->panel6->Controls->Add(this->label6);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel6->Location = System::Drawing::Point(641, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(229, 132);
			this->panel6->TabIndex = 2;
			// 
			// txt_temp
			// 
			this->txt_temp->AutoSize = true;
			this->txt_temp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23));
			this->txt_temp->ForeColor = System::Drawing::Color::Gainsboro;
			this->txt_temp->Location = System::Drawing::Point(54, 72);
			this->txt_temp->Name = L"txt_temp";
			this->txt_temp->Size = System::Drawing::Size(108, 44);
			this->txt_temp->TabIndex = 1;
			this->txt_temp->Text = L"temp";
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->txt_humi);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel5->Location = System::Drawing::Point(870, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(229, 132);
			this->panel5->TabIndex = 1;
			// 
			// txt_humi
			// 
			this->txt_humi->AutoSize = true;
			this->txt_humi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23));
			this->txt_humi->ForeColor = System::Drawing::Color::Gainsboro;
			this->txt_humi->Location = System::Drawing::Point(48, 72);
			this->txt_humi->Name = L"txt_humi";
			this->txt_humi->Size = System::Drawing::Size(106, 44);
			this->txt_humi->TabIndex = 2;
			this->txt_humi->Text = L"humi";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23));
			this->label4->ForeColor = System::Drawing::Color::Gainsboro;
			this->label4->Location = System::Drawing::Point(144, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(239, 44);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Living Room";
			// 
			// timer1
			// 
			this->timer1->Interval = 400;
			this->timer1->Tick += gcnew System::EventHandler(this, &LivingRoom::timer1_Tick);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->groupBox1);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->LightLivingRoom_off);
			this->panel3->Controls->Add(this->LightLivingRoom_on);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(28, 14);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(333, 300);
			this->panel3->TabIndex = 17;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox1->Location = System::Drawing::Point(76, 190);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(250, 107);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->radioButton6->Location = System::Drawing::Point(179, 64);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(63, 29);
			this->radioButton6->TabIndex = 11;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"      ";
			this->radioButton6->UseVisualStyleBackColor = false;
			this->radioButton6->Click += gcnew System::EventHandler(this, &LivingRoom::Change_color);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::White;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->radioButton1->Location = System::Drawing::Point(7, 21);
			this->radioButton1->Margin = System::Windows::Forms::Padding(0);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(63, 29);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"      ";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->Click += gcnew System::EventHandler(this, &LivingRoom::Change_color);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->radioButton5->CausesValidation = false;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->radioButton5->Location = System::Drawing::Point(94, 64);
			this->radioButton5->Margin = System::Windows::Forms::Padding(0);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(63, 29);
			this->radioButton5->TabIndex = 10;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"      ";
			this->radioButton5->UseVisualStyleBackColor = false;
			this->radioButton5->Click += gcnew System::EventHandler(this, &LivingRoom::Change_color);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->radioButton2->Location = System::Drawing::Point(94, 21);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(63, 29);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"      ";
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->Click += gcnew System::EventHandler(this, &LivingRoom::Change_color);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->radioButton4->Location = System::Drawing::Point(7, 64);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(63, 29);
			this->radioButton4->TabIndex = 9;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"      ";
			this->radioButton4->UseVisualStyleBackColor = false;
			this->radioButton4->Click += gcnew System::EventHandler(this, &LivingRoom::Change_color);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)));
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->radioButton3->Location = System::Drawing::Point(179, 21);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(63, 29);
			this->radioButton3->TabIndex = 8;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"      ";
			this->radioButton3->UseVisualStyleBackColor = false;
			this->radioButton3->Click += gcnew System::EventHandler(this, &LivingRoom::Change_color);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label1->ForeColor = System::Drawing::Color::Gainsboro;
			this->label1->Location = System::Drawing::Point(8, 199);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 24);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Color";
			// 
			// LightLivingRoom_off
			// 
			this->LightLivingRoom_off->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->LightLivingRoom_off->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->LightLivingRoom_off->ForeColor = System::Drawing::Color::Gainsboro;
			this->LightLivingRoom_off->Location = System::Drawing::Point(177, 142);
			this->LightLivingRoom_off->Name = L"LightLivingRoom_off";
			this->LightLivingRoom_off->Size = System::Drawing::Size(75, 35);
			this->LightLivingRoom_off->TabIndex = 4;
			this->LightLivingRoom_off->Text = L"OFF";
			this->LightLivingRoom_off->UseVisualStyleBackColor = false;
			this->LightLivingRoom_off->Click += gcnew System::EventHandler(this, &LivingRoom::LightLivingRoom_off_Click);
			// 
			// LightLivingRoom_on
			// 
			this->LightLivingRoom_on->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->LightLivingRoom_on->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->LightLivingRoom_on->ForeColor = System::Drawing::Color::Gainsboro;
			this->LightLivingRoom_on->Location = System::Drawing::Point(76, 142);
			this->LightLivingRoom_on->Name = L"LightLivingRoom_on";
			this->LightLivingRoom_on->Size = System::Drawing::Size(75, 35);
			this->LightLivingRoom_on->TabIndex = 3;
			this->LightLivingRoom_on->Text = L"ON";
			this->LightLivingRoom_on->UseVisualStyleBackColor = false;
			this->LightLivingRoom_on->Click += gcnew System::EventHandler(this, &LivingRoom::LightLivingRoom_on_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(104, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(129, 130);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label3->ForeColor = System::Drawing::Color::Gainsboro;
			this->label3->Location = System::Drawing::Point(7, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 29);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Light";
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->panel3);
			this->panel8->Controls->Add(this->panel2);
			this->panel8->Controls->Add(this->panel7);
			this->panel8->Controls->Add(this->panel1);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel8->Location = System::Drawing::Point(0, 134);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(1101, 779);
			this->panel8->TabIndex = 20;
			// 
			// Fan
			// 
			this->Fan->AutoSize = true;
			this->Fan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Fan->ForeColor = System::Drawing::Color::Gainsboro;
			this->Fan->Location = System::Drawing::Point(17, 12);
			this->Fan->Name = L"Fan";
			this->Fan->Size = System::Drawing::Size(56, 29);
			this->Fan->TabIndex = 1;
			this->Fan->Text = L"Fan";
			// 
			// pictureFan
			// 
			this->pictureFan->Location = System::Drawing::Point(96, 10);
			this->pictureFan->Name = L"pictureFan";
			this->pictureFan->Size = System::Drawing::Size(193, 156);
			this->pictureFan->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureFan->TabIndex = 2;
			this->pictureFan->TabStop = false;
			// 
			// Fan_LivingRoom
			// 
			this->Fan_LivingRoom->Location = System::Drawing::Point(119, 236);
			this->Fan_LivingRoom->Maximum = 9;
			this->Fan_LivingRoom->Name = L"Fan_LivingRoom";
			this->Fan_LivingRoom->Size = System::Drawing::Size(192, 56);
			this->Fan_LivingRoom->TabIndex = 0;
			this->Fan_LivingRoom->Scroll += gcnew System::EventHandler(this, &LivingRoom::Fan_LivingRoom_Scroll);
			// 
			// FanLivingRoom_on
			// 
			this->FanLivingRoom_on->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->FanLivingRoom_on->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->FanLivingRoom_on->ForeColor = System::Drawing::Color::Gainsboro;
			this->FanLivingRoom_on->Location = System::Drawing::Point(96, 185);
			this->FanLivingRoom_on->Name = L"FanLivingRoom_on";
			this->FanLivingRoom_on->Size = System::Drawing::Size(75, 35);
			this->FanLivingRoom_on->TabIndex = 3;
			this->FanLivingRoom_on->Text = L"ON";
			this->FanLivingRoom_on->UseVisualStyleBackColor = false;
			this->FanLivingRoom_on->Click += gcnew System::EventHandler(this, &LivingRoom::FanLivingRoom_on_Click);
			// 
			// FanLivingRoom_off
			// 
			this->FanLivingRoom_off->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->FanLivingRoom_off->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->FanLivingRoom_off->ForeColor = System::Drawing::Color::Gainsboro;
			this->FanLivingRoom_off->Location = System::Drawing::Point(214, 185);
			this->FanLivingRoom_off->Name = L"FanLivingRoom_off";
			this->FanLivingRoom_off->Size = System::Drawing::Size(75, 35);
			this->FanLivingRoom_off->TabIndex = 4;
			this->FanLivingRoom_off->Text = L"OFF";
			this->FanLivingRoom_off->UseVisualStyleBackColor = false;
			this->FanLivingRoom_off->Click += gcnew System::EventHandler(this, &LivingRoom::FanLivingRoom_off_Click);
			// 
			// Speed
			// 
			this->Speed->AutoSize = true;
			this->Speed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Speed->ForeColor = System::Drawing::Color::Gainsboro;
			this->Speed->Location = System::Drawing::Point(18, 238);
			this->Speed->Name = L"Speed";
			this->Speed->Size = System::Drawing::Size(71, 24);
			this->Speed->TabIndex = 5;
			this->Speed->Text = L"Speed:";
			// 
			// txtFan
			// 
			this->txtFan->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->txtFan->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtFan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtFan->ForeColor = System::Drawing::Color::Gainsboro;
			this->txtFan->Location = System::Drawing::Point(95, 236);
			this->txtFan->Name = L"txtFan";
			this->txtFan->Size = System::Drawing::Size(30, 23);
			this->txtFan->TabIndex = 6;
			this->txtFan->Text = L"0";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->txtFan);
			this->panel1->Controls->Add(this->Speed);
			this->panel1->Controls->Add(this->FanLivingRoom_off);
			this->panel1->Controls->Add(this->FanLivingRoom_on);
			this->panel1->Controls->Add(this->Fan_LivingRoom);
			this->panel1->Controls->Add(this->pictureFan);
			this->panel1->Controls->Add(this->Fan);
			this->panel1->Location = System::Drawing::Point(378, 14);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(333, 300);
			this->panel1->TabIndex = 15;
			// 
			// TVLivingRoom
			// 
			this->TVLivingRoom->Location = System::Drawing::Point(114, 236);
			this->TVLivingRoom->Maximum = 50;
			this->TVLivingRoom->Name = L"TVLivingRoom";
			this->TVLivingRoom->Size = System::Drawing::Size(214, 56);
			this->TVLivingRoom->TabIndex = 0;
			this->TVLivingRoom->Scroll += gcnew System::EventHandler(this, &LivingRoom::TVLivingRoom_Scroll);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->ForeColor = System::Drawing::Color::Gainsboro;
			this->label2->Location = System::Drawing::Point(12, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"TV";
			// 
			// pictureTV
			// 
			this->pictureTV->Location = System::Drawing::Point(85, 12);
			this->pictureTV->Name = L"pictureTV";
			this->pictureTV->Size = System::Drawing::Size(193, 156);
			this->pictureTV->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureTV->TabIndex = 2;
			this->pictureTV->TabStop = false;
			// 
			// TVLivingRoom_on
			// 
			this->TVLivingRoom_on->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->TVLivingRoom_on->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->TVLivingRoom_on->ForeColor = System::Drawing::Color::Gainsboro;
			this->TVLivingRoom_on->Location = System::Drawing::Point(85, 185);
			this->TVLivingRoom_on->Name = L"TVLivingRoom_on";
			this->TVLivingRoom_on->Size = System::Drawing::Size(75, 35);
			this->TVLivingRoom_on->TabIndex = 3;
			this->TVLivingRoom_on->Text = L"ON";
			this->TVLivingRoom_on->UseVisualStyleBackColor = false;
			this->TVLivingRoom_on->Click += gcnew System::EventHandler(this, &LivingRoom::TVLivingRoom_on_Click);
			// 
			// TVLivingRoom_off
			// 
			this->TVLivingRoom_off->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->TVLivingRoom_off->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->TVLivingRoom_off->ForeColor = System::Drawing::Color::Gainsboro;
			this->TVLivingRoom_off->Location = System::Drawing::Point(212, 185);
			this->TVLivingRoom_off->Name = L"TVLivingRoom_off";
			this->TVLivingRoom_off->Size = System::Drawing::Size(75, 35);
			this->TVLivingRoom_off->TabIndex = 4;
			this->TVLivingRoom_off->Text = L"OFF";
			this->TVLivingRoom_off->UseVisualStyleBackColor = false;
			this->TVLivingRoom_off->Click += gcnew System::EventHandler(this, &LivingRoom::TVLivingRoom_off_Click);
			// 
			// Volumn
			// 
			this->Volumn->AutoSize = true;
			this->Volumn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Volumn->ForeColor = System::Drawing::Color::Gainsboro;
			this->Volumn->Location = System::Drawing::Point(3, 238);
			this->Volumn->Name = L"Volumn";
			this->Volumn->Size = System::Drawing::Size(81, 24);
			this->Volumn->TabIndex = 5;
			this->Volumn->Text = L"Volumn:";
			// 
			// txtTV
			// 
			this->txtTV->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->txtTV->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtTV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtTV->ForeColor = System::Drawing::Color::Gainsboro;
			this->txtTV->Location = System::Drawing::Point(85, 239);
			this->txtTV->Name = L"txtTV";
			this->txtTV->Size = System::Drawing::Size(29, 23);
			this->txtTV->TabIndex = 7;
			this->txtTV->Text = L"0";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->txtTV);
			this->panel2->Controls->Add(this->Volumn);
			this->panel2->Controls->Add(this->TVLivingRoom_off);
			this->panel2->Controls->Add(this->TVLivingRoom_on);
			this->panel2->Controls->Add(this->pictureTV);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->TVLivingRoom);
			this->panel2->Location = System::Drawing::Point(731, 14);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(333, 300);
			this->panel2->TabIndex = 16;
			// 
			// LivingRoom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(1101, 913);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel4);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LivingRoom";
			this->Text = L"LivingRoom";
			this->Load += gcnew System::EventHandler(this, &LivingRoom::LivingRoom_Load);
			this->Click += gcnew System::EventHandler(this, &LivingRoom::Change_color);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureAC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ACLivingRoom))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFan))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Fan_LivingRoom))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TVLivingRoom))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureTV))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	public: int state_light, state_fan, state_TV, state_AC;
	public: int r, g, b;
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
			string tam;
			fstream livingroom;
			livingroom.open("data\\LivingRoom.txt", (ios_base::in | ios_base::out));
			//Temperature & Humidity
			string t;
			string h;
			getline(livingroom, tam);
			livingroom.seekg(13, 1);
			getline(livingroom, t, ',');
			getline(livingroom, tam);
			getline(livingroom, tam);
			livingroom.seekg(10, 1);
			getline(livingroom, h, ',');
			txt_temp->Text = gcnew String(t.data()) + "°C";
			txt_humi->Text = gcnew String(h.data()) + "%";
			
			//Light
			string state_light;
			string color;
			getline(livingroom, tam);
			getline(livingroom, tam);
			livingroom.seekg(7, 1);
			getline(livingroom, state_light, ',');
			livingroom.seekg(1, 1);
			getline(livingroom, color, ',');
			
			if (state_light == "1")
			{
				LightLivingRoom_on->PerformClick();
				if (color == "w")
				{
					r = 255;
					g = 255;
					b = 255;
				}
				else if (color == "y")
				{
					r = 253;
					g = 240;
					b = 170;
				}
				else if (color == "g")
				{
					r = 174;
					g = 255;
					b = 215;
				}
				else if (color == "p")
				{
					r = 209;
					g = 189;
					b = 251;
				}
				else if (color == "r")
				{
					r = 250;
					g = 100;
					b = 100;
				}
				else if (color == "b")
				{
					r = 129;
					g = 198;
					b = 251;
				}
				pictureBox3->BackColor = System::Drawing::Color::FromArgb(r, g, b);

			}
			else if (state_light == "0")
			{
				LightLivingRoom_off->PerformClick();

			}
			
			//Fan
			string state_fan;
			string speed;
			getline(livingroom, tam);
			getline(livingroom, tam);
			livingroom.seekg(5, 1);
			getline(livingroom,state_fan, ',');
			livingroom.seekg(1, 1);
			getline(livingroom,speed, ',');
			int sp = std::stoi(speed);
			if (state_fan == "1")
			{
				FanLivingRoom_on->PerformClick();
				Fan_LivingRoom->Value = sp;
			}
			else if (state_fan == "0")
			{
				FanLivingRoom_off->PerformClick();
				Fan_LivingRoom->Value = 0;
			}
			txtFan->Text = Fan_LivingRoom->Value.ToString();

			//TV
			string state_tv;
			string volumn;
			getline(livingroom, tam);
			getline(livingroom, tam);
			livingroom.seekg(4, 1);
			getline(livingroom, state_tv, ',');
			livingroom.seekg(1, 1);
			getline(livingroom, volumn, ',');
			int vol = std::stoi(volumn);
			if (state_tv == "1")
			{
				TVLivingRoom_on->PerformClick();
				TVLivingRoom->Value = vol;
			}
			else if (state_tv == "0")
			{
				TVLivingRoom_off->PerformClick();
				TVLivingRoom->Value = 0;
			}
			txtTV->Text = TVLivingRoom->Value.ToString();

			//AC
			string state_AC;
			string temp;
			getline(livingroom, tam);
			getline(livingroom, tam);
			livingroom.seekg(4, 1);
			getline(livingroom, state_AC, ',');
			livingroom.seekg(1, 1);
			getline(livingroom, temp, ',');
			int tem = std::stoi(temp);
			if (state_AC == "1")
			{
				ACLivingRoom_on->PerformClick();
				ACLivingRoom->Value = tem;
			}
			else if (state_AC == "0")
			{
				ACLivingRoom_off->PerformClick();
			}
			txtAC->Text = ACLivingRoom->Value.ToString();

	}

	private: System::Void LightLivingRoom_on_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream livingroom;
		string tam;
		livingroom.open("data\\LivingRoom.txt", (ios_base::in | ios_base::out));
		for (int i = 0; i < 5; i++) {
			getline(livingroom, tam);
		}
		livingroom.seekg(7, 1);
		livingroom << "1";
		livingroom.close();
			
		LightLivingRoom_on->BackColor = System::Drawing::Color::Lime;
		LightLivingRoom_on->ForeColor = System::Drawing::Color::Black;
		LightLivingRoom_off->BackColor = System::Drawing::Color::FromArgb(30, 32, 45);
		LightLivingRoom_off->ForeColor = System::Drawing::Color::Gainsboro;
		pictureBox3->BackColor = System::Drawing::Color::FromArgb(r, g, b);
	}
	private: System::Void LightLivingRoom_off_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream livingroom;
		string tam;
		livingroom.open("data\\LivingRoom.txt", (ios_base::in | ios_base::out));
		for (int i = 0; i < 5; i++) {
			getline(livingroom, tam);
		}
		livingroom.seekg(7, 1);
		livingroom << "0";
		livingroom.close();

		LightLivingRoom_off->BackColor = System::Drawing::Color::Red;
		LightLivingRoom_off->ForeColor = System::Drawing::Color::Black;
		LightLivingRoom_on->BackColor = System::Drawing::Color::FromArgb(30, 32, 45);
		LightLivingRoom_on->ForeColor = System::Drawing::Color::Gainsboro;
		pictureBox3->BackColor = System::Drawing::Color::FromArgb(30, 32, 45);
	
	}
	

	private: System::Void Change_color(System::Object^ sender, System::EventArgs^ e) {
		fstream livingroom;
		string tam;
		livingroom.open("data\\LivingRoom.txt", (ios_base::in | ios_base::out));
		for (int i = 0; i < 5; i++) {
			getline(livingroom, tam);
		}
		livingroom.seekg(10, 1);
		if (radioButton1->Checked)
		{
			livingroom << "w";
			livingroom.close();
		}
		else if (radioButton2->Checked)
		{
			livingroom << "y";
			livingroom.close();
		}
		else if (radioButton3->Checked)
		{
			livingroom << "g";
			livingroom.close();
		}
		else if (radioButton4->Checked)
		{
			livingroom << "p";
			livingroom.close();
		}
		else if (radioButton5->Checked)
		{
			livingroom << "r";
			livingroom.close();
		}

		else if (radioButton6->Checked)
		{
			livingroom << "b";
			livingroom.close();
		}
		
	}
	
	private: System::Void FanLivingRoom_on_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream livingroom;
		string tam;
		livingroom.open("data\\LivingRoom.txt", (ios_base::in | ios_base::out));
		for (int i = 0; i < 7; i++) {
			getline(livingroom, tam);
		}
		livingroom.seekg(5, 1);
		livingroom << "1";
		livingroom.close();

		FanLivingRoom_on->BackColor = System::Drawing::Color::Lime;
		FanLivingRoom_on->ForeColor = System::Drawing::Color::Black;
		FanLivingRoom_off->BackColor = System::Drawing::Color::FromArgb(30, 32, 45);
		FanLivingRoom_off->ForeColor = System::Drawing::Color::Gainsboro;
		pictureFan->Load("image//fan_on.gif");
		state_fan = 1;
	}
	private: System::Void FanLivingRoom_off_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream livingroom;
		string tam;
		livingroom.open("data\\LivingRoom.txt", (ios_base::in | ios_base::out));
		for (int i = 0; i < 7; i++) {
			getline(livingroom, tam);
		}
		livingroom.seekg(5, 1);
		livingroom << "0";
		livingroom.close();

		FanLivingRoom_off->BackColor = System::Drawing::Color::Red;
		FanLivingRoom_off->ForeColor = System::Drawing::Color::Black;
		FanLivingRoom_on->BackColor = System::Drawing::Color::FromArgb(30, 32, 45);
		FanLivingRoom_on->ForeColor = System::Drawing::Color::Gainsboro;
		pictureFan->Load("image//fan_off.png");
		state_fan = 0;
	}
	private: System::Void Fan_LivingRoom_Scroll(System::Object^ sender, System::EventArgs^ e) {
		
		if (state_fan == 1)
		{	
			fstream livingroom;
			string tam;
			livingroom.open("data\\LivingRoom.txt", (ios_base::in | ios_base::out));
			for (int i = 0; i < 7; i++) {
				getline(livingroom, tam);
			}
			livingroom.seekg(8, 1);
			string speed;
			msclr::interop::marshal_context context;
			String^ value = Fan_LivingRoom->Value.ToString();
			speed = context.marshal_as<std::string>(value);
			livingroom << speed+",";
			livingroom.close();
		}
		else if (state_fan == 0)
			Fan_LivingRoom->Value = 0;
	}
	
	private: System::Void TVLivingRoom_on_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream livingroom;
		string tam;
		livingroom.open("data\\LivingRoom.txt", (ios_base::in | ios_base::out));
		for (int i = 0; i < 9; i++) {
			getline(livingroom, tam);
		}
		livingroom.seekg(4, 1);
		livingroom << "1";
		livingroom.close();

		TVLivingRoom_on->BackColor = System::Drawing::Color::Lime;
		TVLivingRoom_on->ForeColor = System::Drawing::Color::Black;
		TVLivingRoom_off->BackColor = System::Drawing::Color::FromArgb(30, 32, 45);
		TVLivingRoom_off->ForeColor = System::Drawing::Color::Gainsboro;
		pictureTV->Load("image//tv_on.gif");
		state_TV = 1;
	}
	private: System::Void TVLivingRoom_off_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream livingroom;
		string tam;
		livingroom.open("data\\LivingRoom.txt", (ios_base::in | ios_base::out));
		for (int i = 0; i < 9; i++) {
			getline(livingroom, tam);
		}
		livingroom.seekg(4, 1);
		livingroom << "0";
		livingroom.close();

		TVLivingRoom_off->BackColor = System::Drawing::Color::Red;
		TVLivingRoom_off->ForeColor = System::Drawing::Color::Black;
		TVLivingRoom_on->BackColor = System::Drawing::Color::FromArgb(30, 32, 45);
		TVLivingRoom_on->ForeColor = System::Drawing::Color::Gainsboro;
		pictureTV->Load("image//tv_off.png");
		state_TV = 0;
	}
	private: System::Void TVLivingRoom_Scroll(System::Object^ sender, System::EventArgs^ e) {
		
		if (state_TV == 1)
		{
			fstream livingroom;
			string tam;
			livingroom.open("data\\LivingRoom.txt", (ios_base::in | ios_base::out));
			for (int i = 0; i < 9; i++) {
				getline(livingroom, tam);
			}
			livingroom.seekg(7, 1);
			string volumn;
			msclr::interop::marshal_context context;
			String^ value = TVLivingRoom->Value.ToString();
			volumn = context.marshal_as<std::string>(value);
			livingroom << volumn + ",";
			livingroom.close();
		}
		else if (state_fan == 0)
			TVLivingRoom->Value = 0;
	}
	private: System::Void ACLivingRoom_on_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream livingroom;
		string tam;
		livingroom.open("data\\LivingRoom.txt", (ios_base::in | ios_base::out));
		for (int i = 0; i < 11; i++) {
			getline(livingroom, tam);
		}
		livingroom.seekg(4, 1);
		livingroom << "1";
		livingroom.close();

		ACLivingRoom_on->BackColor = System::Drawing::Color::Lime;
		ACLivingRoom_on->ForeColor = System::Drawing::Color::Black;
		ACLivingRoom_off->BackColor = System::Drawing::Color::FromArgb(30, 32, 45);
		ACLivingRoom_off->ForeColor = System::Drawing::Color::Gainsboro;
		pictureAC->Load("image//AC_on.gif");
		state_AC = 1;
	}
	private: System::Void ACLivingRoom_off_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream livingroom;
		string tam;
		livingroom.open("data\\LivingRoom.txt", (ios_base::in | ios_base::out));
		for (int i = 0; i < 11; i++) {
			getline(livingroom, tam);
		}
		livingroom.seekg(4, 1);
		livingroom << "0";
		livingroom.close();

		ACLivingRoom_off->BackColor = System::Drawing::Color::Red;
		ACLivingRoom_off->ForeColor = System::Drawing::Color::Black;
		ACLivingRoom_on->BackColor = System::Drawing::Color::FromArgb(30, 32, 45);
		ACLivingRoom_on->ForeColor = System::Drawing::Color::Gainsboro;
		pictureAC->Load("image//AC_off.png");
		state_AC = 0;
	}
	private: System::Void ACLivingRoom_Scroll(System::Object^ sender, System::EventArgs^ e) {
		fstream livingroom;
		string tam;
		livingroom.open("data\\LivingRoom.txt", (ios_base::in | ios_base::out));
		for (int i = 0; i < 11; i++) {
			getline(livingroom, tam);
		}
		livingroom.seekg(7, 1);
		string temp;
		msclr::interop::marshal_context context;
		String^ value = ACLivingRoom->Value.ToString();
		temp = context.marshal_as<std::string>(value);
		livingroom << temp + ",";
		livingroom.close();
	}
	
	private: System::Void LivingRoom_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
	}
	
};
}
