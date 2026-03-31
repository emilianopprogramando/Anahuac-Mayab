using System;

public class EmpleadoPorHoras : Empleado
{
    private double sueldo;
    private double horas;

    public EmpleadoPorHoras(string nombre, string apellido, string nss, double sueldoPorHoras, double horasTrabajadas)
        : base(nombre, apellido, nss)
    {
        EstablecerSueldo(sueldoPorHoras);
        EstablecerHoras(horasTrabajadas);
    }

    public void EstablecerSueldo(double sueldoPorHoras) { sueldo = (sueldoPorHoras < 0.0) ? 0.0 : sueldoPorHoras; }
    public double ObtenerSueldo() { return sueldo; }
    public void EstablecerHoras(double horasTrabajadas) { horas = ((horasTrabajadas >= 0.0) && (horasTrabajadas <= 168.0)) ? horasTrabajadas : 0.0; }
    public double ObtenerHoras() { return horas; }

    public override double Ingresos()
    {
        if (ObtenerHoras() <= 40)
            return ObtenerSueldo() * ObtenerHoras();
        else
            return 40 * ObtenerSueldo() + (ObtenerHoras() - 40) * ObtenerSueldo() * 1.5;
    }

    public override string ToString()
    {
        return "empleado por horas: " + base.ToString() + "\nsueldo por hora: $" + ObtenerSueldo() + "; horas trabajadas: " + ObtenerHoras();
    }
}
