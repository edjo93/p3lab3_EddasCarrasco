#ifndef PATAS_CPP
#define	PATAS_CPP
	#include<string>
	using namespace std;
	class Patas{
		private:
			
			int cantidad_patas;
			int largo_patas;
			string tipo_patas;
		
		public: Patas(){
			
		}
		public: int getCantidad_patas() {
        	return cantidad_patas;
	    }
	
	    public: void setCantidad_patas(int cantidad_patas) {
	        this->cantidad_patas = cantidad_patas;
	    }
	
	    public: int getLargo_patas() {
	        return largo_patas;
	    }
	
	    public: void setLargo_patas(int largo_patas) {
	        this->largo_patas = largo_patas;
	    }
	
	    public: string getTipo_patas() {
	        return tipo_patas;
	    }
	
	    public: void setTipo_patas(string tipo_patas) {
	        this->tipo_patas = tipo_patas;
	    }
		
		~Patas(){
			
		}
			
	};
#endif
