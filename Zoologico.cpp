#ifndef ZOOLOGICO_CPP
#define ZOOLOGICO_CPP
	#include"Animal.cpp"
	#include<vector>
	class Zoologico{
		private:
			string nombre;
			int tamanio;
			int capacidad_personas;
			vector<Animal*> articos;
			vector<Animal*> deserticos;
			vector<Animal*> tropicales;
			vector<Animal*> sabana;
			vector<Animal*> temp;
		
		public:Zoologico(){
			
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
	
	    public: int getCapacidad_personas() {
	        return capacidad_personas;
	    }
	
	    public: void setCapacidad_personas(int capacidad_personas) {
	        this->capacidad_personas = capacidad_personas;
	    }
	    public:void transferir(){//utiliza temp para enviar enviar los animales a sus respectivas listas
	    	if(temp.empty()){
	    		cout<<"\naun no hay registros para poder ser agregados al zoologico\n";
			}else{
				for(int i=0;i<temp.size();i++){//temp size
		    		switch(temp.at(i)->getTipo().at(0)){
		    			case'a':
		    				articos.push_back(temp.at(i));
		    				break;
		    			case'd':
		    				deserticos.push_back(temp.at(i));
		    				break;
		    			case't':
		    				tropicales.push_back(temp.at(i));
		    				break;
						case's':
							sabana.push_back(temp.at(i));
		    				break;		
		    			default:
							cout<<"\n\nno animal added for pos "<<i<<" of vector temp\n";	
					}
				}		
			}
			
		}
		public:void show_articos(){
			if(!articos.empty()){
				for(int i=0;i<articos.size();i++){
					articos.at(i)->print();
					cout<<endl;
				}	
			}else{
				cout<<"\nno hay registros en articos\n";
			}
			
		}
		
		public:void show_deserticos(){
			if(!deserticos.empty()){
				for(int i=0;i<deserticos.size();i++){
					deserticos.at(i)->print();
					cout<<endl;
				}	
			}else{
				cout<<"\nno hay registros en deserticos\n";
			}
			
		}
		public:void show_tropicales(){
			if(!tropicales.empty()){
				for(int i=0;i<tropicales.size();i++){
					tropicales.at(i)->print();
					cout<<endl;
				}	
			}else{
				cout<<"\nno hay registros en tropicales\n";
			}
			
		}
		public:void show_sabana(){
			if(!sabana.empty()){
				for(int i=0;i<sabana.size();i++){
					sabana.at(i)->print();
					cout<<endl;
				}	
			}else{
				cout<<"\nno hay registros en sabana\n";
			}
			
		}
		public:void add_temp(Animal* animal){
			temp.push_back(animal);
		}
		public:void show_temp(){
			
			temp.at(0)->print();
			
		}
		~Zoologico(){
			
		}
	};
#endif
