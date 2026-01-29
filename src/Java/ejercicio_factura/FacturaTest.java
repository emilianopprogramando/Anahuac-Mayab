// package ejercicio_factura;

import java.util.Scanner;

public class FacturaTest {

    public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);
        Factura factura = new Factura();

        System.out.print("Ingrese el número de pieza: ");
        factura.numPieza = entrada.nextLine();

        System.out.print("Ingrese la descripción de la pieza: ");
        factura.descPieza = entrada.nextLine();

        System.out.print("Ingrese la cantidad: ");
        factura.cantidadPieza = entrada.nextInt();

        System.out.print("Ingrese el precio por artículo: ");
        factura.precioPieza = entrada.nextDouble();

        double total = factura.obtenerMontoFactura();

        System.out.println("Pieza: " + factura.numPieza);
        System.out.println("Descripción: " + factura.descPieza);
        System.out.println("Cantidad: " + factura.cantidadPieza);
        System.out.println("Precio: $" + factura.precioPieza);
        System.out.println("Monto total: $" + total);

        entrada.close();
    }
}
