#include <iostream>

using namespace std;

int main()
{
    int x(0); // x = 0;
    cout << x << " " << &x << endl;     // 0 0x7fffc77603a0
    {
        int x = 1;
        cout << x << " " << &x << endl; // 1 0x7fffc77603a4
    }
    {
        int x = 2;
        cout << x << " " << &x << endl; // 2 0x7fffc77603a4
    }
    {
        x = 1;
        cout << x << " " << &x << endl; // 1 0x7fffc77603a0
    }
    cout << x << " " << &x << endl;     // 1 0x7fffc77603a0
    // 1ê³? 2?˜ ë©”ëª¨ë¦? ì£¼ì†Œê°? ê°™ì?? ?´?œ ?Š” 
    // 1?´ ?˜?—­?„ ë²—ì–´?‚˜ë©´ì„œ ?Š¤?… ë©”ëª¨ë¦¬ë¡œ ë°˜ë‚©?„ ?•˜ê³?
    // 2ê°? ë°˜ë‚©?œ ë©”ëª¨ë¦¬ë?? ì°¨ì???•˜???ê¸? ?•Œë¬¸ì´?‹¤
    return 0;
}