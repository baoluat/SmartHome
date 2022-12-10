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
	SmartHome::Home homeForm;
	loginForm.ShowDialog();
	while (!(loginForm.exit || homeForm.exit == true))
	{
		if (loginForm.login)
		{
			homeForm.ShowDialog();
			loginForm.login = false;
			if (homeForm.backtologin) {
				loginForm.ShowDialog();
				homeForm.backtologin = false;
			}
		}
	}
}
