#pragma once
#include <regex>

#include "Form1.h"

namespace AMEP_DB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Text::RegularExpressions;


	/// <summary>
	/// Resumen de Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BackButton;
	protected:

	protected:
	private: System::Windows::Forms::Button^ RegisterButton;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ surnameBox;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ emailBox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ nameBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ passwordBox;
	private: System::Windows::Forms::TextBox^ usernameBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->RegisterButton = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->surnameBox = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->emailBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->passwordBox = (gcnew System::Windows::Forms::TextBox());
			this->usernameBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// BackButton
			// 
			this->BackButton->BackColor = System::Drawing::Color::Red;
			this->BackButton->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->BackButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BackButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.25F));
			this->BackButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackButton->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->BackButton->Location = System::Drawing::Point(146, 581);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(164, 52);
			this->BackButton->TabIndex = 42;
			this->BackButton->Text = L"Login";
			this->BackButton->UseMnemonic = false;
			this->BackButton->UseVisualStyleBackColor = false;
			this->BackButton->UseWaitCursor = true;
			this->BackButton->Click += gcnew System::EventHandler(this, &Register::BackButton_Click);
			// 
			// RegisterButton
			// 
			this->RegisterButton->BackColor = System::Drawing::Color::Lime;
			this->RegisterButton->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->RegisterButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RegisterButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.25F));
			this->RegisterButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->RegisterButton->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->RegisterButton->Location = System::Drawing::Point(759, 581);
			this->RegisterButton->Name = L"RegisterButton";
			this->RegisterButton->Size = System::Drawing::Size(164, 52);
			this->RegisterButton->TabIndex = 41;
			this->RegisterButton->Text = L"Register";
			this->RegisterButton->UseMnemonic = false;
			this->RegisterButton->UseVisualStyleBackColor = false;
			this->RegisterButton->UseWaitCursor = true;
			this->RegisterButton->Click += gcnew System::EventHandler(this, &Register::RegisterButton_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(141, 251);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 25);
			this->label6->TabIndex = 40;
			this->label6->Text = L"Surname:";
			this->label6->UseWaitCursor = true;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel5->Location = System::Drawing::Point(310, 279);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(289, 2);
			this->panel5->TabIndex = 39;
			this->panel5->UseWaitCursor = true;
			// 
			// surnameBox
			// 
			this->surnameBox->BackColor = System::Drawing::SystemColors::InfoText;
			this->surnameBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->surnameBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->surnameBox->ForeColor = System::Drawing::SystemColors::Menu;
			this->surnameBox->Location = System::Drawing::Point(310, 251);
			this->surnameBox->Multiline = true;
			this->surnameBox->Name = L"surnameBox";
			this->surnameBox->Size = System::Drawing::Size(289, 28);
			this->surnameBox->TabIndex = 38;
			this->surnameBox->UseWaitCursor = true;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel4->Location = System::Drawing::Point(310, 437);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(289, 2);
			this->panel4->TabIndex = 37;
			this->panel4->UseWaitCursor = true;
			// 
			// emailBox
			// 
			this->emailBox->BackColor = System::Drawing::SystemColors::InfoText;
			this->emailBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->emailBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->emailBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailBox->ForeColor = System::Drawing::SystemColors::Menu;
			this->emailBox->Location = System::Drawing::Point(310, 409);
			this->emailBox->Multiline = true;
			this->emailBox->Name = L"emailBox";
			this->emailBox->Size = System::Drawing::Size(289, 28);
			this->emailBox->TabIndex = 36;
			this->emailBox->UseWaitCursor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(141, 409);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 25);
			this->label5->TabIndex = 35;
			this->label5->Text = L"Email:";
			this->label5->UseWaitCursor = true;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel3->Location = System::Drawing::Point(310, 198);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(289, 2);
			this->panel3->TabIndex = 32;
			this->panel3->UseWaitCursor = true;
			// 
			// nameBox
			// 
			this->nameBox->BackColor = System::Drawing::SystemColors::InfoText;
			this->nameBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nameBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameBox->ForeColor = System::Drawing::SystemColors::Menu;
			this->nameBox->Location = System::Drawing::Point(310, 172);
			this->nameBox->Multiline = true;
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(289, 28);
			this->nameBox->TabIndex = 34;
			this->nameBox->UseWaitCursor = true;
			this->nameBox->TextChanged += gcnew System::EventHandler(this, &Register::nameBox_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(141, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 25);
			this->label4->TabIndex = 33;
			this->label4->Text = L"Name:";
			this->label4->UseWaitCursor = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel2->Location = System::Drawing::Point(310, 516);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(289, 2);
			this->panel2->TabIndex = 31;
			this->panel2->UseWaitCursor = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel1->Location = System::Drawing::Point(310, 358);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(289, 2);
			this->panel1->TabIndex = 30;
			this->panel1->UseWaitCursor = true;
			// 
			// passwordBox
			// 
			this->passwordBox->BackColor = System::Drawing::SystemColors::InfoText;
			this->passwordBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->passwordBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordBox->ForeColor = System::Drawing::SystemColors::Menu;
			this->passwordBox->Location = System::Drawing::Point(310, 488);
			this->passwordBox->Multiline = true;
			this->passwordBox->Name = L"passwordBox";
			this->passwordBox->Size = System::Drawing::Size(289, 28);
			this->passwordBox->TabIndex = 29;
			this->passwordBox->UseWaitCursor = true;
			// 
			// usernameBox
			// 
			this->usernameBox->BackColor = System::Drawing::SystemColors::InfoText;
			this->usernameBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernameBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameBox->ForeColor = System::Drawing::SystemColors::Menu;
			this->usernameBox->Location = System::Drawing::Point(310, 330);
			this->usernameBox->Multiline = true;
			this->usernameBox->Name = L"usernameBox";
			this->usernameBox->Size = System::Drawing::Size(289, 28);
			this->usernameBox->TabIndex = 28;
			this->usernameBox->UseWaitCursor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(141, 488);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 25);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Password:";
			this->label3->UseWaitCursor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(141, 330);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 25);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Username:";
			this->label2->UseWaitCursor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(353, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(283, 86);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Register";
			this->label1->UseWaitCursor = true;
			this->label1->Click += gcnew System::EventHandler(this, &Register::label1_Click);
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->ClientSize = System::Drawing::Size(1065, 674);
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->RegisterButton);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->surnameBox);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->emailBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->nameBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->passwordBox);
			this->Controls->Add(this->usernameBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Register";
			this->Text = L"Register";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void nameBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void BackButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AMEP_DB::Form1^ Form1 = gcnew AMEP_DB::Form1();

		this->Visible = false;

		Form1->Show();
	}
	private: System::Void RegisterButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = nameBox->Text;
		String^ surname = surnameBox->Text;
		String^ username = usernameBox->Text;
		String^ email = emailBox->Text;
		String^ passwd = passwordBox->Text;

		//Comprovamos la password
		// Define expresiones regulares para verificar la contraseña
		Regex^ uppercaseRegex = gcnew Regex("[A-Z]");
		Regex^ lowercaseRegex = gcnew Regex("[a-z]");
		Regex^ digitRegex = gcnew Regex("[0-9]");
		Regex^ specialCharRegex = gcnew Regex("[^a-zA-Z0-9]");

			// Realiza la comprobación
			bool hasUppercase = uppercaseRegex->IsMatch(passwd);
			bool hasLowercase = lowercaseRegex->IsMatch(passwd);
			bool hasDigit = digitRegex->IsMatch(passwd);
			bool hasSpecialChar = specialCharRegex->IsMatch(passwd);

			// Verifica si la contraseña cumple con los requisitos
			if (!hasUppercase || !hasLowercase || !hasDigit || !hasSpecialChar) {
			// La contraseña no cumple con los requisitos, muestra un mensaje de error
			MessageBox::Show("La contraseña debe contener al menos una mayúscula, una minúscula, un número y un carácter especial.");
			}
			else {

				//Connexi�n amb la BD Ubiwan
				String^ connectionString = "Server=ubiwan.epsevg.upc.edu;Database=amep08;User ID=amep08;Password=\"ooYinie9bohr-\"; Port = 3306; ";
				MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

				//Creamos la query
				String^ query = "INSERT INTO amep08.estudiant VALUES (@username, @email, @passwd, @name, @surname)";
				MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
				cmd->Parameters->AddWithValue("@username", username);
				cmd->Parameters->AddWithValue("@email", email);
				cmd->Parameters->AddWithValue("@passwd", passwd);
				cmd->Parameters->AddWithValue("@name", name);
				cmd->Parameters->AddWithValue("@surname", surname);

				try {
					conn->Open();
					cmd->ExecuteNonQuery();
					MessageBox::Show("Registro exitoso");
					AMEP_DB::Form1^ Form1 = gcnew AMEP_DB::Form1();

					this->Visible = false;

					Form1->Show();

				}
				catch (Exception^ ex) {
					MessageBox::Show("Error al registrar: " + ex->Message);
				}
				finally {
					conn->Close();
				}
			}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};

}
