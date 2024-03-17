#pragma once
#include "Form1.h"
#include "Register.h"


namespace AMEP_DB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Login;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Login = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Login
			// 
			this->Login->BackColor = System::Drawing::Color::Blue;
			this->Login->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Login->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.25F));
			this->Login->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Login->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Login->Location = System::Drawing::Point(238, 150);
			this->Login->Name = L"Login";
			this->Login->Size = System::Drawing::Size(164, 52);
			this->Login->TabIndex = 1;
			this->Login->Text = L"Sign In";
			this->Login->UseMnemonic = false;
			this->Login->UseVisualStyleBackColor = false;
			this->Login->Click += gcnew System::EventHandler(this, &MyForm::Login_Click);
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
			this->button1->Location = System::Drawing::Point(238, 350);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 52);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Exit";
			this->button1->UseMnemonic = false;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Blue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.25F));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->Location = System::Drawing::Point(238, 250);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 52);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Register";
			this->button2->UseMnemonic = false;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24.25F));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(113, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(413, 45);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Bienvenido a StudyBuddies";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->ClientSize = System::Drawing::Size(624, 501);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Login);
			this->Name = L"MyForm";
			this->Text = L"FirstScreen";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

//Boton Sign In
private: System::Void Login_Click(System::Object^ sender, System::EventArgs^ e) {
	AMEP_DB::Form1^ SignIn = gcnew AMEP_DB::Form1();
	
	this->Visible = false;
	
	SignIn->Show();
}

//Boton Exit
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

//Boton Register
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	AMEP_DB::Register^ RegisterForm = gcnew AMEP_DB::Register();

	this->Visible = false;

	RegisterForm->Show();
}
};
}
