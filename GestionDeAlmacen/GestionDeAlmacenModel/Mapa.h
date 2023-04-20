#pragma once
#include "Interseccion.h"
#include "Pasillo.h"
using namespace System;
using namespace System::Collections::Generic;

namespace GestionDeAlmacenMode {

}
public ref class Mapa
{
public:
	Mapa();
	Mapa(int posxinicial_r1, int posyinicial_r1, int posxinicial_r2, int posyinicial_r2, List<Interseccion^>^ listaIntersecciones, List<Pasillo^>^ listaPasillo);
	void GenerarRuta();
	void AsignarPesosCamino();
	void AsignarPesosRobot();


private:
	int posxinicial_r1;
	int posyinicial_r1;
	int posxinicial_r2;
	int posyinicial_r2;
	List<Interseccion^>^ listaIntersecciones;
	List<Pasillo^>^ listaPasillo;

};

