# Requirements 
- Given an array of integers or real numbers, sort the array using bubblet sort.

# Solution
- You have to use a pointer to the array because you cannot return an array type in cpp.
- If the function parameter is defined as (type \*ArrayName), when you try to access the *ArrayName* inside the function body, it should give you the pointer to the first element in the referred array!
- Another way to access the pointer to the first element, set the iterator i to 0 and add i to the ArrayName, i.e. (ArrayName + i).
    - When you deference that pointer, i.e. \*(ArrayName + i), you will get access to the underlying value (of the first element).
    - When i increases, the array element that the pointer is pointing to will also move on because it is controlled with (Array Name + i)
     
