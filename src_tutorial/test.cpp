#include <iostream>
#include <Eigen/Dense>

using namespace std;

Eigen::Matrix3d skew(const Eigen::Vector3d& v)
{
    Eigen::Matrix3d S;
    S << 0, -v(2), v(1),
         v(2), 0, -v(0),
         -v(1), v(0), 0;
    return S;
}

int main(void)
{
    // using Eigen::MatrixXd;
    // MatrixXd m(2,2);
    // m(0,0) = 3;
    // m(1,0) = 2.5;
    // m(0,1) = -1;
    // m(1,1) = m(1,0) + m(0,1);
    // cout << m << endl;
    
    /*
    Matrix Class
    
    Eigen::Matrix<typename Scalar, int RowsAtCompileTime, int ColsAtCompileTime, and 3 more, but not used frequently>

    */

    //Examples
    // typedef Eigen::Matrix<float,4,4> Matrix4f;
    // typedef Eigen::Matrix<float,3,1> Vector3f;
    // typedef Eigen::Matrix<int,1,2> RowVector2i;

    //Constructors
    // Eigen::MatrixXf a(10,15);
    // Eigen::VectorXf b(30);
    // Eigen::Vector3d a(1.0,2.0,3.0); // -> initialize 
    // Eigen::RowVector3d b(1.0,2.0,3.0);
    // cout << a << endl;
    // cout << b << endl;
    
    // Comma initialization
    // Eigen::Matrix3f m;
    // m << 1, 2, 3,
    //      4, 5, 6,
    //      7, 8, 9;
    // cout << m << endl;

    // Resizing
    // Eigen::MatrixXd m(2,5);
    // m.resize(4, 3);
    // cout << "The matrix m is of size " << m.rows() << "x" << m.cols() << endl;
    
    // Eigen::VectorXd v(2);
    // v.resize(5);
    // cout << "The vector v is of size " << v.size() << endl;
    // cout << "As a matrix, v is of size " << v.rows() << "x" << v.cols() << endl;

    // Matrix convenient typedefs
    // Eigen::Matrix2d M; // 2*2 double matrix.
    // Eigen::Matrix2Xd M2; // 2*N double matrix. X is for dynamic
    // Eigen::MatrixX2d M3; // N*2 double matrix. X is for dynamic
    // Eigen::RowVector2d V1; // 1*2 Row vector.

    /*
    Matrix and vector arithmetic
    
    */
    // Eigen::Matrix2d a;
    // a << 1, 2,
    //      3, 4;
    // Eigen::MatrixXd b(2,2); // -> same as Eigen::Matrix2d
    // b << 2, 3,
    //      1, 4;
    // cout << "a + b = \n" << a + b << endl;
    // cout << "a - b = \n" << a - b << endl;
    // cout << "Doing a += b;" << endl;
    // a += b;
    // cout << "Now a = \n" << a << endl;

    // Eigen::Vector3d v(1,2,3);
    // Eigen::Vector3d w(1,0,0);
    // cout << "-v + w - v = \n" << -v + w - v << endl; 

    // Eigen::Matrix3d a;
    // a << 1, 2, 3,
    //      4, 5, 6,
    //      7, 8, 9;
    // Eigen::Vector3d v(1,-1,1);

    // cout << "a x v = \n" << a * v << endl;
    // cout << "a.T x v = \n" << a.transpose() * v << endl;

    // Eigen::Vector3d v(1,2,3);
    // Eigen::Vector3d w(0,1,2);
    // cout << "Dot Product: " << v.dot(w) << endl;
    // cout << "Cross Product: \n" << v.cross(w) << endl;

    // Eigen::Matrix3d A;
    // A = skew(v);
    // cout << "Skew Symmetric Form of v = \n" << A << endl;

    Eigen::Matrix2d mat;
    mat << 1, 2,
           3, 4;

    Eigen::Vector4d v(1,2,3,4);

    cout << "Sum: " << mat.sum() << endl;
    cout << "Prod: " << mat.prod() << endl;
    cout << "Mean: " << mat.mean() << endl;
    cout << "minCoeff: " << mat.minCoeff() << endl;
    cout << "maxCoeff: " << mat.maxCoeff() << endl;
    cout << "trace: " << mat.trace() << endl;

    cout << "vector norm: " << v.norm() << endl;
}