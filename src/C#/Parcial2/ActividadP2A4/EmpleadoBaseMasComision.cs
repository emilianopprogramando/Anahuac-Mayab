using System;

public class EmpleadoBaseMasComision : EmpleadoPorComision
{
    private double salarioBase;

    public EmpleadoBaseMasComision(string nombre, string apellido, string nss, double ventas, double tarifa, double salario)
        : base(nombre, apellido, nss, ventas, tarifa)
    {
        EstablecerSalarioBase(salario);
    }

    public void EstablecerSalarioBase(double salario) { salarioBase = (salario < 0.0) ? 0.0 : salario; }
    public double ObtenerSalarioBase() { return salarioBase; }

    public override double Ingresos() { return ObtenerSalarioBase() + base.Ingresos(); }

    public override string ToString()
    {
        return "con salario base " + base.ToString() + "\nsalario base: $" + ObtenerSalarioBase();
    }
}
