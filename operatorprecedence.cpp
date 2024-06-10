 #inClude <iostream>
 using namespace std;

 main()     {
      int a = 20;
      int b = 10;
      int   C =    15;
      int d = 5;
      int   e;


      e = (a + b) * c / d;                   // ( 3O * 15 ) / 5
      cout << "Value of (a + b)              * c / d is :" << e << endl;

      e = ((a + b) * c) / d;    // (3O * 15 )                     / 5
      cout << "Value of ((a + b) * c) / d is                      :" << e << endl;

      e = (a + b) *        (C / d);         //     (30)   * (15/5)
      cout << "Value of           (a + b)    *     (c / d)   is   2" << e << endl;

      e 2 a + (b * C) / d;                 //  20 + (150/5)
      cout << "Value of a +             (b * c) / d is   :" << e << endl;

      return      0;



