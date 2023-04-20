#pragma once
using namespace System;

namespace GestionDeAlmacenModel {
	public ref class ReporteError {
	private:
		int id;
		int dia;
		int mes;
		int anho;
		int hora;
		int minuto;
		String^ descripcion;
		String^ nombreProducto;
		int idRobot;
		int cantidad;
		int tipoOperacion;
	public:
		ReporteError();
		ReporteError(int id, int dia, int anho, int hora, int minuto, String^ descripcion, String^ nombreProducto, int idRobot, int cantidad, int tipoOperacion);
		void SetFecha();
		int GetFecha();
		void SetEstado();
		int GetEstado();
		void SetDescripcion();
		String^ GetDescripcion();
		void SetError();
		int GetError();
		void AgregarReporteError();
	};
}