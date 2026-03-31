using System;

public class EmpleadoPorComision : Empleado
{
    private double ventasBrutas;
    private double tarifaComision;

    public EmpleadoPorComision(string nombre, string apellido, string nss, double ventas, double tarifa)
        : base(nombre, apellido, nss)
    {
        EstablecerVentasBrutas(ventas);
        EstablecerTarifaComision(tarifa);
    }

    public void EstablecerTarifaComision(double tarifa) { tarifaComision = (tarifa > 0.0 && tarifa < 1.0) ? tarifa : 0.0; }
    public double ObtenerTarifaComision() { return tarifaComision; }
    public void EstablecerVentasBrutas(double ventas) { ventasBrutas = (ventas < 0.0) ? 0.0 : ventas; }
    public double ObtenerVentasBrutas() { return ventasBrutas; }

    public override double Ingresos()
    {
        return ObtenerTarifaComision() * ObtenerVentasBrutas();
    }

    public override string ToString()
    {
        return "empleado por comision: " + base.ToString() + "\nventas brutas: $" + ObtenerVentasBrutas() + "; tarifa de comision: " + ObtenerTarifaComision();
    }
}
