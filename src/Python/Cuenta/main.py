from claseCuenta import Cuenta

# Creación del objeto
Cuenta1 = Cuenta("Jane Green", 50.00)
Cuenta2 = Cuenta("John Blue", -7.53)

# Saldo inicial de cada objeto
print(f"Saldo de {Cuenta1.get_nombre()}: ${Cuenta1.get_saldo()}")
print(f"Saldo de {Cuenta2.get_nombre()}: ${Cuenta2.get_saldo()}")

#Depositar en Cuenta1
deposito = float(input("Ingrese la cantidad de deposito a la cuenta 1: "))
Cuenta1.montoDeposito(deposito)

# Mostrar saldos
print(f"Saldo de {Cuenta1.get_nombre()}: ${Cuenta1.get_saldo()}")
print(f"Saldo de {Cuenta2.get_nombre()}: ${Cuenta2.get_saldo()}")

#Depositar en Cuenta2
deposito = float(input("Ingrese la cantidad de deposito a la cuenta 2: "))
Cuenta2.montoDeposito(deposito)

# Mostrar saldos
print(f"Saldo de {Cuenta1.get_nombre()}: ${Cuenta1.get_saldo()}")
print(f"Saldo de {Cuenta2.get_nombre()}: ${Cuenta2.get_saldo()}")
