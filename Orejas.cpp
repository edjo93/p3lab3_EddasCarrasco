#ifndef OREJAS_CPP
#define	OREJAS_CPP
	#include<string>
	using namespace std;
	class Orejas{
		private:
			int tamanio;
			string capacidad_audicion;
			
		public: Orejas()	{
			
		}
		public: int getTamanio() {
        	return tamanio;
    	}

	    public: void setTamanio(int tamanio) {
	        this->tamanio = tamanio;
	    }
	
	    public: string getCapacidad_audicion() {
	        return capacidad_audicion;
	    }
	
	    public: void setCapacidad_audicion(string capacidad_audicion) {
	        this->capacidad_audicion = capacidad_audicion;
	    }	
			
		~Orejas(){
			
		}
		
			
	};
#endif
