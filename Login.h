#pragma once
#include "Home.h"

namespace SmartHome {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SQLite;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gainsboro;
			this->label1->Location = System::Drawing::Point(138, 226);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(373, 58);
			this->label1->TabIndex = 12;
			this->label1->Text = L"SMART HOME";
			this->label1->Click += gcnew System::EventHandler(this, &Login::otherclick);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->txtUsername);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->panel2->Location = System::Drawing::Point(710, 352);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(504, 75);
			this->panel2->TabIndex = 13;
			// 
			// txtUsername
			// 
			this->txtUsername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->txtUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtUsername->ForeColor = System::Drawing::Color::Gainsboro;
			this->txtUsername->Location = System::Drawing::Point(18, 21);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(467, 24);
			this->txtUsername->TabIndex = 0;
			this->txtUsername->Text = L"Username";
			this->txtUsername->Click += gcnew System::EventHandler(this, &Login::Username_Click);
			this->txtUsername->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::Enter);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->txtPassword);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->panel3->Location = System::Drawing::Point(710, 488);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(504, 75);
			this->panel3->TabIndex = 14;
			// 
			// txtPassword
			// 
			this->txtPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPassword->ForeColor = System::Drawing::Color::Gainsboro;
			this->txtPassword->Location = System::Drawing::Point(18, 21);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(467, 24);
			this->txtPassword->TabIndex = 1;
			this->txtPassword->Text = L"Password";
			this->txtPassword->UseSystemPasswordChar = true;
			this->txtPassword->Click += gcnew System::EventHandler(this, &Login::Password_Click);
			this->txtPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::Enter);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gainsboro;
			this->label3->Location = System::Drawing::Point(887, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 44);
			this->label3->TabIndex = 16;
			this->label3->Text = L"LOG IN";
			this->label3->Click += gcnew System::EventHandler(this, &Login::otherclick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SlateGray;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Gainsboro;
			this->button1->Location = System::Drawing::Point(710, 632);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(504, 72);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login::Signin_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(148, 315);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(363, 404);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Login::otherclick);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(1382, 953);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Name = L"Login";
			this->Text = L"Login";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Login::Close);
			this->Click += gcnew System::EventHandler(this, &Login::otherclick);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Username_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtUsername->Text == "Username")
		{
			txtUsername->Text = "";
		}
	}
	private: System::Void Password_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtPassword->Text == "Password")
		{
			txtPassword->Text = "";
		}
	}
	
	public: bool login = false;
		 
	private: System::Void Signin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ user = this->txtUsername->Text;
		String^ password = this->txtPassword->Text;
		
		String^ connString = "Data Source = data\\smarthome_data.db";
		SQLiteConnection sqliteconnect;
		sqliteconnect.ConnectionString = connString;
		sqliteconnect.Open();

		SQLiteCommand commandSelect;
		commandSelect.Connection = % sqliteconnect;
		commandSelect.CommandText = "SELECT * FROM users WHERE Username = '"+user+"' AND Password = '"+password+"';";
	
		SQLiteDataReader^ reader = commandSelect.ExecuteReader();
		if ((user->Length == 0) || (password->Length == 0))
		{
			MessageBox::Show("Please enter Username and Password!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (reader->Read())
		{
			
			MessageBox::Show("Sign in Successful!", "Sign in Successful!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			SmartHome::Home^ HomeForm = gcnew Home(txtUsername->Text);
			
			this->Hide();
			HomeForm->ShowDialog();
			this->Show();
			
		}
		else
		{
			MessageBox::Show("Username or Password is incorrect!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		sqliteconnect.Close();
		
	}
	private: System::Void Enter(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter)
		{
			button1->PerformClick();
		}
	}

	private: System::Void otherclick(System::Object^ sender, System::EventArgs^ e) {
		if (txtUsername->Text == "")
		{
			txtUsername->Text = "Username";
		}
		if (txtPassword->Text == "")
		{
			txtPassword->Text = "Password";
		}
	}

	
	private: System::Void Close(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		System::Windows::Forms::Application::Exit();
	}	
};
}
