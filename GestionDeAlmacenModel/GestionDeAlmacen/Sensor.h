#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace GestionDeAlmacenModel {
	public ref class Sensor {
	private:
		int id;
		String^ tipo;
		
	public:
		Sensor();
		Sensor(int id, String^ tipo);
		void DetectarLinea();
		void DetectarInterseccion();
		void ReportarError();
		int GetId();
		void SetId();
	};
	

}
	