/*Write a program to calculate the volume and surface area of a cube,
 a cylinder and a pyramid using function overloading
 . Define all the functions related with volume in namespace ns1
  and those of surface area in namespace ns2. 
  Use the following formula to calculate the volume and surface area. 
  Objects               Volume              Surface Area
  Cube                   a3                  6a2
  Cylinder             pi*r2                *h 2*pi*r*h+2*pi*r2 */
  
  #include<iostream>
  #include <math.h>
  namespace ns1 {
        double volume (double a)
      { 
            return a*a*a;
      }

        double volume (double r, double h_c)
        {
            return M_PI*r*r*h_c;
        }
    
        double volume (double l, double w, double h_p)
        {
            return (l*w*h_p)/3;
        }
  }


  namespace ns2 {

      double surface_area (double a)
      {
          return 6*a*a;
      }

      double surface_area (double r, double h_c) 
      {
          return (2*M_PI*r)*(r+h_c);
      }
      double surface_area (double l, double w, double h_p)
      {
          return l*w + l* ( sqrt( (pow( (w/2),2) + pow(h_p,2) ) ) ) +w * ( sqrt( (pow( (l/2),2) + pow(h_p,2) ) ) );
      }


  }

  int main () {
      double a, r, h_c ,l ,w , h_p;
      std:: cout << "For Cube \n" << std::endl;
      std:: cout << "Enter side length"<< std:: endl;
      std:: cin>> a ;

      std:: cout << " \nFor Cylinder \n " << std::endl;
      std:: cout << "Enter radius"<< std:: endl;
      std:: cin>> r ;
      std:: cout << "Enter height \n"<< std:: endl;
      std:: cin>> h_c ;

      std:: cout << "For pyramid \n " << std::endl;
      std:: cout << "Enter length"<< std:: endl;
      std:: cin>> l ;
      std:: cout << "Enter width"<< std:: endl;
      std:: cin>> w ;
      std:: cout << "Enter height"<< std:: endl;
      std:: cin>> h_p ;

      
      using namespace ns1;
      double volume_cube =volume(a);
      double volume_cylinder = volume(r,h_c);
      double volume_pyramid = volume (l,w,h_p);
      

       
      double area_cube = ns2::surface_area(a);
      double area_cylinder = ns2::surface_area(r,h_c);
      double area_pyramid = ns2::surface_area(l,w,h_p);

      std::cout<<"Volume of cube "<<volume_cube<<std::endl;
      std::cout<<"Volume of cylinder "<<volume_cylinder<<std::endl;
      std::cout<<"Volume of Pyramid "<<volume_pyramid<<std::endl;

      std::cout<<"Surface area of cube "<<area_cube<<std::endl;
      std::cout<<"Surface area  of cylinder "<<area_cylinder<<std::endl;
      std::cout<<"Surface area of Pyramid "<<area_pyramid<<std::endl;
      
      


  }