/*catAndMouse-HackerRankSoultion.cpp
Two cats and a mouse are at various positions on a line. You will be given their starting positions. Your task is to determine which cat will reach the mouse first,
assuming the mouse does not move and the cats travel at equal speed. If the cats arrive at the same time, the mouse will be allowed to move and it will escape while they fight.
Author:Sachindra
*/
string catAndMouse(int x, int y, int z) {
    int catA=abs(z-x);
    int catB=abs(z-y);
    string s;
    if(catA<catB)
    {
        s= "Cat A";
    } else if (catA>catB) {
        s= "Cat B";
    } else {
        s = "Mouse C";
    }

return s;
}
