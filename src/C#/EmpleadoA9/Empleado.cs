using System;

public class Empleado
{
    private string Nombre;
    private int anioContratacion;
    private double salario;

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
