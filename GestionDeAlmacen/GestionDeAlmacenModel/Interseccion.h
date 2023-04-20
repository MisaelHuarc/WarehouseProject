#pragma once
#include "Cinta.h"
using namespace System;
using namespace System::Collections::Generic;

namespace GestionDeAlmacenModel {
	public ref class Interseccion
	{
	public:
		Interseccion();
		Interseccion(int posicionx, int posiciony, List<Cinta^>^ listaCinta);
		void SetPosicion();
		int GetPosicionx();
		int GetPosiciony();

	private:
		int posicionx;
		int posiciony;
		List<Cinta^>^ listaCinta;
	};
}


