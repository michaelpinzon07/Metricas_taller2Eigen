#include <iostream>
#include <eigen3/Eigen/Dense>



int main()
{

    //Ejercicio 1: SE PROCEDE A REALIZAR LA OPERACION DE MATRICES 3A-4B

   //SE DEFINEN LAS VARIABLES DE LAS MATRICES DE 2 DIMENSIONES
   Eigen:: Matrix2d A1;
   Eigen:: Matrix2d B1;
   Eigen:: Matrix2d resultado1;
   //SE INGRESAN LOS VALORES DE LAS MATRICES
   A1 << 4,-2,1,-7 ;
   B1 <<-1,2,6,-5 ;
   //SE HACE LA OPEACION, SE IMPRIMEN LAS MATRICES Y EL RESULTADO
   std::cout<<"matrizA: \n"<<A1<<std::endl;
   std::cout<<"matrizB: \n"<<B1<<std::endl;
   resultado1 = 3*A1 - 4*B1;
   std::cout<<"Resultado1: \n"<<resultado1<<std::endl;
std::cout<<"*****************************************"<<std::endl
           ;
   //Ejercicio 2: SE PROCEDE A REALIZAR LA OPERACION DE MATRICES (3BA-4A)/2

   //SE DEFINEN LAS VARIABLES DE LAS MATRICES DE 2 DIMENSIONES
   Eigen:: Matrix2d A2;
   Eigen:: Matrix2d B2;
   Eigen:: Matrix2d resultado2;
   //SE INGRESAN LOS VALORES DE LAS MATRICES
   A2 << 0,-1,2,1 ;
   B2 <<1,2,3,4 ;
   //SE HACE LA OPEACION, SE IMPRIMEN LAS MATRICES Y EL RESULTADO
   std::cout<<"matrizA: \n"<<A2<<std::endl;
   std::cout<<"matrizB: \n"<<B2<<std::endl;
   resultado2 = (3*B2*A2-4*A2)/2;
   std::cout<<"Resultado2: \n"<<resultado2<<std::endl;

   std::cout<<"*****************************************"<<std::endl;
      //Ejercicio 3
      Eigen:: Matrix2d A3;
      Eigen:: Matrix2d B3;
      Eigen:: Matrix2d C3;
      Eigen:: Matrix2d resultado3;
      A3 << -3,-2,3,3 ;
      B3 << 5,3,9,4 ;
      C3 << 1,1,0,0;
      std::cout<<"matrizA: \n"<<A3<<std::endl;
      std::cout<<"matrizB: \n"<<B3<<std::endl;
      std::cout<<"matrizC: \n"<<C3<<std::endl;
      B3.transposeInPlace();
      resultado3 =C3.array()/(B3.array()*A3.array()) ;
      std::cout<<"Resultado3: \n"<<resultado3<<std::endl;



      std::cout<<"*****************************************"<<std::endl;
         //Ejercicio 4
         Eigen:: Matrix2f A4;
         Eigen:: Matrix2f B4;
         Eigen:: Matrix2f resultado4;
         A4 << 2,1,-4,-3 ;
         B4 << 2,2,6,4 ;

         std::cout<<"matrizA: \n"<<A4<<std::endl;
         std::cout<<"matrizB: \n"<<B4<<std::endl;
         resultado4 = B4.array()/A4.array();
         std::cout<<"Resultado4: \n"<<resultado4<<std::endl;



   std::cout<<"*****************************************"<<std::endl;
      //Ejercicio 5
      //SE DEFINEN EL TAMAÑO DE LAS MATRICES
      Eigen:: MatrixXd A5(2,3);
      Eigen:: MatrixXd B5(3,2);
      Eigen:: Matrix2d C5;
      Eigen:: Matrix2d resultado5;
      //SE INGRESAN LOS VALORES DE LAS MATRICES EN SU RESPECTIVA POSICION
      A5(0,0)=3;
      A5(0,1)=0;
      A5(0,2)=-1;
      A5(1,0)=0;
      A5(1,1)=2;
      A5(1,2)=1;

      B5(0,0)=1;
      B5(0,1)=2;
      B5(1,0)=1;
      B5(1,1)=0;
      B5(2,0)=0;
      B5(2,1)=6;

      C5 << -2,0,-2,-5;

      //SE IMPRIMEN LOS RESULTADOS
      std::cout<<"matrizA: \n"<<A5<<std::endl;
      std::cout<<"matrizB: \n"<<B5<<std::endl;
      resultado5 = 2*(A5*B5+C5);
      std::cout<<"Resultado5: \n"<<resultado5<<std::endl;

   std::cout<<"*****************************************"<<std::endl;
      //Ejercicio 6
     Eigen:: Matrix3d A6;
     Eigen:: Matrix3d B6;
     Eigen:: Matrix3d resultado6;
     A6 << 1,5,-1,-1,2,2,0,-3,3 ;
     B6 << -1,-4,3,1,-2,-2,-3,3,-5;
     std::cout<<"matrizA: \n"<<A6<<std::endl;
     std::cout<<"matrizB: \n"<<B6<<std::endl;
     resultado6 = A6+3*B6;
     std::cout<<"Resultado6: \n"<<resultado6<<std::endl;
  std::cout<<"*****************************************"<<std::endl;


  std::cout<<"*****************************************"<<std::endl;
     //Ejercicio 7
     Eigen:: Matrix3d A7;
     Eigen:: Matrix3d B7;
     Eigen:: Matrix3d resultado7;
     A7 << 2,7,3,3,9,4,1,5,3 ;
     B7 << 1,0,2,0,1,0,0,0,1;

     std::cout<<"matrizA: \n"<<A7<<std::endl;
     std::cout<<"matrizB: \n"<<B7<<std::endl;
     resultado7 = B7.array()/A7.array();
     std::cout<<"Resultado7: \n"<<resultado7<<std::endl;




    std::cout<<"*****************************************"<<std::endl;
       //Ejercicio 8
       Eigen:: Matrix3d A8;
       Eigen:: Matrix3d B8;
       Eigen:: Matrix3d resultado8;
       A8 << 1,1,1,6,5,4,13,10,8 ;
       B8 << 0,1,2,1,0,2,1,2,0;

       std::cout<<"matrizA: \n"<<A8<<std::endl;
       std::cout<<"matrizB: \n"<<B8<<std::endl;
       resultado8 = B8.array()/A8.array();
       std::cout<<"Resultado8: \n"<<resultado8<<std::endl;


     //Ejercicio 9
     Eigen:: Matrix2d A9;
     Eigen::Matrix2d  resultado9;
     A9 << 3,-1,0,2 ;

     std::cout<<"matrizA: \n"<<A9<<std::endl;

     resultado9 = A9.transpose()*A9-2*A9;
     std::cout<<"Resultado9: \n"<<resultado9<<std::endl;


std::cout<<"*****************************************"<<std::endl;
     //Ejercicio 10
     Eigen:: Matrix2d A10;
     Eigen::Matrix2d  resultado10;
     A10 << 4,2,-1,0 ;

     std::cout<<"matrizA: \n"<<A10<<std::endl;

     resultado10 =A10*A10*A10 ;
     std::cout<<"Resultado10: \n"<<resultado10<<std::endl;

     std::cout<<"*****************************************"<<std::endl;
          //Ejercicio 11
          Eigen:: Matrix2d A11;
          Eigen:: Matrix2d B11;
          Eigen:: Matrix2d C11;
          Eigen::Matrix2d  resultado11;
          A11 << 2,4,3,2 ;
          B11 << 1,0,2,1;
          C11 << 7,5,6,1;

          std::cout<<"matrizA: \n"<<A11<<std::endl;
          std::cout<<"matrizB: \n"<<B11<<std::endl;
          std::cout<<"matrizC: \n"<<C11<<std::endl;

          resultado11 = C11.array()/(A11.transpose().array()*B11.array());
          std::cout<<"Resultado11: \n"<<resultado11<<std::endl;



     std::cout<<"*****************************************"<<std::endl;
        //Ejercicio 12
        Eigen:: MatrixXd A12(2,3);
        Eigen:: MatrixXd B12(3,2);
        Eigen:: Matrix2d resultado12;

        A12(0,0)=1;
        A12(0,1)=0;
        A12(0,2)=-2;
        A12(1,0)=2;
        A12(1,1)=-1;
        A12(1,2)=3;

        B12(0,0)=2;
        B12(0,1)=-3;
        B12(1,0)=-2;
        B12(1,1)=0;
        B12(2,0)=-1;
        B12(2,1)=-2;



        std::cout<<"matrizA: \n"<<A12<<std::endl;
        std::cout<<"matrizB: \n"<<B12<<std::endl;
        resultado12 = A12*A12.transpose()-2*A12*B12;
        std::cout<<"Resultado12: \n"<<resultado12<<std::endl;
/*
        std::cout<<"*****************************************"<<std::endl;
           //Ejercicio 13
           Eigen:: MatrixXd A13(1,3);
           Eigen:: MatrixXd B13(3,2);
           Eigen:: Vector2d C13(3,-1);
           //Eigen:: MatrixXd C13();
           Eigen:: Matrix2d resultado13;

           A13(0,0)=4;
           A13(0,1)=8;
           A13(0,2)=12;




           B13(0,0)=3;
           B13(0,1)=2;
           B13(1,0)=0;
           B13(1,1)=1;
           B13(2,0)=-1;
           B13(2,1)=0;



           std::cout<<"matrizA: \n"<<A13<<std::endl;
           std::cout<<"matrizB: \n"<<B13<<std::endl;
           std::cout<<"VectorC: \n"<<C13<<std::endl;
           resultado13 = A13*B13*C13;
           std::cout<<"Resultado13: \n"<<resultado13<<std::endl;
*/
           std::cout<<"*****************************************"<<std::endl;
              //Ejercicio 14
              Eigen:: Matrix3d A14;
              Eigen:: Matrix3d B14;
              Eigen:: Matrix3d resultado14;
              A14 << 3,4,1,-1,-3,3,2,3,0;
              B14 << 3,9,7,1,11,7,7,5,7;

              std::cout<<"matrizA: \n"<<A14<<std::endl;
              std::cout<<"matrizB: \n"<<B14<<std::endl;
              resultado14 = B14.array()/A14.transpose().array();
              std::cout<<"Resultado14: \n"<<resultado14<<std::endl;

              std::cout<<"*****************************************"<<std::endl;
                 //Ejercicio 15
                 Eigen:: Matrix3d A15;
                 Eigen:: Matrix3d B15;
                 Eigen:: Matrix3d resultado15;
                 A15 << 2,5,7,6,3,4,5,-2,-3;
                 B15 << -1,1,0,0,1,1,1,0,-1;

                 std::cout<<"matrizA: \n"<<A15<<std::endl;
                 std::cout<<"matrizB: \n"<<B15<<std::endl;
                 resultado15 = B15.array()/A15.array();
                 std::cout<<"Resultado15: \n"<<resultado15<<std::endl;


   }
