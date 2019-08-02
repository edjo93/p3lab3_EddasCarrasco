#ifndef COLA_CPP
#define	COLA_CPP
	#include<string>
	using namespace std;
	class Cola{
		private:
			int largo;
			string peluda;
			
		public: Cola(){
			
		}	
			
		public: int getLargo() {
        	return largo;
    	}

	    public: void setLargo(int largo) {
	        this->largo = largo;
	    }
	
	    public: string getPeluda() {
	        return peluda;
	    }
	
	    public: void setPeluda(string peluda) {
	        this->peluda = peluda;
	    }	
			
			
		~Cola(){
			
		}
		
			
	};
#endif
