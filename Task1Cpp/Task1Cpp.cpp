

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Задание #1
    setlocale(LC_ALL, "Rus"); 
    try
    {
        double t, l;
        cout << "Введите значение переменной t " << endl;
        cin >> t;
        cout << "Введите значение переменной l " << endl;
        cin >> l;
        cout << "R =" << 3 * pow(t, 2) + 3 * pow(l, 5) + 4.9 << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }
        
    system("pause"); 


    //Задание #2
    try
    {
        double n, p, e, y;
        cout << "Введите значение переменной n " << endl;
        cin >> n;
        cout << "Введите значение переменной p " << endl;
        cin >> p;
        cout << "Введите значение переменной e " << endl;
        cin >> e;
        cout << "Введите значение переменной y " << endl;
        cin >> y;
        cout << "K =" << 1*n*(pow(p,2)+pow(y,3))+pow(e,p) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #3
    try
    {
        double n, y;
        cout << "Введите значение переменной n " << endl;
        cin >> n;
        cout << "Введите значение переменной y " << endl;
        cin >> y;
        cout << "G =" << n*(y+3.5)+sqrt(y) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #4
    try
    {
        double a, t;
        cout << "Введите значение переменной a " << endl;
        cin >> a;
        cout << "Введите значение переменной t " << endl;
        cin >> t;
        cout << "D =" << 9.8*pow(a,2)+5.52*cos(pow(t,5)) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #5
    try
    {
        double x;
        cout << "Введите значение переменной x" << endl;
        cin >> x;
        cout << "L =" << 1.51*cos(pow(x,2))+2*pow(x,3) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #6
    try
    {
        double x, y, e;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной e" << endl;
        cin >> e;
        cout << "Введите значение переменной x" << endl;
        cin >> x;
        cout << "M =" << cos(2*y)+3.6*pow(e,x) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #7
    try
    {
        double m;
        cout << "Введите значение переменной m" << endl;
        cin >> m;
        cout << "N =" << pow(m,2)+2.8*fabs(m)+0.55 << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #8
    try
    {
        double y;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "T =" << sqrt(fabs(6*pow(y,2)-0.1*y+4)) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #9
    try
    {
        double n, y, x;
        cout << "Введите значение переменной n" << endl;
        cin >> n;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной x" << endl;
        cin >> x;
        cout << "V =" << 1*n*(y+0.95)+sin(pow(x,4)) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #10
    try
    {
        double e, y, x, k;
        cout << "Введите значение переменной e" << endl;
        cin >> e;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной k" << endl;
        cin >> k;
        cout << "Введите значение переменной x" << endl;
        cin >> x;
        cout << "U =" << pow(e,y)+7.355*pow(k,2)+pow(sin(x),2) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #11
    try
    {
        double y, x;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной x" << endl;
        cin >> x;
        cout << "S =" << 9.756*pow(y,7)+2*tan(x) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");

    //Задание #12
    try
    {
        double x, t;
        cout << "Введите значение переменной t" << endl;
        cin >> t;
        cout << "Введите значение переменной x" << endl;
        cin >> x;
        cout << "K =" << 7*pow(t,2)+3*sin(pow(x,3))+9.2 << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #13
    try
    {
        double y;

        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "E =" << sqrt(fabs(3*pow(y,2)+0.5*y+4)) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #14
    try
    {
        double e, y, x;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной e" << endl;
        cin >> e;
        cout << "Введите значение переменной x" << endl;
        cin >> x;
        cout << "R =" << fabs(sqrt(pow(sin(y),2)+6.835)+pow(e,x)) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #15
    try
    {
        double y;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "H =" << sin(pow(y,2))-2.8*y+sqrt(fabs(y)) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #16
    try
    {
        double y;

        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "S =" << sqrt(cos(4*pow(y,2))+7.151) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #17
    try
    {
        double y;

        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "N =" << 3*pow(y,3)+sqrt(y+1) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #18
    try
    {
        double y;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Z =" << 3*pow(y,2)+sqrt(pow(y,3)+1) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #19
    try
    {
        double n, y, g;
        cout << "Введите значение переменной n" << endl;
        cin >> n;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной g" << endl;
        cin >> g;
        cout << "P =" << n*sqrt(pow(y,3)+1.09*g) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #20
    try
    {
        double e, y, x, k;
        cout << "Введите значение переменной e" << endl;
        cin >> e;
        cout << "Введите значение переменной k" << endl;
        cin >> k;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной x" << endl;
        cin >> x;
        cout << "U =" << pow(e,k+y)+tan(x)*sqrt(y) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #21
    try
    {
        double e, y, h;
        cout << "Введите значение переменной e" << endl;
        cin >> e;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной h" << endl;
        cin >> h;
        cout << "P =" << pow(e, y+5.5)+9.1*pow(h,3) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #22
    try
    {
        double u, y, x, n;
        cout << "Введите значение переменной u" << endl;
        cin >> u;
        cout << "Введите значение переменной n" << endl;
        cin >> n;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной x" << endl;
        cin >> x;
        cout << "T =" << sin(2*u)*1*n*(2*pow(y,2)+sqrt(x)) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #23
    try
    {
        double e, y, f;
        cout << "Введите значение переменной e" << endl;
        cin >> e;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной f" << endl;
        cin >> f;
        cout << "G =" << pow(e,2*y)+sin(f) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #24
    try
    {
        double y;

        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "F =" << 2*sin(0.214*pow(y,5)+1) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #25
    try
    {
        double e, y, f;
        cout << "Введите значение переменной e" << endl;
        cin >> e;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной f" << endl;
        cin >> f;
        cout << "G =" << pow(e,2*y)+sin(pow(f,2)) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #26
    try
    {
        double p;
        cout << "Введите значение переменной p" << endl;
        cin >> p;
        cout << "Z =" << sin(pow(pow(p,2)+0.4,3)) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #27
    try
    {
        double e, y, x, v;
        cout << "Введите значение переменной v" << endl;
        cin >> v;
        cout << "Введите значение переменной e" << endl;
        cin >> e;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной x" << endl;
        cin >> x;
        cout << "W =" << 1.03*v+pow(e,2*y)+tan(fabs(x)) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #28
    try
    {
        double e, y, h;
        cout << "Введите значение переменной e" << endl;
        cin >> e;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной h" << endl;
        cin >> h;
        cout << "T =" << pow(e,y+h)+sqrt(fabs(6.4*y)) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #29
    try
    {
        double y;

        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "N =" << 3*pow(y,2)+sqrt(fabs(y+1)) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");


    //Задание #30
    try
    {
        double e, y,r;
        cout << "Введите значение переменной e" << endl;
        cin >> e;
        cout << "Введите значение переменной y" << endl;
        cin >> y;
        cout << "Введите значение переменной r" << endl;
        cin >> r;
        cout << "W =" << pow(e,y+r)+7.2*sin(r) << endl;
    }
    catch (const std::exception&)
    {
        cout << "Ошибка входных данных" << endl;
    }

    system("pause");
}


