//tensor caculation under $FOAM_APP/test/tensor reference
#include "tensor.H"
#include "IOstreams.H"
using namespace Foam;
int main()
{
	//tensor add
    tensor t1(1, 2, 3, 4, 5, 6, 7, 8, 9);
    tensor t2(1, 2, 3, 1, 2, 3, 1, 2, 3);
    tensor t3 = t1 + t2;
    Info<< t3 << endl;
	//tensor inversion
	tensor t4(3,-2,1,-2,2,0,1, 0, 4);
    Info<< t4 << endl;
    Info<< inv(t4) << endl;//inv() is the function of inverse
	//tensor eigenvalue
	tensor t5(1,0,-4,0,5,4,-4,4,3);
    Info<< "tensor " << t5 << endl;
    vector e = eigenValues(t5);
    Info<< "eigenvalues " << e << endl;
	//tensor eigenvector
	tensor ev = eigenVectors(t5);
    Info<< "eigenvectors " << ev << endl;
    Info<< "Check determinant " << e.x()*e.y()*e.z() << " " << det(t5) << endl;//determinant
    return 0;
}
