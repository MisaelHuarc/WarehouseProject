#pragma once
using namespace System;

namespace GestionDeAlmacenModel {
	public ref class Cinta{
	public:
		Cinta();
		Cinta(int id, String^ color, int tipo, int posicionx, int posiciony, int estado);
		void SetColor();
		String GetColor();
		void SetTipo();
		int GetTipo();
		void SetPosicionx();
		int GetPosicionx();
		void SetPosiciony();
		int GetPosiciony();

	private:
		int id;
		String^ color;
		int tipo;
		int posicionx;
		int posiciony;
		int estado;
	};
}


