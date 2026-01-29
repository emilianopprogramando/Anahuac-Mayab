using System;

class Prueba
{
    static void Main()
    {
        // nombreClase nombreObjeto = new nombreClase()
        Usuario maestra = new Usuario();
        Usuario alumno = new Usuario("Tom", "Cruise", 64);

        // Asignar valores a los atributos
        // maestra.nombre = "Liz";
        // maestra.apellidos = "Hernandez Olan";
        // maestra.edad = 42;
        
        // Llamada (invocación) de los métodos
        maestra.iniciarSesion();
        maestra.hacerReporte();
        maestra.cerrarSesion();

        Console.WriteLine();

        alumno.iniciarSesion();
        alumno.hacerReporte();
        alumno.cerrarSesion();
    }
}