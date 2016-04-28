#ifndef automovilH
#define automovilH

class Automovil {

    public:
        Automovil();
        Automovil(int cap, int litros) {capTanque = cap; litrosEnTanque = litros;};
        int capacidadDelTanque() const {return capTanque;};
        int litrosEnElTanque() const {return litrosEnTanque;};
        void llenalo();

        void setLitros(int litros) {litrosEnTanque = litros;};
        
    private:
        int capTanque;
        int litrosEnTanque;
};

#endif
