#include "pch.h"

using namespace MySql::Data::MySqlClient;
using namespace std;
using namespace System;

#include "MainScreen.h"
#include "MyForm.h"
#include "Form1.h"
#include "Register.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace System::Windows::Forms;


[STAThread]
int main()
{
  //Manera de conectarse:
  //Connexió amb la BD gratis
  // String^ connectionString = "Server=sql11.freemysqlhosting.net;Database=sql11690082;User ID=sql11690082;Password=\"pkc5K6vT9T\"; Port = 3306; ";

  //Connexió amb la BD Ubiwan
  //String^ connectionString = "Server=ubiwan.epsevg.upc.edu;Database=amep08;User ID=amep08;Password=\"ooYinie9bohr-\"; Port = 3306; ";
  //MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew AMEP_DB::MyForm());

  

  return 0;
}