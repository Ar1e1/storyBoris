#pragma once

namespace AMEP_DB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EspaiEstudi
	/// </summary>
	public ref class EspaiEstudi : public System::Windows::Forms::Form
	{
	public:
		EspaiEstudi(void)
		{
			InitializeComponent();
			DisenyiniciEspais();
			//
			//TODO: Add the constructor code here
			//

		}
		void DisenyiniciEspais()
		{
			panelSubmenuEspaiEstudi->Visible = false;
		}

		void hideSubmenu() 
		{
			if (panelSubmenuEspaiEstudi->Visible == true)
				panelSubmenuEspaiEstudi->Visible = false;
		}

		void showSubMenu(System::Windows::Forms::Panel^ subMenu) {
			if (subMenu->Visible == false) {
				hideSubmenu();
				subMenu->Visible = true;
			}
			else {
				subMenu->Visible = false;
			}
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EspaiEstudi()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ botModificarEspai;
	private: System::Windows::Forms::Button^ botEliminarEspai;
	private: System::Windows::Forms::Button^ botCrearEspais;


	private: System::Windows::Forms::Panel^ panelSideEspaiEstudi;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ MenuEspaisEstudi;
	private: System::Windows::Forms::Button^ MenuEspaiEstudi;
	private: System::Windows::Forms::Panel^ panelSubmenuEspaiEstudi;

	private: System::Windows::Forms::Button^ botLlistaEspais;
	private: System::Windows::Forms::Button^ PerfilProveidor;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EspaiEstudi::typeid));
			this->botModificarEspai = (gcnew System::Windows::Forms::Button());
			this->botEliminarEspai = (gcnew System::Windows::Forms::Button());
			this->botCrearEspais = (gcnew System::Windows::Forms::Button());
			this->panelSideEspaiEstudi = (gcnew System::Windows::Forms::Panel());
			this->PerfilProveidor = (gcnew System::Windows::Forms::Button());
			this->panelSubmenuEspaiEstudi = (gcnew System::Windows::Forms::Panel());
			this->botLlistaEspais = (gcnew System::Windows::Forms::Button());
			this->MenuEspaiEstudi = (gcnew System::Windows::Forms::Button());
			this->MenuEspaisEstudi = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panelSideEspaiEstudi->SuspendLayout();
			this->panelSubmenuEspaiEstudi->SuspendLayout();
			this->SuspendLayout();
			// 
			// botModificarEspai
			// 
			this->botModificarEspai->BackColor = System::Drawing::SystemColors::ControlDark;
			this->botModificarEspai->Dock = System::Windows::Forms::DockStyle::Top;
			this->botModificarEspai->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->botModificarEspai->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->botModificarEspai->ForeColor = System::Drawing::Color::Gainsboro;
			this->botModificarEspai->Location = System::Drawing::Point(0, 117);
			this->botModificarEspai->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->botModificarEspai->Name = L"botModificarEspai";
			this->botModificarEspai->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->botModificarEspai->Size = System::Drawing::Size(220, 39);
			this->botModificarEspai->TabIndex = 3;
			this->botModificarEspai->Text = L"Modificar Espai d\'Estudi";
			this->botModificarEspai->UseVisualStyleBackColor = false;
			this->botModificarEspai->Click += gcnew System::EventHandler(this, &EspaiEstudi::botModificarEspai_Click);
			// 
			// botEliminarEspai
			// 
			this->botEliminarEspai->Dock = System::Windows::Forms::DockStyle::Top;
			this->botEliminarEspai->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->botEliminarEspai->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->botEliminarEspai->ForeColor = System::Drawing::Color::Gainsboro;
			this->botEliminarEspai->Location = System::Drawing::Point(0, 39);
			this->botEliminarEspai->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->botEliminarEspai->Name = L"botEliminarEspai";
			this->botEliminarEspai->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->botEliminarEspai->Size = System::Drawing::Size(220, 39);
			this->botEliminarEspai->TabIndex = 2;
			this->botEliminarEspai->Text = L"Eliminar Espai d\'Estudi";
			this->botEliminarEspai->UseVisualStyleBackColor = true;
			this->botEliminarEspai->Click += gcnew System::EventHandler(this, &EspaiEstudi::botEliminarEspai_Click);
			// 
			// botCrearEspais
			// 
			this->botCrearEspais->Dock = System::Windows::Forms::DockStyle::Top;
			this->botCrearEspais->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->botCrearEspais->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->botCrearEspais->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->botCrearEspais->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->botCrearEspais->ForeColor = System::Drawing::Color::Gainsboro;
			this->botCrearEspais->Location = System::Drawing::Point(0, 0);
			this->botCrearEspais->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->botCrearEspais->Name = L"botCrearEspais";
			this->botCrearEspais->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->botCrearEspais->Size = System::Drawing::Size(220, 39);
			this->botCrearEspais->TabIndex = 1;
			this->botCrearEspais->Text = L"Crear Espai d\'Estudi";
			this->botCrearEspais->UseVisualStyleBackColor = true;
			this->botCrearEspais->Click += gcnew System::EventHandler(this, &EspaiEstudi::botCrearEspais_Click);
			// 
			// panelSideEspaiEstudi
			// 
			this->panelSideEspaiEstudi->AutoScroll = true;
			this->panelSideEspaiEstudi->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panelSideEspaiEstudi->Controls->Add(this->PerfilProveidor);
			this->panelSideEspaiEstudi->Controls->Add(this->panelSubmenuEspaiEstudi);
			this->panelSideEspaiEstudi->Controls->Add(this->MenuEspaiEstudi);
			this->panelSideEspaiEstudi->Controls->Add(this->MenuEspaisEstudi);
			this->panelSideEspaiEstudi->Controls->Add(this->panel1);
			this->panelSideEspaiEstudi->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelSideEspaiEstudi->Location = System::Drawing::Point(0, 0);
			this->panelSideEspaiEstudi->Margin = System::Windows::Forms::Padding(4);
			this->panelSideEspaiEstudi->Name = L"panelSideEspaiEstudi";
			this->panelSideEspaiEstudi->Size = System::Drawing::Size(220, 618);
			this->panelSideEspaiEstudi->TabIndex = 23;
			this->panelSideEspaiEstudi->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &EspaiEstudi::panel1_Paint);
			// 
			// PerfilProveidor
			// 
			this->PerfilProveidor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->PerfilProveidor->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->PerfilProveidor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PerfilProveidor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->PerfilProveidor->ForeColor = System::Drawing::Color::LightYellow;
			this->PerfilProveidor->Location = System::Drawing::Point(0, 572);
			this->PerfilProveidor->Margin = System::Windows::Forms::Padding(4);
			this->PerfilProveidor->Name = L"PerfilProveidor";
			this->PerfilProveidor->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->PerfilProveidor->Size = System::Drawing::Size(220, 46);
			this->PerfilProveidor->TabIndex = 18;
			this->PerfilProveidor->Text = L"Perfil Proveidor";
			this->PerfilProveidor->UseVisualStyleBackColor = false;
			this->PerfilProveidor->Click += gcnew System::EventHandler(this, &EspaiEstudi::botPerfilProveidor_Click);
			// 
			// panelSubmenuEspaiEstudi
			// 
			this->panelSubmenuEspaiEstudi->Controls->Add(this->botModificarEspai);
			this->panelSubmenuEspaiEstudi->Controls->Add(this->botLlistaEspais);
			this->panelSubmenuEspaiEstudi->Controls->Add(this->botEliminarEspai);
			this->panelSubmenuEspaiEstudi->Controls->Add(this->botCrearEspais);
			this->panelSubmenuEspaiEstudi->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelSubmenuEspaiEstudi->Location = System::Drawing::Point(0, 181);
			this->panelSubmenuEspaiEstudi->Margin = System::Windows::Forms::Padding(4);
			this->panelSubmenuEspaiEstudi->Name = L"panelSubmenuEspaiEstudi";
			this->panelSubmenuEspaiEstudi->Size = System::Drawing::Size(220, 152);
			this->panelSubmenuEspaiEstudi->TabIndex = 17;
			// 
			// botLlistaEspais
			// 
			this->botLlistaEspais->BackColor = System::Drawing::SystemColors::ControlDark;
			this->botLlistaEspais->Dock = System::Windows::Forms::DockStyle::Top;
			this->botLlistaEspais->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->botLlistaEspais->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->botLlistaEspais->ForeColor = System::Drawing::Color::Gainsboro;
			this->botLlistaEspais->Location = System::Drawing::Point(0, 78);
			this->botLlistaEspais->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->botLlistaEspais->Name = L"botLlistaEspais";
			this->botLlistaEspais->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->botLlistaEspais->Size = System::Drawing::Size(220, 39);
			this->botLlistaEspais->TabIndex = 1;
			this->botLlistaEspais->Text = L"Llista Espais Estudi";
			this->botLlistaEspais->UseVisualStyleBackColor = false;
			this->botLlistaEspais->Click += gcnew System::EventHandler(this, &EspaiEstudi::botLlistaEspais_Click);
			// 
			// MenuEspaiEstudi
			// 
			this->MenuEspaiEstudi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->MenuEspaiEstudi->Dock = System::Windows::Forms::DockStyle::Top;
			this->MenuEspaiEstudi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MenuEspaiEstudi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->MenuEspaiEstudi->ForeColor = System::Drawing::Color::LightYellow;
			this->MenuEspaiEstudi->Location = System::Drawing::Point(0, 135);
			this->MenuEspaiEstudi->Margin = System::Windows::Forms::Padding(4);
			this->MenuEspaiEstudi->Name = L"MenuEspaiEstudi";
			this->MenuEspaiEstudi->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->MenuEspaiEstudi->Size = System::Drawing::Size(220, 46);
			this->MenuEspaiEstudi->TabIndex = 16;
			this->MenuEspaiEstudi->Text = L"Menú Espais Estudi";
			this->MenuEspaiEstudi->UseVisualStyleBackColor = false;
			this->MenuEspaiEstudi->Click += gcnew System::EventHandler(this, &EspaiEstudi::clickMenuEspai);
			// 
			// MenuEspaisEstudi
			// 
			this->MenuEspaisEstudi->Dock = System::Windows::Forms::DockStyle::Top;
			this->MenuEspaisEstudi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->MenuEspaisEstudi->Location = System::Drawing::Point(0, 135);
			this->MenuEspaisEstudi->Margin = System::Windows::Forms::Padding(4);
			this->MenuEspaisEstudi->Name = L"MenuEspaisEstudi";
			this->MenuEspaisEstudi->Size = System::Drawing::Size(220, 0);
			this->MenuEspaisEstudi->TabIndex = 15;
			this->MenuEspaisEstudi->Text = L"Menu Espais Estudi";
			this->MenuEspaisEstudi->UseVisualStyleBackColor = true;
			this->MenuEspaisEstudi->Click += gcnew System::EventHandler(this, &EspaiEstudi::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(220, 135);
			this->panel1->TabIndex = 14;
			// 
			// EspaiEstudi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1100, 618);
			this->Controls->Add(this->panelSideEspaiEstudi);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"EspaiEstudi";
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Text = L"EspaiEstudi";
			this->Load += gcnew System::EventHandler(this, &EspaiEstudi::EspaiEstudi_Load);
			this->panelSideEspaiEstudi->ResumeLayout(false);
			this->panelSubmenuEspaiEstudi->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void EspaiEstudi_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void espai_estudi_btn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}

//Boton menu Espais
private: System::Void clickMenuEspai(System::Object^ sender, System::EventArgs^ e) {
	showSubMenu(panelSubmenuEspaiEstudi);
}

//Boton Crear Espais
private: System::Void botCrearEspais_Click(System::Object^ sender, System::EventArgs^ e) {
	//hideSubmenu();
}

//Boton Eliminar Espais
private: System::Void botEliminarEspai_Click(System::Object^ sender, System::EventArgs^ e) {
	//hideSubmenu();
}

//Boton Llista espais
private: System::Void botLlistaEspais_Click(System::Object^ sender, System::EventArgs^ e) {
	//hideSubmenu();
}

//Boton Modificar espais
private: System::Void botModificarEspai_Click(System::Object^ sender, System::EventArgs^ e) {
	//hideSubmenu();
}

//Boton PERFIL PROVEIDOR - NO IMPLEMENTAR ENCARA
private: System::Void botPerfilProveidor_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
