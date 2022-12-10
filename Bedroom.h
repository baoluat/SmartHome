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

	/// <summary>
	/// Summary for Bedroom
	/// </summary>
	public ref class Bedroom : public System::Windows::Forms::Form
	{
	public:
		Bedroom(void)
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
		~Bedroom()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Timer^ timer1;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ LightBedroom_off;

	private: System::Windows::Forms::Button^ LightBedroom_on;

	private: System::Windows::Forms::PictureBox^ pictureLight;

	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ txtAC;
	private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Button^ ACBedroom_off;

private: System::Windows::Forms::Button^ ACBedroom_on;

	private: System::Windows::Forms::PictureBox^ pictureAC;
	private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TrackBar^ ACBedroom;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ txt_temp;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ txt_humi;
	private: System::Windows::Forms::Label^ label4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Bedroom::typeid));
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
			this->LightBedroom_off = (gcnew System::Windows::Forms::Button());
			this->LightBedroom_on = (gcnew System::Windows::Forms::Button());
			this->pictureLight = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->txtAC = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ACBedroom_off = (gcnew System::Windows::Forms::Button());
			this->ACBedroom_on = (gcnew System::Windows::Forms::Button());
			this->pictureAC = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->ACBedroom = (gcnew System::Windows::Forms::TrackBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->txt_temp = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->txt_humi = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureLight))->BeginInit();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureAC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ACBedroom))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 400;
			this->timer1->Tick += gcnew System::EventHandler(this, &Bedroom::timer1_Tick);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->groupBox1);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->LightBedroom_off);
			this->panel3->Controls->Add(this->LightBedroom_on);
			this->panel3->Controls->Add(this->pictureLight);
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
			this->radioButton6->Click += gcnew System::EventHandler(this, &Bedroom::change_color);
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
			this->radioButton1->Click += gcnew System::EventHandler(this, &Bedroom::change_color);
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
			this->radioButton5->Click += gcnew System::EventHandler(this, &Bedroom::change_color);
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
			this->radioButton2->Click += gcnew System::EventHandler(this, &Bedroom::change_color);
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
			this->radioButton4->Click += gcnew System::EventHandler(this, &Bedroom::change_color);
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
			this->radioButton3->Click += gcnew System::EventHandler(this, &Bedroom::change_color);
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
			// LightBedroom_off
			// 
			this->LightBedroom_off->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->LightBedroom_off->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->LightBedroom_off->ForeColor = System::Drawing::Color::Gainsboro;
			this->LightBedroom_off->Location = System::Drawing::Point(177, 142);
			this->LightBedroom_off->Name = L"LightBedroom_off";
			this->LightBedroom_off->Size = System::Drawing::Size(75, 35);
			this->LightBedroom_off->TabIndex = 4;
			this->LightBedroom_off->Text = L"OFF";
			this->LightBedroom_off->UseVisualStyleBackColor = false;
			this->LightBedroom_off->Click += gcnew System::EventHandler(this, &Bedroom::LightBedroom_off_Click);
			// 
			// LightBedroom_on
			// 
			this->LightBedroom_on->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->LightBedroom_on->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->LightBedroom_on->ForeColor = System::Drawing::Color::Gainsboro;
			this->LightBedroom_on->Location = System::Drawing::Point(76, 142);
			this->LightBedroom_on->Name = L"LightBedroom_on";
			this->LightBedroom_on->Size = System::Drawing::Size(75, 35);
			this->LightBedroom_on->TabIndex = 3;
			this->LightBedroom_on->Text = L"ON";
			this->LightBedroom_on->UseVisualStyleBackColor = false;
			this->LightBedroom_on->Click += gcnew System::EventHandler(this, &Bedroom::LightBedroom_on_Click);
			// 
			// pictureLight
			// 
			this->pictureLight->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureLight.Image")));
			this->pictureLight->Location = System::Drawing::Point(104, 3);
			this->pictureLight->Name = L"pictureLight";
			this->pictureLight->Size = System::Drawing::Size(129, 130);
			this->pictureLight->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureLight->TabIndex = 2;
			this->pictureLight->TabStop = false;
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
			this->panel8->Controls->Add(this->panel7);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel8->Location = System::Drawing::Point(0, 134);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(1101, 779);
			this->panel8->TabIndex = 22;
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->txtAC);
			this->panel7->Controls->Add(this->label7);
			this->panel7->Controls->Add(this->ACBedroom_off);
			this->panel7->Controls->Add(this->ACBedroom_on);
			this->panel7->Controls->Add(this->pictureAC);
			this->panel7->Controls->Add(this->label8);
			this->panel7->Controls->Add(this->ACBedroom);
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
			// ACBedroom_off
			// 
			this->ACBedroom_off->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ACBedroom_off->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->ACBedroom_off->ForeColor = System::Drawing::Color::Gainsboro;
			this->ACBedroom_off->Location = System::Drawing::Point(212, 187);
			this->ACBedroom_off->Name = L"ACBedroom_off";
			this->ACBedroom_off->Size = System::Drawing::Size(75, 35);
			this->ACBedroom_off->TabIndex = 4;
			this->ACBedroom_off->Text = L"OFF";
			this->ACBedroom_off->UseVisualStyleBackColor = false;
			this->ACBedroom_off->Click += gcnew System::EventHandler(this, &Bedroom::ACBedroom_off_Click);
			// 
			// ACBedroom_on
			// 
			this->ACBedroom_on->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ACBedroom_on->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->ACBedroom_on->ForeColor = System::Drawing::Color::Gainsboro;
			this->ACBedroom_on->Location = System::Drawing::Point(94, 187);
			this->ACBedroom_on->Name = L"ACBedroom_on";
			this->ACBedroom_on->Size = System::Drawing::Size(75, 35);
			this->ACBedroom_on->TabIndex = 3;
			this->ACBedroom_on->Text = L"ON";
			this->ACBedroom_on->UseVisualStyleBackColor = false;
			this->ACBedroom_on->Click += gcnew System::EventHandler(this, &Bedroom::ACBedroom_on_Click);
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
			// ACBedroom
			// 
			this->ACBedroom->Location = System::Drawing::Point(104, 241);
			this->ACBedroom->Maximum = 30;
			this->ACBedroom->Minimum = 16;
			this->ACBedroom->Name = L"ACBedroom";
			this->ACBedroom->Size = System::Drawing::Size(209, 56);
			this->ACBedroom->TabIndex = 0;
			this->ACBedroom->Value = 16;
			this->ACBedroom->Scroll += gcnew System::EventHandler(this, &Bedroom::ACBedroom_Scroll);
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
			this->panel4->TabIndex = 21;
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
			this->label4->Size = System::Drawing::Size(180, 44);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Bedroom";
			// 
			// Bedroom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(1101, 913);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel4);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Bedroom";
			this->Text = L"Bedroom";
			this->Load += gcnew System::EventHandler(this, &Bedroom::Bedroom_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureLight))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureAC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ACBedroom))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void Bedroom_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
	}
	public: int r, g, b;
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		string tam;
		fstream bedroom;
		bedroom.open("data\\Bedroom.txt", (ios_base::in | ios_base::out));
		//Temperature & Humidity
		string t;
		string h;
		getline(bedroom, tam);
		bedroom.seekg(13, 1);
		getline(bedroom, t, ',');
		getline(bedroom, tam);
		getline(bedroom, tam);
		bedroom.seekg(10, 1);
		getline(bedroom, h, ',');
		txt_temp->Text = gcnew String(t.data()) + "°C";
		txt_humi->Text = gcnew String(h.data()) + "%";

		//Light
		string state_light;
		string color;
		getline(bedroom, tam);
		getline(bedroom, tam);
		bedroom.seekg(7, 1);
		getline(bedroom, state_light, ',');
		bedroom.seekg(1, 1);
		getline(bedroom, color, ',');

		if (state_light == "1")
		{
			LightBedroom_on->PerformClick();
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
			pictureLight->BackColor = System::Drawing::Color::FromArgb(r, g, b);

		}
		else if (state_light == "0")
		{
			LightBedroom_off->PerformClick();

		}

		//AC
		string state_AC;
		string temp;
		getline(bedroom, tam);
		getline(bedroom, tam);
		bedroom.seekg(4, 1);
		getline(bedroom, state_AC, ',');
		bedroom.seekg(1, 1);
		getline(bedroom, temp, ',');
		int tem = std::stoi(temp);
		if (state_AC == "1")
		{
			ACBedroom_on->PerformClick();
			ACBedroom->Value = tem;
		}
		else if (state_AC == "0")
		{
			ACBedroom_off->PerformClick();
		}
		txtAC->Text = ACBedroom->Value.ToString();

		bedroom.close();
	}
	private: System::Void LightBedroom_on_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream bedroom;
		string tam;
		bedroom.open("data\\Bedroom.txt", (ios_base::in | ios_base::out));
		for (int i = 0; i < 5; i++) {
			getline(bedroom, tam);
		}
		bedroom.seekg(7, 1);
		bedroom << "1";
		bedroom.close();

		LightBedroom_on->BackColor = System::Drawing::Color::Lime;
		LightBedroom_on->ForeColor = System::Drawing::Color::Black;
		LightBedroom_off->BackColor = System::Drawing::Color::FromArgb(30, 32, 45);
		LightBedroom_off->ForeColor = System::Drawing::Color::Gainsboro;
		pictureLight->BackColor = System::Drawing::Color::FromArgb(r, g, b);
	}
	private: System::Void LightBedroom_off_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream bedroom;
		string tam;
		bedroom.open("data\\Bedroom.txt", (ios_base::in | ios_base::out));
		for (int i = 0; i < 5; i++) {
			getline(bedroom, tam);
		}
		bedroom.seekg(7, 1);
		bedroom << "0";
		bedroom.close();

		LightBedroom_off->BackColor = System::Drawing::Color::Red;
		LightBedroom_off->ForeColor = System::Drawing::Color::Black;
		LightBedroom_on->BackColor = System::Drawing::Color::FromArgb(30, 32, 45);
		LightBedroom_on->ForeColor = System::Drawing::Color::Gainsboro;
		pictureLight->BackColor = System::Drawing::Color::FromArgb(30, 32, 45);
	}
	private: System::Void change_color(System::Object^ sender, System::EventArgs^ e) {
		fstream bedroom;
		string tam;
		bedroom.open("data\\Bedroom.txt", (ios_base::in | ios_base::out));
		for (int i = 0; i < 5; i++) {
			getline(bedroom, tam);
		}
		bedroom.seekg(10, 1);
		if (radioButton1->Checked)
		{
			bedroom << "w";
		}
		else if (radioButton2->Checked)
		{
			bedroom << "y";
		}
		else if (radioButton3->Checked)
		{
			bedroom << "g";
		}
		else if (radioButton4->Checked)
		{
			bedroom << "p";
		}
		else if (radioButton5->Checked)
		{
			bedroom << "r";
		}

		else if (radioButton6->Checked)
		{
			bedroom << "b";
		}
		bedroom.close();
	}
	public: int state_AC;
	private: System::Void ACBedroom_on_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream bedroom;
		string tam;
		bedroom.open("data\\Bedroom.txt", (ios_base::in | ios_base::out));
		for (int i = 0; i < 7; i++) {
			getline(bedroom, tam);
		}
		bedroom.seekg(4, 1);
		bedroom << "1";
		bedroom.close();

		ACBedroom_on->BackColor = System::Drawing::Color::Lime;
		ACBedroom_on->ForeColor = System::Drawing::Color::Black;
		ACBedroom_off->BackColor = System::Drawing::Color::FromArgb(30, 32, 45);
		ACBedroom_off->ForeColor = System::Drawing::Color::Gainsboro;
		pictureAC->Load("image//AC_on.gif");
		state_AC = 1;
	}
	private: System::Void ACBedroom_off_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream bedroom;
		string tam;
		bedroom.open("data\\Bedroom.txt", (ios_base::in | ios_base::out));
		for (int i = 0; i < 7; i++) {
			getline(bedroom, tam);
		}
		bedroom.seekg(4, 1);
		bedroom << "0";
		bedroom.close();

		ACBedroom_off->BackColor = System::Drawing::Color::Red;
		ACBedroom_off->ForeColor = System::Drawing::Color::Black;
		ACBedroom_on->BackColor = System::Drawing::Color::FromArgb(30, 32, 45);
		ACBedroom_on->ForeColor = System::Drawing::Color::Gainsboro;
		pictureAC->Load("image//AC_off.png");
		state_AC = 0;
	}
	private: System::Void ACBedroom_Scroll(System::Object^ sender, System::EventArgs^ e) {
		fstream bedroom;
		string tam;
		bedroom.open("data\\Bedroom.txt", (ios_base::in | ios_base::out));
		for (int i = 0; i < 7; i++) {
			getline(bedroom, tam);
		}
		bedroom.seekg(7, 1);
		string temp;
		msclr::interop::marshal_context context;
		String^ value = ACBedroom->Value.ToString();
		temp = context.marshal_as<std::string>(value);
		bedroom << temp + ",";
		bedroom.close();
	}
};
}
