#include <iostream>
#include <string>
#include <vector>
#include <algorithm>    // std::sort

template< typename T >
T binary_search( const std::vector< T > &list, T item )
{
 int low = 0;
 int high = list.size() - 1;
 
 while( low <= high ) {
    int mid = ( low + high ) / 2;
    int guess = list[ mid ];
    
    if( guess == item ) {
        return item;   
    }
    
    if( guess > item ) {
        high = --mid;
    } else {
        low = ++mid;   
    }    
 }
 
 return 0;
}

int main()
{
    std::vector< char > list{ 'a', 'b', 'c', 'd' };
    std::sort( list.begin(), list.end() );
    std::cout << binary_search( list, 'c' ) << std::endl;
}
