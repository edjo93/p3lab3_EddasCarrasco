#ifndef OJOS_CPP
#define	OJOS_CPP
	#include<string>
	using namespace std;
	class Ojos{
		private:
			string color;
			string vision_nocturna;
			
		public: Ojos(){
			
		}
			
		public: string getColor() {
        	return color;
    	}

	    public: void setColor(string color) {
	        this->color = color;
	    }
	
	    public: string getVision_nocturna() {
	        return vision_nocturna;
	    }
	
	    public: void setVision_nocturna(string vision_nocturna) {
	        this->vision_nocturna = vision_nocturna;
	    }	
		
		
		~Ojos()	{
			
		}
	};
#endif
