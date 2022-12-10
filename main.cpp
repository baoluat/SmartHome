#include <iostream>
#include <fstream>
#include "Login.h"
#include "Home.h"
#include "LivingRoom.h"


using namespace std;
using namespace System;
using namespace System::Windows::Forms;


void main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	
	SmartHome::Login loginForm;
	loginForm.ShowDialog();
	
}
