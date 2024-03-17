#pragma once

namespace AMEP_DB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MainScreen
	/// </summary>
	public ref class MainScreen : public System::Windows::Forms::Form
	{
	public:

		MainScreen(String^ currentUser)
		{
			InitializeComponent();
			customizeDesign();
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainScreen::MainScreen_FormClosed);
			CurrentUser = currentUser;
			//
			//TODO: agregar código de constructor aquí
			//
		}
		//Void para ocultar Submenus panel lateral
		void customizeDesign() {
			PanelGrupEstudi->Visible = false;
			PanelCreacioGrup->Visible = false;
		}

		void hideSubMenu() {
			if (PanelGrupEstudi->Visible == true) {
				PanelGrupEstudi->Visible = false;
			}
			/*if (PanelCreacioGrup->Visible == true) {
				PanelCreacioGrup->Visible = false;
			}*/
		}

		void showSubMenu(System::Windows::Forms::Panel^ subMenu) {
			if (subMenu->Visible == false) {
				hideSubMenu();
				subMenu->Visible = true;
			}
			else {
				subMenu->Visible = false;
			}
		}

	protected:
	private: String^ CurrentUser;
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MainScreen()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ Logo;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ PanelGrupEstudi;
	private: System::Windows::Forms::Button^ BotBuscarGrup;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ BotEliminarGrup;

	private: System::Windows::Forms::Button^ BotCrearGrup;
	private: System::Windows::Forms::Button^ BotModificarGrup;
	private: System::Windows::Forms::Panel^ PanelCreacioGrup;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ NomGrup;
	private: System::Windows::Forms::TextBox^ Descripcio;
	private: System::Windows::Forms::TextBox^ Tags;
	private: System::Windows::Forms::TextBox^ Participants;
	private: System::Windows::Forms::Button^ CreaGrup;
	private: System::Windows::Forms::Button^ Tornar;
	private: System::Windows::Forms::Button^ button1;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainScreen::typeid));
			this->Logo = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->PanelGrupEstudi = (gcnew System::Windows::Forms::Panel());
			this->BotModificarGrup = (gcnew System::Windows::Forms::Button());
			this->BotEliminarGrup = (gcnew System::Windows::Forms::Button());
			this->BotCrearGrup = (gcnew System::Windows::Forms::Button());
			this->BotBuscarGrup = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->PanelCreacioGrup = (gcnew System::Windows::Forms::Panel());
			this->Tornar = (gcnew System::Windows::Forms::Button());
			this->CreaGrup = (gcnew System::Windows::Forms::Button());
			this->Descripcio = (gcnew System::Windows::Forms::TextBox());
			this->Tags = (gcnew System::Windows::Forms::TextBox());
			this->Participants = (gcnew System::Windows::Forms::TextBox());
			this->NomGrup = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Logo->SuspendLayout();
			this->PanelGrupEstudi->SuspendLayout();
			this->PanelCreacioGrup->SuspendLayout();
			this->SuspendLayout();
			// 
			// Logo
			// 
			this->Logo->AutoScroll = true;
			this->Logo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->Logo->Controls->Add(this->button1);
			this->Logo->Controls->Add(this->button2);
			this->Logo->Controls->Add(this->PanelGrupEstudi);
			this->Logo->Controls->Add(this->panel1);
			this->Logo->Dock = System::Windows::Forms::DockStyle::Left;
			this->Logo->Location = System::Drawing::Point(0, 0);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(220, 781);
			this->Logo->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button2->ForeColor = System::Drawing::Color::Gainsboro;
			this->button2->Location = System::Drawing::Point(0, 156);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(220, 40);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Grups d\'estudi";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainScreen::button2_Click);
			// 
			// PanelGrupEstudi
			// 
			this->PanelGrupEstudi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->PanelGrupEstudi->Controls->Add(this->BotModificarGrup);
			this->PanelGrupEstudi->Controls->Add(this->BotEliminarGrup);
			this->PanelGrupEstudi->Controls->Add(this->BotCrearGrup);
			this->PanelGrupEstudi->Controls->Add(this->BotBuscarGrup);
			this->PanelGrupEstudi->Location = System::Drawing::Point(0, 192);
			this->PanelGrupEstudi->Name = L"PanelGrupEstudi";
			this->PanelGrupEstudi->Size = System::Drawing::Size(220, 163);
			this->PanelGrupEstudi->TabIndex = 14;
			// 
			// BotModificarGrup
			// 
			this->BotModificarGrup->Dock = System::Windows::Forms::DockStyle::Top;
			this->BotModificarGrup->FlatAppearance->BorderSize = 0;
			this->BotModificarGrup->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotModificarGrup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->BotModificarGrup->ForeColor = System::Drawing::Color::Gainsboro;
			this->BotModificarGrup->Location = System::Drawing::Point(0, 120);
			this->BotModificarGrup->Name = L"BotModificarGrup";
			this->BotModificarGrup->Size = System::Drawing::Size(220, 40);
			this->BotModificarGrup->TabIndex = 3;
			this->BotModificarGrup->Text = L"Modificar Grup";
			this->BotModificarGrup->UseVisualStyleBackColor = true;
			this->BotModificarGrup->Click += gcnew System::EventHandler(this, &MainScreen::BotModificarGrup_Click);
			// 
			// BotEliminarGrup
			// 
			this->BotEliminarGrup->Dock = System::Windows::Forms::DockStyle::Top;
			this->BotEliminarGrup->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotEliminarGrup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->BotEliminarGrup->ForeColor = System::Drawing::Color::Gainsboro;
			this->BotEliminarGrup->Location = System::Drawing::Point(0, 80);
			this->BotEliminarGrup->Name = L"BotEliminarGrup";
			this->BotEliminarGrup->Size = System::Drawing::Size(220, 40);
			this->BotEliminarGrup->TabIndex = 2;
			this->BotEliminarGrup->Text = L"Eliminar Grup";
			this->BotEliminarGrup->UseVisualStyleBackColor = true;
			this->BotEliminarGrup->Click += gcnew System::EventHandler(this, &MainScreen::BotEliminarGrup_Click);
			// 
			// BotCrearGrup
			// 
			this->BotCrearGrup->Dock = System::Windows::Forms::DockStyle::Top;
			this->BotCrearGrup->FlatAppearance->BorderSize = 0;
			this->BotCrearGrup->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotCrearGrup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->BotCrearGrup->ForeColor = System::Drawing::Color::Gainsboro;
			this->BotCrearGrup->Location = System::Drawing::Point(0, 40);
			this->BotCrearGrup->Name = L"BotCrearGrup";
			this->BotCrearGrup->Size = System::Drawing::Size(220, 40);
			this->BotCrearGrup->TabIndex = 1;
			this->BotCrearGrup->Text = L"Crear Grup";
			this->BotCrearGrup->UseVisualStyleBackColor = true;
			this->BotCrearGrup->Click += gcnew System::EventHandler(this, &MainScreen::BotCrearGrup_Click);
			// 
			// BotBuscarGrup
			// 
			this->BotBuscarGrup->Dock = System::Windows::Forms::DockStyle::Top;
			this->BotBuscarGrup->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotBuscarGrup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->BotBuscarGrup->ForeColor = System::Drawing::Color::Gainsboro;
			this->BotBuscarGrup->Location = System::Drawing::Point(0, 0);
			this->BotBuscarGrup->Name = L"BotBuscarGrup";
			this->BotBuscarGrup->Size = System::Drawing::Size(220, 40);
			this->BotBuscarGrup->TabIndex = 0;
			this->BotBuscarGrup->Text = L"Buscar Grups";
			this->BotBuscarGrup->UseVisualStyleBackColor = true;
			this->BotBuscarGrup->Click += gcnew System::EventHandler(this, &MainScreen::BotBuscarGrup_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Location = System::Drawing::Point(45, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(128, 115);
			this->panel1->TabIndex = 13;
			// 
			// PanelCreacioGrup
			// 
			this->PanelCreacioGrup->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->PanelCreacioGrup->Controls->Add(this->Tornar);
			this->PanelCreacioGrup->Controls->Add(this->CreaGrup);
			this->PanelCreacioGrup->Controls->Add(this->Descripcio);
			this->PanelCreacioGrup->Controls->Add(this->Tags);
			this->PanelCreacioGrup->Controls->Add(this->Participants);
			this->PanelCreacioGrup->Controls->Add(this->NomGrup);
			this->PanelCreacioGrup->Controls->Add(this->label5);
			this->PanelCreacioGrup->Controls->Add(this->label4);
			this->PanelCreacioGrup->Controls->Add(this->label3);
			this->PanelCreacioGrup->Controls->Add(this->label2);
			this->PanelCreacioGrup->Controls->Add(this->label1);
			this->PanelCreacioGrup->Dock = System::Windows::Forms::DockStyle::Right;
			this->PanelCreacioGrup->Location = System::Drawing::Point(220, 0);
			this->PanelCreacioGrup->Name = L"PanelCreacioGrup";
			this->PanelCreacioGrup->Size = System::Drawing::Size(984, 781);
			this->PanelCreacioGrup->TabIndex = 14;
			// 
			// Tornar
			// 
			this->Tornar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Tornar->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->Tornar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->Tornar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Blue;
			this->Tornar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Tornar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.25F));
			this->Tornar->ForeColor = System::Drawing::Color::AliceBlue;
			this->Tornar->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Tornar->Location = System::Drawing::Point(41, 684);
			this->Tornar->Name = L"Tornar";
			this->Tornar->Size = System::Drawing::Size(164, 52);
			this->Tornar->TabIndex = 23;
			this->Tornar->Text = L"Tornar";
			this->Tornar->UseMnemonic = false;
			this->Tornar->UseVisualStyleBackColor = false;
			this->Tornar->Click += gcnew System::EventHandler(this, &MainScreen::Tornar_Click);
			// 
			// CreaGrup
			// 
			this->CreaGrup->BackColor = System::Drawing::Color::Blue;
			this->CreaGrup->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CreaGrup->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.25F));
			this->CreaGrup->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->CreaGrup->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->CreaGrup->Location = System::Drawing::Point(776, 684);
			this->CreaGrup->Name = L"CreaGrup";
			this->CreaGrup->Size = System::Drawing::Size(164, 52);
			this->CreaGrup->TabIndex = 22;
			this->CreaGrup->Text = L"Crear";
			this->CreaGrup->UseMnemonic = false;
			this->CreaGrup->UseVisualStyleBackColor = false;
			this->CreaGrup->Click += gcnew System::EventHandler(this, &MainScreen::CreaGrup_Click);
			// 
			// Descripcio
			// 
			this->Descripcio->BackColor = System::Drawing::SystemColors::HighlightText;
			this->Descripcio->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Descripcio->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F));
			this->Descripcio->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Descripcio->Location = System::Drawing::Point(196, 447);
			this->Descripcio->Multiline = true;
			this->Descripcio->Name = L"Descripcio";
			this->Descripcio->Size = System::Drawing::Size(578, 193);
			this->Descripcio->TabIndex = 21;
			// 
			// Tags
			// 
			this->Tags->BackColor = System::Drawing::SystemColors::HighlightText;
			this->Tags->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Tags->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F));
			this->Tags->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Tags->Location = System::Drawing::Point(196, 347);
			this->Tags->Multiline = true;
			this->Tags->Name = L"Tags";
			this->Tags->Size = System::Drawing::Size(289, 28);
			this->Tags->TabIndex = 20;
			// 
			// Participants
			// 
			this->Participants->BackColor = System::Drawing::SystemColors::HighlightText;
			this->Participants->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Participants->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F));
			this->Participants->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Participants->Location = System::Drawing::Point(196, 247);
			this->Participants->Multiline = true;
			this->Participants->Name = L"Participants";
			this->Participants->Size = System::Drawing::Size(289, 28);
			this->Participants->TabIndex = 19;
			// 
			// NomGrup
			// 
			this->NomGrup->BackColor = System::Drawing::SystemColors::HighlightText;
			this->NomGrup->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->NomGrup->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F));
			this->NomGrup->ForeColor = System::Drawing::SystemColors::ControlText;
			this->NomGrup->Location = System::Drawing::Point(196, 147);
			this->NomGrup->Multiline = true;
			this->NomGrup->Name = L"NomGrup";
			this->NomGrup->Size = System::Drawing::Size(289, 28);
			this->NomGrup->TabIndex = 18;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.25F));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(36, 440);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 30);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Descripció:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.25F));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(36, 340);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 30);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Tags:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.25F));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(36, 240);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 30);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Participants:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.25F));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(36, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 30);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Nom del grup:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 30.25F));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(32, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(467, 55);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Creació de Grup d\'estudi";
			this->label1->Click += gcnew System::EventHandler(this, &MainScreen::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Blue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.25F));
			this->button1->ForeColor = System::Drawing::Color::AliceBlue;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->Location = System::Drawing::Point(29, 703);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 52);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Exit";
			this->button1->UseMnemonic = false;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainScreen::button1_Click);
			// 
			// MainScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(1204, 781);
			this->Controls->Add(this->PanelCreacioGrup);
			this->Controls->Add(this->Logo);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"MainScreen";
			this->Text = L"MainScreen";
			this->Load += gcnew System::EventHandler(this, &MainScreen::MainScreen_Load);
			this->Logo->ResumeLayout(false);
			this->PanelGrupEstudi->ResumeLayout(false);
			this->PanelCreacioGrup->ResumeLayout(false);
			this->PanelCreacioGrup->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
//Cerrar App si se cierra ventana (Se encuentra en el main)
private: System::Void MainScreen_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit(); // Cierra la aplicación cuando se cierra el formulario
}
//Pantalla
private: System::Void MainScreen_Load(System::Object^ sender, System::EventArgs^ e) {
}
//Boton Grup d'Estudis
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	showSubMenu(PanelGrupEstudi);
}
//Boton Buscar Grup
private: System::Void BotBuscarGrup_Click(System::Object^ sender, System::EventArgs^ e) {
	hideSubMenu();
}
//Boton Crear Grup
private: System::Void BotCrearGrup_Click(System::Object^ sender, System::EventArgs^ e) {
	hideSubMenu();
	showSubMenu(PanelCreacioGrup);
}
//Boton Eliminar Grup
private: System::Void BotEliminarGrup_Click(System::Object^ sender, System::EventArgs^ e) {
	hideSubMenu();
}
//Boton Modificar Grup
private: System::Void BotModificarGrup_Click(System::Object^ sender, System::EventArgs^ e) {
	hideSubMenu();
}


//TEXT
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}

//Boton Tornar
private: System::Void Tornar_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelCreacioGrup->Visible = false;
	NomGrup->Text = "";
	Participants->Text = "";
	Tags->Text = "";
	Descripcio->Text = "";
}

//Boton Crear
private: System::Void CreaGrup_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show(CurrentUser);
}

//EXIT
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

};
}
