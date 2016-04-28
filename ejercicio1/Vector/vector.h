#ifndef vectorH
#define vectorH

class Vector {

    public:
        Vector();
        Vector(float a, float o);
        bool igualX(const Vector v);
        bool igualY(const Vector v);
        float modulo() const;
        float prodEscalar(const Vector v) const;
        void resta(const Vector v);

        float getAbsisa() const {return abscisa;};
        float getOrdenada() const {return ordenada;};

        void setAbsisa(float nuevaAbsisa) {abscisa = nuevaAbsisa;};
        void setOrdenada(float nuevaOrdenada) {ordenada = nuevaOrdenada;};

    private:
        float abscisa;
        float ordenada;
};

#endif

