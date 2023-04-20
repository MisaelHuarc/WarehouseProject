#pragma once
#include "Sensor.h"

using namespace System;
using namespace System::Collections::Generic;

namespace GestionDeAlmacenModel {
	public ref class Robot {
	private: 
		int posicionx;
		int posiciony;
		String^ direccion;
		String^ estado;
		int id;
		List <Sensor^>^ listaSensores;
	public: 
		Robot();
		Robot(int posicionx, int posiciony, String^ direccion, String^ estado);
		void Moverse();
		void Girar();
		void Apagar();
		void Parar();
		void DetectarInterseccion();
		void ReportarEstado();
		void ActualizarPosicion();
		void SetId();
		void GetId();
	};
}