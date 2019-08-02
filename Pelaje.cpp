#ifndef PELAJE_CPP
#define	PELAJE_CPP
	#include<string>
	using namespace std;
	class Pelaje{
		private:
			string color;
			int grosor;
			int largo;
		
		public: Pelaje(){
		
			
		}
		public: string getColor() {
        	return color;
    	}

	    public: void setColor(string color) {
	        this->color = color;
	    }
	
	    public: int getGrosor() {
	        return grosor;
	    }
	
	    public: void setGrosor(int grosor) {
	        this->grosor = grosor;
	    }
	
	    public: int getLargo() {
	        return largo;
	    }
	
	    public: void setLargo(int largo) {
	        this->largo = largo;
	    }	
		
		~Pelaje(){
			
		}
			
	};
#endif
