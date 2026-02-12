class Cuenta:

    # Declaración de los atributos es en el método __init__
    def __init__(self, nombre="", saldo=0.0):
        self.nombre = nombre
        if saldo > 0.0: # Si el saldo es mayor a 0.0 se asigna a la variable
            self.saldo = saldo
        else:
            self.saldo = 0.0

    # Métodos
    def montoDeposito(self, deposito=0.0):
        if deposito > 0.0:
            self.saldo += deposito
    
    def set_nombre(self, nombre):
        self.nombre = nombre

    def get_nombre(self):
        return self.nombre

    def get_saldo(self):
        return round(self.saldo,2)
    
