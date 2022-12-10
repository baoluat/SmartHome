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
	/// Summary for Bathroom
	/// </summary>
	public ref class Bathroom : public System::Windows::Forms::Form
	{
	public:
		Bathroom(void)
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
		~Bathroom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel4;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ txt_temp;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ txt_humi;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Bathroom::typeid));
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->txt_temp = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->txt_humi = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
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
			this->panel4->TabIndex = 22;
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
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23));
			this->label4->ForeColor = System::Drawing::Color::Gainsboro;
			this->label4->Location = System::Drawing::Point(144, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(191, 44);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Bathroom";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Bathroom::timer1_Tick);
			// 
			// Bathroom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(1101, 913);
			this->Controls->Add(this->panel4);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Bathroom";
			this->Text = L"Bathroom";
			this->Load += gcnew System::EventHandler(this, &Bathroom::Bathroom_Load);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Bathroom_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		string tam;
		fstream bathroom;
		bathroom.open("data\\Bathroom.txt", (ios_base::in | ios_base::out));
		//Temperature & Humidity
		string t;
		string h;
		getline(bathroom, tam);
		bathroom.seekg(13, 1);
		getline(bathroom, t, ',');
		getline(bathroom, tam);
		getline(bathroom, tam);
		bathroom.seekg(10, 1);
		getline(bathroom, h, ',');
		txt_temp->Text = gcnew String(t.data()) + "°C";
		txt_humi->Text = gcnew String(h.data()) + "%";
		bathroom.close();
	}
};
}
