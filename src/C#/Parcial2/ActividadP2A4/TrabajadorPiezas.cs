using System;

public class TrabajadorPiezas : Empleado
{
    private double salario;
    private int piezas;

    public TrabajadorPiezas(string nombre, string apellido, string nss, double salarioBase, int piezasHechas)
        : base(nombre, apellido, nss)
    {
        EstablecerSalario(salarioBase);
        EstablecerPiezas(piezasHechas);
    }

    public void EstablecerSalario(double salarioBase) { salario = (salarioBase < 0.0) ? 0.0 : salarioBase; }
    public double ObtenerSalario() { return salario; }
    public void EstablecerPiezas(int piezasHechas) { piezas = (piezasHechas < 0) ? 0 : piezasHechas; }
    public int ObtenerPiezas() { return piezas; }

    public override double Ingresos() { return ObtenerSalario() * ObtenerPiezas(); }

    public override string ToString()
    {
        return "trabajador por piezas: " + base.ToString() + "\nsalario por pieza: $" + ObtenerSalario() + "; piezas producidas: " + ObtenerPiezas();
    }
}
