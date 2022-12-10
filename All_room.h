#pragma once
#include <fstream>
#include <string>
using namespace std;
namespace SmartHome {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for All_room
	/// </summary>
	public ref class All_room : public System::Windows::Forms::Form
	{
	public:
		All_room(void)
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
		~All_room()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ humi_livingroom;
	private: System::Windows::Forms::Label^ temp_livingroom;
	private: System::Windows::Forms::Label^ temp_bedroom;
	private: System::Windows::Forms::Label^ humi_bedroom;
	private: System::Windows::Forms::Label^ humi_kitchen;
	private: System::Windows::Forms::Label^ temp_kitchen;
	private: System::Windows::Forms::Label^ humi_bathroom;
	private: System::Windows::Forms::Label^ temp_bathroom;
	private: System::Windows::Forms::Timer^ timer1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(All_room::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->humi_livingroom = (gcnew System::Windows::Forms::Label());
			this->temp_livingroom = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->humi_bedroom = (gcnew System::Windows::Forms::Label());
			this->temp_bedroom = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->humi_kitchen = (gcnew System::Windows::Forms::Label());
			this->temp_kitchen = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->humi_bathroom = (gcnew System::Windows::Forms::Label());
			this->temp_bathroom = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->humi_livingroom);
			this->panel1->Controls->Add(this->temp_livingroom);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(47, 47);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(301, 296);
			this->panel1->TabIndex = 0;
			// 
			// humi_livingroom
			// 
			this->humi_livingroom->AutoSize = true;
			this->humi_livingroom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->humi_livingroom->ForeColor = System::Drawing::Color::Gainsboro;
			this->humi_livingroom->Location = System::Drawing::Point(115, 224);
			this->humi_livingroom->Name = L"humi_livingroom";
			this->humi_livingroom->Size = System::Drawing::Size(112, 36);
			this->humi_livingroom->TabIndex = 5;
			this->humi_livingroom->Text = L"label_h";
			// 
			// temp_livingroom
			// 
			this->temp_livingroom->AutoSize = true;
			this->temp_livingroom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->temp_livingroom->ForeColor = System::Drawing::Color::Gainsboro;
			this->temp_livingroom->Location = System::Drawing::Point(115, 128);
			this->temp_livingroom->Name = L"temp_livingroom";
			this->temp_livingroom->Size = System::Drawing::Size(103, 36);
			this->temp_livingroom->TabIndex = 4;
			this->temp_livingroom->Text = L"label_t";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(20, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(74, 76);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label3->ForeColor = System::Drawing::Color::Gainsboro;
			this->label3->Location = System::Drawing::Point(14, 224);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 36);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Humi:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label2->ForeColor = System::Drawing::Color::Gainsboro;
			this->label2->Location = System::Drawing::Point(14, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 36);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Temp: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->ForeColor = System::Drawing::Color::Gainsboro;
			this->label1->Location = System::Drawing::Point(114, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(184, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Livingroom";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->humi_bedroom);
			this->panel2->Controls->Add(this->temp_bedroom);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(400, 47);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(301, 296);
			this->panel2->TabIndex = 4;
			// 
			// humi_bedroom
			// 
			this->humi_bedroom->AutoSize = true;
			this->humi_bedroom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->humi_bedroom->ForeColor = System::Drawing::Color::Gainsboro;
			this->humi_bedroom->Location = System::Drawing::Point(125, 224);
			this->humi_bedroom->Name = L"humi_bedroom";
			this->humi_bedroom->Size = System::Drawing::Size(112, 36);
			this->humi_bedroom->TabIndex = 6;
			this->humi_bedroom->Text = L"label_h";
			// 
			// temp_bedroom
			// 
			this->temp_bedroom->AutoSize = true;
			this->temp_bedroom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->temp_bedroom->ForeColor = System::Drawing::Color::Gainsboro;
			this->temp_bedroom->Location = System::Drawing::Point(125, 128);
			this->temp_bedroom->Name = L"temp_bedroom";
			this->temp_bedroom->Size = System::Drawing::Size(103, 36);
			this->temp_bedroom->TabIndex = 5;
			this->temp_bedroom->Text = L"label_t";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(20, 28);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(74, 76);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label4->ForeColor = System::Drawing::Color::Gainsboro;
			this->label4->Location = System::Drawing::Point(14, 224);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 36);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Humi:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label5->ForeColor = System::Drawing::Color::Gainsboro;
			this->label5->Location = System::Drawing::Point(14, 128);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(105, 36);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Temp: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label6->ForeColor = System::Drawing::Color::Gainsboro;
			this->label6->Location = System::Drawing::Point(114, 43);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(155, 39);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Bedroom";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->humi_kitchen);
			this->panel3->Controls->Add(this->temp_kitchen);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Location = System::Drawing::Point(752, 47);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(301, 296);
			this->panel3->TabIndex = 4;
			// 
			// humi_kitchen
			// 
			this->humi_kitchen->AutoSize = true;
			this->humi_kitchen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->humi_kitchen->ForeColor = System::Drawing::Color::Gainsboro;
			this->humi_kitchen->Location = System::Drawing::Point(115, 224);
			this->humi_kitchen->Name = L"humi_kitchen";
			this->humi_kitchen->Size = System::Drawing::Size(112, 36);
			this->humi_kitchen->TabIndex = 8;
			this->humi_kitchen->Text = L"label_h";
			// 
			// temp_kitchen
			// 
			this->temp_kitchen->AutoSize = true;
			this->temp_kitchen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->temp_kitchen->ForeColor = System::Drawing::Color::Gainsboro;
			this->temp_kitchen->Location = System::Drawing::Point(115, 128);
			this->temp_kitchen->Name = L"temp_kitchen";
			this->temp_kitchen->Size = System::Drawing::Size(103, 36);
			this->temp_kitchen->TabIndex = 7;
			this->temp_kitchen->Text = L"label_t";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(20, 28);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(74, 76);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label7->ForeColor = System::Drawing::Color::Gainsboro;
			this->label7->Location = System::Drawing::Point(14, 224);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 36);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Humi:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label8->ForeColor = System::Drawing::Color::Gainsboro;
			this->label8->Location = System::Drawing::Point(14, 128);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(105, 36);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Temp: ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label9->ForeColor = System::Drawing::Color::Gainsboro;
			this->label9->Location = System::Drawing::Point(114, 43);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(131, 39);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Kitchen";
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->humi_bathroom);
			this->panel4->Controls->Add(this->temp_bathroom);
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Location = System::Drawing::Point(47, 395);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(301, 296);
			this->panel4->TabIndex = 5;
			// 
			// humi_bathroom
			// 
			this->humi_bathroom->AutoSize = true;
			this->humi_bathroom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->humi_bathroom->ForeColor = System::Drawing::Color::Gainsboro;
			this->humi_bathroom->Location = System::Drawing::Point(115, 224);
			this->humi_bathroom->Name = L"humi_bathroom";
			this->humi_bathroom->Size = System::Drawing::Size(112, 36);
			this->humi_bathroom->TabIndex = 9;
			this->humi_bathroom->Text = L"label_h";
			// 
			// temp_bathroom
			// 
			this->temp_bathroom->AutoSize = true;
			this->temp_bathroom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->temp_bathroom->ForeColor = System::Drawing::Color::Gainsboro;
			this->temp_bathroom->Location = System::Drawing::Point(115, 128);
			this->temp_bathroom->Name = L"temp_bathroom";
			this->temp_bathroom->Size = System::Drawing::Size(103, 36);
			this->temp_bathroom->TabIndex = 8;
			this->temp_bathroom->Text = L"label_t";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(20, 28);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(74, 76);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label10->ForeColor = System::Drawing::Color::Gainsboro;
			this->label10->Location = System::Drawing::Point(14, 224);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(91, 36);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Humi:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label11->ForeColor = System::Drawing::Color::Gainsboro;
			this->label11->Location = System::Drawing::Point(14, 128);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(105, 36);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Temp: ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label12->ForeColor = System::Drawing::Color::Gainsboro;
			this->label12->Location = System::Drawing::Point(114, 43);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(164, 39);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Bathroom";
			// 
			// timer1
			// 
			this->timer1->Interval = 400;
			this->timer1->Tick += gcnew System::EventHandler(this, &All_room::timer1_Tick);
			// 
			// All_room
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(1101, 779);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"All_room";
			this->Text = L"All_room";
			this->Load += gcnew System::EventHandler(this, &All_room::All_room_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void All_room_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		string tam;
		//Living Room
		fstream livingroom;
		livingroom.open("data\\LivingRoom.txt", (ios_base::in | ios_base::out));
		string t_lv;
		string h_lv;
		getline(livingroom, tam);
		livingroom.seekg(13, 1);
		getline(livingroom, t_lv, ',');
		getline(livingroom, tam);
		getline(livingroom, tam);
		livingroom.seekg(10, 1);
		getline(livingroom, h_lv, ',');
		temp_livingroom->Text = gcnew String(t_lv.data()) + "°C";
		humi_livingroom->Text = gcnew String(h_lv.data()) + "%";

		//Bedroom
		fstream bedroom;
		bedroom.open("data\\Bedroom.txt", (ios_base::in | ios_base::out));
		string t_br;
		string h_br;
		getline(bedroom, tam);
		bedroom.seekg(13, 1);
		getline(bedroom, t_br, ',');
		getline(bedroom, tam);
		getline(bedroom, tam);
		bedroom.seekg(10, 1);
		getline(bedroom, h_br, ',');
		temp_bedroom->Text = gcnew String(t_br.data()) + "°C";
		humi_bedroom->Text = gcnew String(h_br.data()) + "%";

		//Kitchen
		fstream kitchen;
		kitchen.open("data\\Kitchen.txt", (ios_base::in | ios_base::out));
		string t_kc;
		string h_kc;
		getline(kitchen, tam);
		kitchen.seekg(13, 1);
		getline(kitchen, t_kc, ',');
		getline(kitchen, tam);
		getline(kitchen, tam);
		kitchen.seekg(10, 1);
		getline(kitchen, h_kc, ',');
		temp_kitchen->Text = gcnew String(t_kc.data()) + "°C";
		humi_kitchen->Text = gcnew String(h_kc.data()) + "%";

		//Bathroom
		fstream bathroom;
		bathroom.open("data\\Bathroom.txt", (ios_base::in | ios_base::out));
		string t_ba;
		string h_ba;
		getline(bathroom, tam);
		bathroom.seekg(13, 1);
		getline(bathroom, t_ba, ',');
		getline(bathroom, tam);
		getline(bathroom, tam);
		bathroom.seekg(10, 1);
		getline(bathroom, h_ba, ',');
		temp_bathroom->Text = gcnew String(t_ba.data()) + "°C";
		humi_bathroom->Text = gcnew String(h_ba.data()) + "%";

	}
};
}
