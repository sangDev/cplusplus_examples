#include <iostream>
#include <vector>

using namespace std;

class B{
public:
    void f_pub() {cout << "f_pub is called.\n";}

protected:
    void f_prot() {cout << "f_prot is called.\n";}

private:
    void f_priv() {cout << "f_priv is called.\n";}
};

class D_priv : private B{


};
class D_prot : protected B { };

class D_pub  : public B {
public:
    void f(){
        f_pub();    // Okat. D_pub's public function
        f_prot();   // Okay. D_pub's protected function

    }
};

/*
 *  Access Control:
 *  1. None of the derived classes can anything that is private in B.
 *  2. D_pub inherits public members of B as public
 *            and the protected members of B as protected.
 *  3. D_priv inherits public and protected members of B as private
 *  4. D_prot inherits public and protected members of B as protected.
 */

/*
 * Casting:
 *  1. Anyone can cast a D_pub* to B*.  D_pub is a special kind of B.
 *  2. D_priv's members and friends can cast a D_priv* to B*
 *  3. D_prot's members, friends and children can cast a D_prot* to B*
 */
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}