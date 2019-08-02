#ifndef ANIMAL_CPP
#define ANIMAL_CPP
	#include"Patas.cpp"
	#include"Pelaje.cpp"
	#include"Ojos.cpp"
	#include"Orejas.cpp"
	#include"Cola.cpp"
	class Animal{
		private:
			
			string especie;
			string nombre;
			int tamanio;
			string tipo;
			Patas*patas;
			Pelaje*pelaje;
			Ojos*ojos;
			Orejas*orejas;
			Cola*cola;
		public:Animal(){
			//se reserva memoria para los objetos de esta clase	
			patas=new Patas();
			pelaje=new Pelaje();
			ojos=new Ojos();
			orejas=new Orejas();
			cola=new Cola();
		}
		public: string getEspecie() {
        	return especie;
    	}

	    public: void setEspecie(string especie) {
	        this->especie = especie;
	    }
	
	    public: string getNombre() {
	        return nombre;
	    }
	
	    public: void setNombre(string nombre) {
	        this->nombre = nombre;
	    }
	
	    public: int getTamanio() {
	        return tamanio;
	    }
	
	    public: void setTamanio(int tamanio) {
	        this->tamanio = tamanio;
	    }
	
	    public: string getTipo() {
	        return tipo;
	    }
	
	    public: void setTipo(string tipo) {
	        this->tipo = tipo;
	    }
		
		void setPatas(Patas* patas){
			this->patas=patas;
		}
		Patas* getPatas(){
			return patas;
		}
		void setPelaje(Pelaje* pelaje){
			this->pelaje=pelaje;
		}
		Pelaje* getPelaje(){
			return pelaje;
		}
		void setOjos(Ojos* ojos){
			this->ojos=ojos;
		}
		Ojos* getOjos(){
			return ojos;
		}
		void setOrejas(Orejas* orejas){
			this->orejas=orejas;
		}
		Orejas* getOrejas(){
			return orejas;
		}
		void setCola(Cola* cola){
			this->cola=cola;
		}
		Cola* getCola(){
			return cola;
		}
		~Animal(){
			
		}
	};
#endif
