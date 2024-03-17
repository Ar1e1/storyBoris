#pragma once

namespace AMEP_DB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de listStudents
	/// </summary>
	public ref class listStudents : public System::Windows::Forms::Form
	{
	public:
		listStudents(void)
		{
			InitializeComponent();
			List<String^>^ nomsEstudiants = gcnew List<String^>();
			getNomEstudiants(nomsEstudiants);
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~listStudents()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ Logo;
	protected:
	private: System::Windows::Forms::Button^ exitButton;
	private: System::Windows::Forms::Panel^ PanelGrupEstudi;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ studentsButton;
	private: System::Windows::Forms::Button^ ProfileButton;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ studentsListTitle;
	private: System::Windows::Forms::Panel^ StudentsListPanel;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(listStudents::typeid));
			this->Logo = (gcnew System::Windows::Forms::Panel());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->PanelGrupEstudi = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->studentsButton = (gcnew System::Windows::Forms::Button());
			this->ProfileButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->studentsListTitle = (gcnew System::Windows::Forms::Label());
			this->StudentsListPanel = (gcnew System::Windows::Forms::Panel());
			this->Logo->SuspendLayout();
			this->PanelGrupEstudi->SuspendLayout();
			this->SuspendLayout();
			// 
			// Logo
			// 
			this->Logo->AutoScroll = true;
			this->Logo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->Logo->Controls->Add(this->exitButton);
			this->Logo->Controls->Add(this->PanelGrupEstudi);
			this->Logo->Controls->Add(this->panel1);
			this->Logo->Dock = System::Windows::Forms::DockStyle::Left;
			this->Logo->Location = System::Drawing::Point(0, 0);
			this->Logo->Margin = System::Windows::Forms::Padding(2);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(169, 596);
			this->Logo->TabIndex = 15;
			// 
			// exitButton
			// 
			this->exitButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->exitButton->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->exitButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->exitButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Blue;
			this->exitButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->exitButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.25F));
			this->exitButton->ForeColor = System::Drawing::Color::AliceBlue;
			this->exitButton->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->exitButton->Location = System::Drawing::Point(22, 538);
			this->exitButton->Margin = System::Windows::Forms::Padding(2);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(123, 40);
			this->exitButton->TabIndex = 11;
			this->exitButton->Text = L"Exit";
			this->exitButton->UseMnemonic = false;
			this->exitButton->UseVisualStyleBackColor = false;
			this->exitButton->Click += gcnew System::EventHandler(this, &listStudents::exitButton_Click);
			// 
			// PanelGrupEstudi
			// 
			this->PanelGrupEstudi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->PanelGrupEstudi->Controls->Add(this->button2);
			this->PanelGrupEstudi->Controls->Add(this->studentsButton);
			this->PanelGrupEstudi->Controls->Add(this->ProfileButton);
			this->PanelGrupEstudi->Location = System::Drawing::Point(2, 186);
			this->PanelGrupEstudi->Margin = System::Windows::Forms::Padding(2);
			this->PanelGrupEstudi->Name = L"PanelGrupEstudi";
			this->PanelGrupEstudi->Size = System::Drawing::Size(165, 95);
			this->PanelGrupEstudi->TabIndex = 14;
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button2->ForeColor = System::Drawing::Color::Gainsboro;
			this->button2->Location = System::Drawing::Point(0, 62);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(165, 31);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Esborrar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// studentsButton
			// 
			this->studentsButton->BackColor = System::Drawing::Color::Gray;
			this->studentsButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->studentsButton->FlatAppearance->BorderSize = 0;
			this->studentsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->studentsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->studentsButton->ForeColor = System::Drawing::Color::Transparent;
			this->studentsButton->Location = System::Drawing::Point(0, 31);
			this->studentsButton->Margin = System::Windows::Forms::Padding(2);
			this->studentsButton->Name = L"studentsButton";
			this->studentsButton->Size = System::Drawing::Size(165, 31);
			this->studentsButton->TabIndex = 3;
			this->studentsButton->Text = L"Estudiants";
			this->studentsButton->UseVisualStyleBackColor = false;
			// 
			// ProfileButton
			// 
			this->ProfileButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->ProfileButton->FlatAppearance->BorderSize = 0;
			this->ProfileButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ProfileButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->ProfileButton->ForeColor = System::Drawing::Color::Gainsboro;
			this->ProfileButton->Location = System::Drawing::Point(0, 0);
			this->ProfileButton->Margin = System::Windows::Forms::Padding(2);
			this->ProfileButton->Name = L"ProfileButton";
			this->ProfileButton->Size = System::Drawing::Size(165, 31);
			this->ProfileButton->TabIndex = 1;
			this->ProfileButton->Text = L"Perfil";
			this->ProfileButton->UseVisualStyleBackColor = true;
			this->ProfileButton->Click += gcnew System::EventHandler(this, &listStudents::ProfileButton_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Location = System::Drawing::Point(35, 23);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(96, 88);
			this->panel1->TabIndex = 13;
			// 
			// studentsListTitle
			// 
			this->studentsListTitle->AutoSize = true;
			this->studentsListTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studentsListTitle->Location = System::Drawing::Point(447, 49);
			this->studentsListTitle->Name = L"studentsListTitle";
			this->studentsListTitle->Size = System::Drawing::Size(217, 32);
			this->studentsListTitle->TabIndex = 16;
			this->studentsListTitle->Text = L"Llistat d\'Estudiants";
			// 
			// StudentsListPanel
			// 
			this->StudentsListPanel->Location = System::Drawing::Point(230, 125);
			this->StudentsListPanel->Name = L"StudentsListPanel";
			this->StudentsListPanel->Size = System::Drawing::Size(683, 413);
			this->StudentsListPanel->TabIndex = 17;
			this->StudentsListPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &listStudents::StudentsListPanel_Paint);
			// 
			// listStudents
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(975, 596);
			this->Controls->Add(this->StudentsListPanel);
			this->Controls->Add(this->studentsListTitle);
			this->Controls->Add(this->Logo);
			this->Name = L"listStudents";
			this->Text = L"listStudents";
			this->Logo->ResumeLayout(false);
			this->PanelGrupEstudi->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void getNomEstudiants(List<String^>^ nomEstudiants) {
			// Database connection string
			String^ connectionString = "Server=ubiwan.epsevg.upc.edu;Database=amep08;User ID=amep08;Password=\"ooYinie9bohr-\"; Port = 3306;";
			MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

			// Prepare the SQL Query
			String^ query = "SELECT nom FROM estudiant;";
			MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);

			try {
				conn->Open();
				MySqlDataReader^ reader = cmd->ExecuteReader();

				while (reader->Read()) {
					String^ nom = reader->GetString("nom");
					nomEstudiants->Add(nom);
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error during fetching data: " + ex->Message);
			}
			finally {
				conn->Close();
			}
			if (nomEstudiants->Count == 0) {
				MessageBox::Show("No se han encontrado espacios creados, puedes crear uno en la opción de Crear Espai Estudi");
			}
			else {
				mostraEstudiants(nomEstudiants);
			}

		}
		public: void mostraEstudiants(List<String^>^ espais_names)
		{
			int y = 0; // Posición inicial en Y para el primer botón
			for each (String ^ nombre in espais_names)
			{
				Button^ btn = gcnew Button();
				btn->Text = nombre;
				btn->Location = Point(90, y); // X es fija, Y varía para cada botón
				btn->Size = Drawing::Size(150, 40); // Tamaño del botón
				btn->Click += gcnew System::EventHandler(this, &listStudents::Button_Click);
				StudentsListPanel->Controls->Add(btn); // Agrega el botón al panel

				y += 50; // Incrementa Y para el próximo botón
				//if (y >= 450) break;
			}
		}
#pragma endregion
	private: System::Void Button_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = dynamic_cast<Button^>(sender);
		}
	private: System::Void StudentsListPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void ProfileButton_Click(System::Object^ sender, System::EventArgs^ e) {
	//AMEP_DB::Profile^ profilePage = gcnew AMEP_DB::Profile();
	//profilePage->Show();
	//this->Visible = false;
	}
};
}
