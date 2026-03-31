using System;

public class EmpleadoAsalariado : Empleado
{
    private double salarioSemanal;

    public EmpleadoAsalariado(string nombre, string apellido, string nss, double salario)
        : base(nombre, apellido, nss)
    {
        EstablecerSalarioSemanal(salario);
    }

    public void EstablecerSalarioSemanal(double salario)
    {
        salarioSemanal = salario < 0.0 ? 0.0 : salario;
    }

    public double ObtenerSalarioSemanal() { return salarioSemanal; }

    public override double Ingresos() { return ObtenerSalarioSemanal(); }

    public override string ToString()
    {
        return "empleado asalariado: " + base.ToString() + "\nsalario semanal: $" + ObtenerSalarioSemanal();
    }
}
