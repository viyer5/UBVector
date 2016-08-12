#include <iostream>
#include "UBVector.h"

using namespace std;

int main() {
   // cout << "Hello, World!" << endl;
 /*   UBVector v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    //v.push_back(3);

*//*    int* x = v.insert(v.begin()+2, 6);
    cout<<*x<<endl;*//*
   int* y = v.erase(v.begin());
    cout<<*y<<endl;*/

    /*for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<endl;
    }*/
    int x;
    do{
        cout<<"=====+++++++++++++Menu++++++++++++++======"<<endl;
        cout<<"Press 0  to quit"<<endl;
        cout<<"Press 1  to test UBVector (const UBVector& x)"<<endl;
        cout<<"Press 2  to test explicit UBVector (size_t n = 0, int val = 0)"<<endl;
        cout<<"Press 3  to test UBVector (int *pBegin, int *pEnd)"<<endl;
        cout<<"Press 4  to test UBVector& operator= (const UBVector& x)"<<endl;
        cout<<"Press 5  to test size_t size() const"<<endl;
        cout<<"Press 6  to test size_t capacity() const"<<endl;
        cout<<"Press 7  to test int *begin()"<<endl;
        cout<<"Press 8  to test int *end()"<<endl;
        cout<<"Press 9  to test int *insert (int *pPosition, const int val)"<<endl;
        cout<<"Press 10 to test int *erase (int *pPosition)"<<endl;
        cout<<"Press 11 to test void push_back (const int& val)"<<endl;
        cout<<"Press 12 to test  void pop_back()"<<endl;
        cout<<"Press 13 to test int& at(size_t n)"<<endl;
        cout<<"Press 14 to test int& operator[] (size_t n)"<<endl;
        cout<<"Press 15 to test int& front() "<<endl;
        cout<<"Press 16 to test int& back() "<<endl;

        cin>>x;
        switch (x){
            case 0: cout<<" Bye- bye "<<endl; return 0;
            case 1:
            {
                int a;
                int b;
                cout<<"Enter the parameters to create a UBVector which will call the explicit constructor"<<endl;
                cin>>a;
                cin>>b;
                UBVector v(a,b);

                cout<<" The new UBVector copied from the vector whose parameters you just passed is - "<<endl;
                UBVector q(v);
                for(int i = 0 ; i < q.size(); i++){
                    cout<<q[i]<<" "<<flush;
                }
                cout<<endl;
                break;
            }// end case 1

            case 2:{
                int a;
                int b;
                cout<<"Enter the parameters to create a UBVector which will call the explicit constructor"<<endl;
                cin>>a;
                cin>>b;
                UBVector v(a,b);
                cout<<"The vector created is - "<< endl;
                for( int i = 0; i < v.size(); i++){
                    cout<<v[i]<<" "<<flush;
                }
                cout<<endl;
                break;
            }   // end case 2

            case 3: {
                UBVector v2;
                v2.push_back(1);
                v2.push_back(2);
                v2.push_back(3);
                v2.push_back(4);
                v2.push_back(5);
                v2.push_back(6);
                cout<<"A UBVector has been created for you which has the following elements "<<endl;
                for ( int i = 0; i < v2.size(); i++){
                    cout<<v2[i]<<" "<<flush;
                }
                cout<<endl;
                int a;
                int b;
                cout<<"Enter separately the indices of the already created vector that note the begin and end of the already created vector "<<endl;
                cin>>a;
                cin>>b;
                UBVector q(v2.begin()+a, v2.begin()+b);
                cout<<" The newly created vector is as follows - "<<endl;
                for ( int i = 0; i < q.size(); i++){
                    cout<<q[i]<<" "<<flush;
                }
                cout<<endl;
                break;
            }// end case 3

            case 4:{
                UBVector v;
                v.push_back(1);
                v.push_back(2);
                v.push_back(3);
                v.push_back(4);
                v.push_back(5);
                v.push_back(6);
                cout<<"A UBVector has been created for you which has the following elements "<<endl;
                for ( int i = 0; i < v.size(); i++){
                    cout<<v[i]<<" "<<flush;
                }
                cout<<endl;
                UBVector v1 = v;
                cout<<" The vector copied using the assignment operator is as follows - "<<endl;
                for ( int i = 0; i < v1.size(); i++){
                    cout<<v1[i]<<" "<<flush;
                }
                cout<<endl;
                break;
            }   // end case 4
            case 5:{
                UBVector v;
                v.push_back(1);
                v.push_back(2);
                v.push_back(3);
                v.push_back(4);
                v.push_back(5);
                v.push_back(6);
                cout<<"A UBVector has been created for you which has the following elements "<<endl;
                for ( int i = 0; i < v.size(); i++){
                    cout<<v[i]<<" "<<flush;
                }
                cout<<endl;
                cout<<" The size of the Vector is "<<v.size()<<endl;
                break;
            }   // end case 5

            case 6:{
                UBVector v;
                v.push_back(1);
                v.push_back(2);
                v.push_back(3);
                v.push_back(4);
                v.push_back(5);
                v.push_back(6);
                cout<<"A UBVector has been created for you which has the following elements "<<endl;
                for ( int i = 0; i < v.size(); i++){
                    cout<<v[i]<<" "<<flush;
                }
                cout<<endl;
                cout<<" The capacity of the Vector is "<<v.capacity()<<endl;
                break;
            }   // end case 6
            case 7:{
                UBVector v;
                v.push_back(1);
                v.push_back(2);
                v.push_back(3);
                v.push_back(4);
                v.push_back(5);
                v.push_back(6);
                cout<<"A UBVector has been created for you which has the following elements "<<endl;
                for ( int i = 0; i < v.size(); i++){
                    cout<<v[i]<<" "<<flush;
                }
                cout<<endl;
                cout<<" The dereferenced return value of the begin function is "<<*v.begin()<<endl;
                break;
            }// end case 7
            case 8:{
                UBVector v;
                v.push_back(1);
                v.push_back(2);
                v.push_back(3);
                v.push_back(4);
                v.push_back(5);
                v.push_back(6);
                cout<<"A UBVector has been created for you which has the following elements "<<endl;
                for ( int i = 0; i < v.size(); i++){
                    cout<<v[i]<<" "<<flush;
                }
                cout<<endl;
                cout<<" The dereferenced return value of the end function is "<<*v.end()<<endl;
                break;
            }// end case
            case 9:{
                UBVector v;
                v.push_back(1);
                v.push_back(2);
                v.push_back(3);
                v.push_back(4);
                v.push_back(5);
                v.push_back(6);
                cout<<"A UBVector has been created for you which has the following elements "<<endl;
                for ( int i = 0; i < v.size(); i++){
                    cout<<v[i]<<" "<<flush;
                }
                cout<<endl;
                int a;
                int b;
                cout<<"Enter the index_position where you wish to insert the element "<<endl;
                cin>>a;
                cout<<"Enter the value to be inserted"<<endl;
                cin>>b;
                v.insert(v.begin()+a, b);
                cout<<"The modified vector is as follows "<<endl;
                for ( int i = 0; i < v.size(); i++){
                    cout<<v[i]<<" "<<flush;
                }
                cout<<endl;
                break;
            }// end case
            case 10:{
                UBVector v;
                v.push_back(1);
                v.push_back(2);
                v.push_back(3);
                v.push_back(4);
                v.push_back(5);
                v.push_back(6);
                cout<<"A UBVector has been created for you which has the following elements "<<endl;
                for ( int i = 0; i < v.size(); i++){
                    cout<<v[i]<<" "<<flush;
                }
                cout<<endl;
                int a;
                //int b;
                cout<<"Enter the index_position of the element you wish to erase  "<<endl;
                cin>>a;
                v.erase(v.begin()+a);
                cout<<"The modified vector is as follows "<<endl;
                for ( int i = 0; i < v.size(); i++){
                    cout<<v[i]<<" "<<flush;
                }
                cout<<endl;
                break;
            }// end case
            case 11:{
                UBVector v;
                v.push_back(1);
                v.push_back(2);
                v.push_back(3);
                v.push_back(4);
                v.push_back(5);
                v.push_back(6);
                cout<<"A UBVector has been created for you which has the following elements "<<endl;
                for ( int i = 0; i < v.size(); i++){
                    cout<<v[i]<<" "<<flush;
                }
                cout<<endl;
                int a;
                //int b;
                cout<<"Enter the value you wish to push_back  "<<endl;
                cin>>a;
                v.push_back(a);
                cout<<"The modified vector is as follows "<<endl;
                for ( int i = 0; i < v.size(); i++){
                    cout<<v[i]<<" "<<flush;
                }
                cout<<endl;
                break;
            }// end case 11
            case 12:{
                UBVector v;
                v.push_back(1);
                v.push_back(2);
                v.push_back(3);
                v.push_back(4);
                v.push_back(5);
                v.push_back(6);
                cout<<"A UBVector has been created for you which has the following elements "<<endl;
                for ( int i = 0; i < v.size(); i++){
                    cout<<v[i]<<" "<<flush;
                }
                cout<<endl;
                v.pop_back();
                cout<<"pop_back has been called"<<endl;
                cout<<"The modified vector is as follows "<<endl;
                for ( int i = 0; i < v.size(); i++){
                    cout<<v[i]<<" "<<flush;
                }
                cout<<endl;
                break;
            }// end case 12
            case 13:{
                UBVector v;
                v.push_back(1);
                v.push_back(2);
                v.push_back(3);
                v.push_back(4);
                v.push_back(5);
                v.push_back(6);
                cout<<"A UBVector has been created for you which has the following elements "<<endl;
                for ( int i = 0; i < v.size(); i++){
                    cout<<v[i]<<" "<<flush;
                }
                cout<<endl;
                int a;
                cout<<"Enter the index whose value you wish to inspect"<<endl;
                cin>>a;
                cout<<"The value at "<<a<<" is "<<v.at(a)<<endl;
                break;
            }// end case 13
            case 14:{
                UBVector v;
                v.push_back(1);
                v.push_back(2);
                v.push_back(3);
                v.push_back(4);
                v.push_back(5);
                v.push_back(6);
                cout<<"A UBVector has been created for you which has the following elements "<<endl;
                for ( int i = 0; i < v.size(); i++){
                    cout<<v[i]<<" "<<flush;
                }
                cout<<endl;
                int a;
                cout<<"Enter the index whose value you wish to inspect"<<endl;
                cin>>a;
                cout<<"The value at "<<a<<" is "<<v[a]<<endl;
                break;
            }// end case 14
            case 15:{
                UBVector v;
                v.push_back(1);
                v.push_back(2);
                v.push_back(3);
                v.push_back(4);
                v.push_back(5);
                v.push_back(6);
                cout<<"A UBVector has been created for you which has the following elements "<<endl;
                for ( int i = 0; i < v.size(); i++){
                    cout<<v[i]<<" "<<flush;
                }
                cout<<endl;
                cout<<"The front function call returns "<<v.front()<<endl;
                break;
            }// end case 15
            case 16:{
                UBVector v;
                v.push_back(1);
                v.push_back(2);
                v.push_back(3);
                v.push_back(4);
                v.push_back(5);
                v.push_back(6);
                cout<<"A UBVector has been created for you which has the following elements "<<endl;
                for ( int i = 0; i < v.size(); i++){
                    cout<<v[i]<<" "<<flush;
                }
                cout<<endl;
                cout<<"The back function call returns "<<v.back()<<endl;
                break;
            }// end case 16
            default: {
                cout << "You entered an invalid entry" << endl;
                cout << "Good Luck for the finals" << endl;
            }//end def
        }// end switch
    }while(x>-1);

    return 0;
}