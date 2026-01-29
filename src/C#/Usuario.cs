using System;

class Usuario
{
    // Atributos
    public string nombre = "";
    public string apellidos = "";
    public int edad;

    // Constructor por defecto
    public Usuario()
    {
        this.nombre = "";
        this.apellidos = "";
        this.edad = 0;
    }

    // Constructor
    public Usuario(string nombre, string apellidos, int edad)
    {
        this.nombre = nombre;
        this.apellidos = apellidos;
        this.edad = edad;
    }

    // Métodos
    public void hacerReporte()
    {
        Console.WriteLine("El usuario " + this.nombre + " esta iniciando sesion.");
    }

    public void iniciarSesion() 
    {
        Console.WriteLine("El usuario " + this.nombre + " ha cerrado la sesion.");
    }

    public void cerrarSesion() 
    {
        Console.WriteLine("Reporte de usuario");
        Console.WriteLine("Nombre completo: " + this.nombre + " " + this.apellidos);
        Console.WriteLine("Edad: " + this.edad);
    }
}
