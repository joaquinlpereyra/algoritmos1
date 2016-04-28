#ifndef surtidorH
#define surtidorH

class Surtidor {

    public:
        Surtidor();
        Surtidor(int litros, int precio) {ltsDisponibles = litros; precioXLitro = precio;};
        int litrosDisponibles() const {return ltsDisponibles;};
        int precioPorLitro() const {return precioXLitro;};
        void expender(int cant);

        void setLtsDisponibles(int cant) {ltsDisponibles = cant;};
        
    private:
        int ltsDisponibles;
        int precioXLitro;
};

#endif
