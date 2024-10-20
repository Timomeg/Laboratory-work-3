#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <string>
using namespace std;

template<class T>
std::vector<T> generate_random_vector(std::size_t num, T min = -10, T max = 10)
{
    random_device rd;
    mt19937 e2(rd());
    uniform_real_distribution<> dist(min, max);

    auto lambda = [&e2, &dist] () -> T { return dist(e2); };

    vector<T> result(num);
    generate_n(result.begin(), num, lambda);
    return result;
}
int main() {
    int a{};
    cout << "Enter a:" << endl;
    cin >> a;
    int fir{};
    vector<int> vector1 = generate_random_vector<int>(10, 1, 100);
    fir = vector1[0];

    // Задание 1
    for (int i{}; i < vector1.size(); i++)
    {
        vector1[i] *= 2;
        vector1[i] -= 5;
        vector1[i] /= fir;
    }

    // Задание 2
    vector<int> vector2 = {2, 0, 7, 23, 46, 12, -43, 72, 91, -76};
    int sum{};
    int sum_sq{};
    int sum_6{};
    int sum_k{};
    double arith{};
    double arith_s{};
    int k1, k2;
    cout << "Enter first and last index of slice K:" << endl;
    cin >> k1 >> k2;
    int s1, s2;
    cout << "Enter first and last index of slice S:" << endl;
    cin >> s1 >> s2;
    for (int i{}; i < vector2.size(); i++)
    {
        sum += vector2[i];
        sum_sq += vector2[i] * vector2[i];
        if (i < 6)
        {
            sum_6 += vector2[i];
        }
        if (i > k1 && i < k2)
        {
            sum_k += vector2[i];
        }
        if (i > s1 && i < s2)
        {
            arith_s += vector2[i];
        }
    }
    arith = sum / vector2.size();
    arith_s = arith_s / (s2 - s1);

    // Задание 3
    vector<int> vector3 = generate_random_vector<int>(20, 1, 100);
    int x0 = vector3[0];
    int x1 = vector3[1];
    int x2 = vector3[2];
    vector3[0] = vector3[17];
    vector3[1] = vector3[18];
    vector3[2] = vector3[19];
    vector3[17] = x0;
    vector3[18] = x1;
    vector3[19] = x2;

    // Задание 4
    vector<int> vector4 = {2, 0, 7, 23, 46, 12, -43, 72, 91, -76};
    for(int i{}; i < size(vector4); i++)
    {
        if (vector4[i] < 0) {
            erase(vector4, vector4[i]);
            break;
            }
        for(i = size(vector4) - 1 ; i >= 0; i--)
        {
            if (vector4[i] % 2 == 0) {
                erase(vector4, vector4[i]);
                break;
            }
        }

    // Задание 5
    string city_name5;
    cout << "Enter a city name:" << endl;
    cin >> city_name5;
    if (size(city_name5) % 2 == 0)
    {
        cout << "City name is even" << endl;
    }
    else
    {
        cout << "City name is uneven" << endl;
    }

    // Задание 6
    string surname1;
    string surname2;
    cout << "Enter 2 surnames:" << endl;
    cin >> surname1 >> surname2;
    cout << "The longest surname is "<<__max(surname1, surname2)<< endl ;

    // Задание 7
    string city_name1_7;
    string city_name2_7;
    string city_name3_7;
    cout << "Enter 3 city names:" << endl;
    cin >> city_name1_7 >> city_name2_7 >> city_name3_7;
    cout << "Minimum is "<<__min(city_name1_7, __min(city_name2_7, city_name3_7))<< endl ;
    cout << "Maximum is "<<__max(city_name1_7, __max(city_name2_7, city_name3_7))<< endl ;


    }
}