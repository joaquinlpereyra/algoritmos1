#ifndef automovilH
#define automovilH

class Automovil {

    public:
        Automovil();
        Automovil(int cap, int litros) {cap = capTanque, litros = litrosEnTanque;};
        int capacidadDelTanque() const {return capEnTanque;};
        int litrosEnElTanque() const {return litrosEnTanque;};
        void llenalo();

        void setLitros(int litros) {litrosEnTanque = litros;};
        
    private:
        int capTanque;
        int litrosEnTanque;
};

#endif
