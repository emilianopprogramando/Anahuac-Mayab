using System;

public class Empleado
{
    public string Nombre;
    public int anioContratacion;
    public double salario;

    public Empleado()
    {
        this.Nombre = "NULL";
        this.anioContratacion = 0;
        this.salario = 0.0;
    }

    public Empleado(string n, int a, double s)
    {
        this.Nombre = n;
        this.anioContratacion = a;
        this.salario = s;
    }

    public void imprimir()
    {
        Console.WriteLine("\nNombre: " + this.Nombre);
        Console.WriteLine("Anio de Contratacion: " + this.anioContratacion);
        Console.WriteLine("Salario: " + this.salario);
    }
}
