using System;

public abstract class Empleado
{
    private string primerNombre;
    private string apellidoPaterno;
    private string numeroSeguroSocial;

    public Empleado(string nombre, string apellido, string nss)
    {
        primerNombre = nombre;
        apellidoPaterno = apellido;
        numeroSeguroSocial = nss;
    }

    public void EstablecerPrimerNombre(string nombre) { primerNombre = nombre; }
    public string ObtenerPrimerNombre() { return primerNombre; }
    public void EstablecerApellidoPaterno(string apellido) { apellidoPaterno = apellido; }
    public string ObtenerApellidoPaterno() { return apellidoPaterno; }
    public void EstablecerNumeroSeguroSocial(string nss) { numeroSeguroSocial = nss; }
    public string ObtenerNumeroSeguroSocial() { return numeroSeguroSocial; }

    public override string ToString()
    {
        return ObtenerPrimerNombre() + " " + ObtenerApellidoPaterno() + "\nnumero de seguro social: " + ObtenerNumeroSeguroSocial();
    }

    public abstract double Ingresos();
}
