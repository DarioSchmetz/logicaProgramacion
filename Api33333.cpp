 #include<iostream>
using namespace std;

//delclaro los dato de la funcion
	int calcularPrecioDeVenta(int precioCompra,int stock);
int calcularPorcentaje (int precioCompra,int stock);

int main() {
	//declaraco areglo
	int producto [5] [4];
	int costo=0,precioventa=0;
//pueblo mi vector
for(int i=0; i<5;i++) {
	
	
	cout<<"ingresar precioCompra:"<<i+1<<" " ;
	// lee los datos
	cin>>producto[i] [0];
	// Pido los datos

	cout<<"ingresar la cantidad Stock:"<<i+1<<" " ;
		// lee los datos

		cin>>producto[i] [1];
		producto[i][2]=calcularPorcentaje(producto[i][0], producto[i][1] );
		producto[i][3]=calcularPrecioDeVenta(producto[i][0] ,producto[i][1]);
		cout<<endl;
	}
	for(int i=0; i<5;i++) {
		cout<<"Producto"<<i+1<<endl;
		cout<<"precioCompra"   ":"<<producto[i][0]<<endl;
		cout<<"stock   "":"<<producto[i][1]<<endl;
	    cout<<"ganancia"   ":"<<producto[i][2]<<endl;
	    cout<<"precioventa"   ":"<<producto[i][3]<<endl<<endl;



		
		
	}
	for(int i=0; i<5;i++){
		
		costo=costo+producto[i][0];
	precioventa=precioventa+producto[i][3];

	}
	cout<< "el precio total compra de producto es "<< costo<<endl;
    	cout<< "el precio total venta de producto es "<<precioventa<<endl;

}
//proceso de la funcion.
	int calcularPrecioDeVenta(int precioCompra,int stock){
int resultado;

	
	if (stock>=100 && precioCompra<1500 || stock<50) {
		resultado = (precioCompra*1.21)*1.15;
	} else {
		resultado = (precioCompra*1.21)*1.20;
	}
	//retorna los datos
	return resultado;
	
}

int calcularPorcentaje (int precioCompra,int stock){
	int ganancia;
		if (stock>=100 && precioCompra<1500 || stock<50) {
     ganancia=15;
	}else {
		
		ganancia=20;
	}
			return ganancia;

}

