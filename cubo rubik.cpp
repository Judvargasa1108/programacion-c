#include <iostream>
class Matrix3x3 {
private:
    int  f[3][3] = {{1, 2, 3},{4, -1, 5},{6, 7, 8}};
    int  r[3][3] = {{9, 10, 11},{12, -2, 13},{14, 15, 16}};
    int  l[3][3] = {{17, 18, 19},{20, -3, 21},{22, 23, 24}};    
    int  d[3][3] = {{25, 26, 27},{28, -4, 29},{30, 31, 32}};  
    int  u[3][3] = {{33, 34, 35},{36, -5, 37},{38, 39, 40}};  
    int  b[3][3] = {{41, 42, 43},{44, -6, 45},{46, 47, 48}};  
public:
void LyR(){
    int temp5, temp6, temp7, temp8;
    for(int k = 0; k < 3; k++){
        temp5 = f[k][0];
        temp6 = f[1][k];
        temp7 = f[k][2];

        f[k][0] = u[k][0];
        f[k][2] = u[k][2];

    }
}
void UyD(){
  // Usamos dos variables temporales para guardar los valores que se van a intercambiar
  int temp1, temp2, temp3, temp4;
  // Recorremos solo la primera y la última fila de cada cara
  for(int k = 0 ; k < 3 ; k++) {
      temp1 = f[0][k]; // Guardamos el valor de la fila superior de la cara frontal
      temp2 = f[2][k]; // Guardamos el valor de la fila inferior de la cara frontal
      temp3 = r[0][k]; // Guardamos el valor de la fila superior de la cara frontal
      temp4 = r[2][k]; // Guardamos el valor de la fila superior de la cara frontal 

      f[0][k] = l[0][k]; // Ponemos el valor de la columna derecha de la cara izquierda en la fila superior
      f[2][k] = l[2][k]; // Ponemos el valor de la columna izquierda de la cara izquierda en la fila inferior
      
      r[0][k] = temp1; // Ponemos el valor de la columna derecha de la cara izquierda en la fila superior
      r[2][k] = temp2;

      l[0][k] = b[0][k]; // Ponemos el valor de la columna derecha de la cara izquierda en la fila superior
      l[2][k] = b[2][k];

      b[0][k] = temp3;
      b[2][k] = temp4;
    }
}
  
void rotateFront(int caras){
    int aux[3][3];
    int rota;
    
    for (int i = 0; i < 3; i++){
        int j=0;
        int n=2-i; 
        for (j; j < 3; j++){
                int a=2-j;
                if (caras==-1){rota= f[j][i];}
                if (caras==-2){rota= r[j][i];}
                if (caras==-3){rota= l[j][i];}
                if (caras==-4){rota= d[j][n];}
                if (caras==-5){rota= u[j][n];}
                if (caras==-6){rota= b[j][i];}
                std::cout << rota<< " ";}
                std::cout<< std::endl;}}
    void PrintMatrix(int cara) {
        int show;
        int rot;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (cara==-1){show= f[i][j];}
                if (cara==-2){show= r[i][j];}
                if (cara==-3){show= l[i][j];}
                if (cara==-4){show= d[i][j];}
                if (cara==-5){show= u[i][j];}
                if (cara==-6){show= b[i][j];}
                   std::cout << show << " ";}
            std::cout<< std::endl;}} 
};

int main(void){
    Matrix3x3 A;
    A.PrintMatrix(-1); 
    std::cout << "---------"<< std::endl;
    A.PrintMatrix(-2);
    std::cout << "---------"<< std::endl;
    A.PrintMatrix(-3);
    std::cout << "---------"<< std::endl;
    A.PrintMatrix(-4);
    std::cout << "---------"<< std::endl;
    A.PrintMatrix(-5);
    std::cout << "---------"<< std::endl;
    A.PrintMatrix(-6);
    std::cout << "---------"<< std::endl;
    A.UyD();//operación rotar
    std::cout << "-----Despues de aplicar el operador----"<< std::endl;
    A.PrintMatrix(-1);
    std::cout << "---------"<< std::endl;
    A.PrintMatrix(-2);
    std::cout << "---------"<< std::endl;
    A.PrintMatrix(-3);
    std::cout << "---------"<< std::endl;
    A.PrintMatrix(-6);

    A.LyR();//operación rotar
    std::cout << "-----Despues de aplicar el operador----"<< std::endl;
    A.PrintMatrix(-1);
    std::cout << "---------"<< std::endl;
    A.PrintMatrix(-2);
    std::cout << "---------"<< std::endl;
    A.PrintMatrix(-3);
    std::cout << "---------"<< std::endl;
    A.PrintMatrix(-6);
    std::cout<<"-------Girar 90 grados"<<std::endl;
    A.rotateFront(-4);
    std::cout << "---------"<< std::endl;
    A.rotateFront(-5);
    std::cout << "---------"<< std::endl;
return 0;    
}
