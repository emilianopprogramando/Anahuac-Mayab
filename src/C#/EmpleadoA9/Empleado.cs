using System;

public class Empleado
{
    private string nombre;
    private int anioContratacion;
    private double salario;

    public Empleado()
    {
        this.nombre = "NULL";
        this.anioContratacion = 0;
        this.salario = 0.0;
    }

    public Empleado(string n, int a, double s)
    {
        this.nombre = n;
        this.anioContratacion = a;
        this.salario = s;
    }

    public toString()
    {
        return this.nombre + "" + this.anioContratacion + "" + this.salario;
    }
}
