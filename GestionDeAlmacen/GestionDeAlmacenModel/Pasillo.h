#pragma once
#include "Estanteria.h"
using namespace System::Collections::Generic;


namespace GestionDeAlmacenModel {
	public ref class Pasillo
	{
	public:
		Pasillo();
		Pasillo(int id, List<Estanteria^>^ listaEstanteria);
		void AgregarPasillo();
		void AgregarInterseccion();
		void ObtenerPasillo();
		void ObtenerInterseccion();
		void ListarPasillo();
		void ListarIntersecciones();
		void SetId();
		int GetId();

	private:
		int id;
		List<Estanteria^>^ listaEstanteria;

	};
}


