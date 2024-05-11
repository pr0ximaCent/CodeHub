# My Code Note Repo

1. If there's a large number llike 10^18 then better to process it with string if possible.
     string character to digit ( s [ i ]  -  ' 0 ' ). 
     digit to string character ( s [ i ]  +  ' 0 ' ). 

Another method. to convert int x=123 to string we can use: string s = to_string ( x );
Again, to convert string s="345" to number 345, we can use int x= stoi ( S );


2. lcm = (a*b) / gcd (a , b);

3. for max element in a vector in STL, : int i=max_element( v.begin( ) - v.end( ) ) -- v.begin( ); 

4. To find unique elements in vector besides using set we can use: int sz = unique ( v.begin( ) - v.end( ) ) - v.begin( );

5. To have space as a character in string in C++ : getline(cin, s);  [This will create problem if we take multiple strings input by loop]

6. To get multiple strings in for loop as input we just use cin.ignore() after taking n (number of strings/testcases)

          int n; cin >> n;
          cin.ignore( );
          for ( int i = 1; i <= n ; i++ ) 
          {
               string s; 
	        getline ( cin,s);                        
          }

or,     ```   
        for (int i=0; i<n; i++)
	{
	      string s;
	      char c;
	      cin>>c;
	      getline ( cin, s);
	      s = c+s;
	}```
 

7. Unique characters in a string- 
   ```
    sort(s.begin(), s.end());
    int sz= unique( s.begin(),s.end()) - s.begin();
    for(int i = 0; i < sz ; i++)
    {
        cout<< s[i];
    }

8. Max and Min element in avector :``` *max_element( v.begin(), v.end()) 
			           *min_element( v.begin(), v.end())```


9. remove a character from string - ```s.erase( s.begin( ) ); // to remove third character : s.erase( s.begin( ) + 2);```

10. substring - continuous part. for a string "abcdef", here cde is substring. But if there's no continuity then it's subsequence. Like- "ce"

11. convert all character os string to lowercase: ```
     for (auto &i : s1)
     {
        i = tolower(i);
     }```

12. To find if the substring "ria" exists in the string s="Shahriar" ; we can use-```
       if ( s. find ( "ria" ) ) != -1 )
       cout<<"Found"
       else
       cout<<"Not found";```

it returns -1 if not found.

13. we can return a program in the midways. Like break, without loop. 
       Example: if ( c==0 ) return cout<<"NO\n",  0;

14. printing the smallest next lexiographical string of a given string. ( STL class 4; 1:30 ```
      string s= "1234";
      next_permutation( s. begin (  ) , s. end ( ) );   //this function retuns 1 if there is a string like this
      cout<<s;     //1243 (second next lexiographical string of 1234)```

15. printing all the permutation of a string:```
	do
	{
	   cout<< s <<endl;
	}while( next_permutaion( s.begin ( ), s.end ( ) )  );	```

16. printing all the permutation of an array / vector:```
	do
	{
	    for(auto i : v) cout<< i <<endl;
               }while( next_permutation ( v.begin(), v,.end() ) );```
              
for array, use this line: while( next_permutation ( a, a+n ) );   // n is the size of array





