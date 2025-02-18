#include <iostream>

using namespace std;

int main()
{
    int GasTank = 20;
    float TownMpg = 23.5;
    float HighwayMpg = 28.9;
    float TownDistance = GasTank * TownMpg;
    float HighwayDistance = GasTank * HighwayMpg;

    cout << "In town, " << TownDistance << " miles can be travelled on a full tank. \n";
    cout << "On the highway, " << HighwayDistance << " miles can be travelled on a full tank.";
}
