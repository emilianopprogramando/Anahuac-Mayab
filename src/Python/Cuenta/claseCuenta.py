class Cuenta:

    # Declaración de los atributos es en el método __init__
    def __init__(self, nombre="", saldo=0.0):
        self.nombre = nombre
        if saldo > 0.0: # Si el saldo es mayor a 0.0 se asigna a la variable
            self.saldo = saldo
        else:
            self.saldo = 0.0

    @property
    def nombre(self): #get de __nombre
        return self.__nombre

    @nombre.setter
    def nombre(self, nombre): #set de __nombre
        self.__nombre = nombre

    @property
    def saldo(self): #get de __saldo
        return self.__saldo

    @saldo.setter
    def saldo(self, saldo): #set de __saldo
        self.__saldo = saldo

    # Método
    def deposito(self, montoDeposito=0.0):
        if montoDeposito > 0.0:
            self.saldo += montoDeposito
    
