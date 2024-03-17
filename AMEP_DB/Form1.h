#pragma once
#include "MainScreen.h"


namespace AMEP_DB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

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
	private: System::Windows::Forms::Button^ Login;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	protected:

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
			this->Login = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Login
			// 
			this->Login->BackColor = System::Drawing::Color::Blue;
			this->Login->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Login->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.25F));
			this->Login->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Login->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Login->Location = System::Drawing::Point(86, 391);
			this->Login->Name = L"Login";
			this->Login->Size = System::Drawing::Size(164, 52);
			this->Login->TabIndex = 0;
			this->Login->Text = L"Sign In";
			this->Login->UseMnemonic = false;
			this->Login->UseVisualStyleBackColor = false;
			this->Login->Click += gcnew System::EventHandler(this, &Form1::Login_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24.25F));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(62, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 45);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Sign in";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(81, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Username:";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(81, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password:";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Menu;
			this->textBox1->Location = System::Drawing::Point(86, 169);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(289, 28);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel1->Location = System::Drawing::Point(86, 194);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(289, 2);
			this->panel1->TabIndex = 6;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel2->Location = System::Drawing::Point(86, 306);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(289, 2);
			this->panel2->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Menu;
			this->textBox2->Location = System::Drawing::Point(86, 281);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(289, 28);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Blue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.25F));
			this->button1->ForeColor = System::Drawing::Color::AliceBlue;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->Location = System::Drawing::Point(290, 391);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 52);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Exit";
			this->button1->UseMnemonic = false;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(490, 194);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->ClientSize = System::Drawing::Size(624, 501);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Login);
			this->Name = L"Form1";
			this->Text = L"Sign In";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

//TextBox Username
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

//TextBox Contrasenya
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

//Boton Sign In
private: System::Void Login_Click(System::Object^ sender, System::EventArgs^ e) {
	//Cogemos los parametros que haya en los textBox
	String^ usuari = textBox1->Text;
	String^ contra = textBox2->Text;

	//Connexió amb la BD Ubiwan
    String^ connectionString = "Server=ubiwan.epsevg.upc.edu;Database=amep08;User ID=amep08;Password=\"ooYinie9bohr-\"; Port = 3306; ";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	
	//Query y cmd
	String^ sql = "SELECT * FROM amep08.estudiant WHERE usuari = \"" + usuari + "\" AND contrasenya = \"" + contra + "\";";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;

	try {
		// obrim la connexió
		conn->Open();

		// executem la comanda (cmd) que s’ha creat abans del try
		dataReader = cmd->ExecuteReader();
		if (dataReader->HasRows) {
			// Es llegeix la informació per crear un objecte de tipus Professor
			// Agafarem les columnes per índex, la primera és la 0
			MessageBox::Show("Bienvenido a StudyBudies");
			AMEP_DB::MainScreen^ MainS = gcnew AMEP_DB::MainScreen(usuari);
			this->Close();
			MainS->Show();
		}
		else {
			MessageBox::Show("Usuario o contrasenya erroneos\nPorfavor intentelo de nuevo");
		}
	}
	catch (Exception^ ex) {
		// codi per mostrar l’error en una finestra
		MessageBox::Show(ex->Message);
	}
	finally {
		// si tot va bé es tanca la connexió
		conn->Close();
	}
}

//Boton EXIT
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
