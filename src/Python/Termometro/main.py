from claseTermometro import Termometro

def main():

    t1 = Termometro()
    print("Termómetro 1 (Aleatorio)")
    t1.mostrarTemperaturas()

    try:
        temp_usuario = float(input("Ingrese una temperatura en °C: "))
        t2 = Termometro(temp_usuario)

        print("\nTermómetro 2 (Usuario)")
        t2.mostrarTemperaturas()

    except ValueError:
        print("Entrada inválida. Debe ingresar un número.")
