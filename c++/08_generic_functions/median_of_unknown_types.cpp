//We can use template functions to define multiple functions with a single deinfition.
template<class T> //Defines a template and a type parameter telling the function to replace T with the given type
  T median(vector<T> v){
     typedef typename vector<T>::size_type vec_sz;//typename makes the T part of a type.
     vec_sz size = v.size();
     if (size == 0)
     throw domain_error("median of an empty vector");
     sort(v.begin(), v.end());

     vec_sz mid = size/2;
     return size % 2 == 0 ? (v[mid] + v[mid-1]) / 2 : v[mid];
    }
