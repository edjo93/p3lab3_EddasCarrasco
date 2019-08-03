#include<iostream>
#include"Zoologico.cpp"
int main(){
	//iniciamos el zoologico
	Zoologico*zoologico=new Zoologico();
	string stringvalue;
	int intvalue;
	cout<<"\nDatos del Zoologico\n"<<endl;
	cout<<"\nnombre: ";
	getline(cin,stringvalue);
	zoologico->setNombre(stringvalue);
	cout<<"\ncapacidad de personas: ";
	cin>>intvalue;
	zoologico->setCapacidad_personas(intvalue);
	cout<<"\ntamaño: ";
	cin>>intvalue;
	zoologico->setTamanio(intvalue);
	
	
	//mostramos el menu
	int opcion;
	do{
		cout<<"\n\nzoologico "<<zoologico->getNombre()<<"!\n1 - agregar animal\n2 - transferir al zoologico\n3 - listar animales por tipo\n?:  ";
		cin>>opcion;
		switch(opcion){
			case 1:
				{
					
					//creamos un animal
					Animal*animal=new Animal();
					cout<<"\nagregando animal...\n";
					cout<<"\nOBS: los datos deben ser ingresados en letras minusculas y sin tildes\n";
					cout<<"\nnombre especie: ";
					getline(cin,stringvalue);
					getline(cin,stringvalue);
					animal->setEspecie(stringvalue);
					cout<<"\nnombre animal: ";
					getline(cin,stringvalue);
					animal->setNombre(stringvalue);
					cout<<"\ntamaño: ";
					cin>>intvalue;
					animal->setTamanio(intvalue);
					cout<<"\ntipo: "	;
					getline(cin,stringvalue);
					getline(cin,stringvalue);
					animal->setTipo(stringvalue);
					cout<<"\nnumero de patas: ";
					cin>>intvalue;
					animal->getPatas()->setCantidad_patas(intvalue);
					cout<<"\nlargo de patas: ";
					cin>>intvalue;
					animal->getPatas()->setLargo_patas(intvalue);
					cout<<"\ntipo de patas: ";
					getline(cin,stringvalue);
					getline(cin,stringvalue);
					animal->getPatas()->setTipo_patas(stringvalue);
					cout<<"\ncolor de pelaje :";
					getline(cin,stringvalue);
					animal->getPelaje()->setColor(stringvalue);
					cout<<"\ngrosor de pelaje :";
					cin>>intvalue;
					animal->getPelaje()->setGrosor(intvalue);
					cout<<"\nlargo de pelaje :";
					cin>>intvalue;
					animal->getPelaje()->setLargo(intvalue);
					cout<<"\ncolor de ojos: ";
					getline(cin,stringvalue);
					getline(cin,stringvalue);
					animal->getOjos()->setColor(stringvalue);
					cout<<"\nvision nocturna?: ";
					getline(cin,stringvalue);
					animal->getOjos()->setVision_nocturna(stringvalue);
					cout<<"\ntamaño de orejas: ";
					cin>>intvalue;
					animal->getOrejas()->setTamanio(intvalue);
					cout<<"\ncapacidad de audicion: ";
					getline(cin,stringvalue);
					getline(cin,stringvalue);
					animal->getOrejas()->setCapacidad_audicion(stringvalue);
					cout<<"\nlargo de cola: ";
					cin>>intvalue;
					animal->getCola()->setLargo(intvalue);
					cout<<"\nes peluda?(si/no): ";
					getline(cin,stringvalue);
					getline(cin,stringvalue);
					animal->getCola()->setPeluda(stringvalue);
					
					//enviamos el animal al vector temporal
					zoologico->add_temp(animal);
					
					/*
					for(int i=0;i<1;i++){
						Animal*animal=new Animal()	;
						animal->setEspecie("iguana");
						animal->setNombre("bob");
						animal->setTipo("artico");
						zoologico->add_temp(animal);
					}
					for(int i=0;i<2;i++){
						Animal*animal=new Animal()	;
						animal->setEspecie("iguana");
						animal->setNombre("bob");
						animal->setTipo("tropical");
						zoologico->add_temp(animal);
					}
					for(int i=0;i<3;i++){
						Animal*animal=new Animal()	;
						animal->setEspecie("iguana");
						animal->setNombre("bob");
						animal->setTipo("sabana");
						zoologico->add_temp(animal);
					}
					for(int i=0;i<4;i++){
						Animal*animal=new Animal()	;
						animal->setEspecie("iguana");
						animal->setNombre("bob");
						animal->setTipo("desertica");
						zoologico->add_temp(animal);
					}
					*/
				}
				
				break;
			case 2:
				{
					cout<<"\ntransfiriendo.....";
					zoologico->transferir();
					cout<<"\ndone!"	;
				}
				
				break;
			case 3:
				cout<<"\n--articos--";
				zoologico->show_articos();
				cout<<"\n--deserticos--";
				zoologico->show_deserticos();
				cout<<"\n--tropicales--";
				zoologico->show_tropicales();
				cout<<"\n--sabana--";
				zoologico->show_sabana();
				break;
			case 4:	
				cout<<"\nhasta luego!\n";
				break;
			default:
				cout<<"\nno se ha ingresado una opcion correcta\n";	
		}
		
	}while(opcion!=4);
	
	
	
	
	
}
