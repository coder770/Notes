// gfg

// using stack
// string reverseWord(string str)
// {

//     // Your code here'
//     stack<char> s;
//     char current;
//     string ans = "";
//     int n = str.length();
//     for (int i = 0; i < n; i++)
//     {
//         s.push(str[i]);
//     }
//     while (!s.empty())
//     {
//         current = s.top();
//         ans = ans + current;
//         s.pop();
//     }
//     return ans;
// }

// using the method of new string

// string reverseWord(string str)
// {
//     int n = str.length();
//     string ans = "";
//     for (int i = n - 1; i >= 0; i--)
//     {
//         ans = ans + str[i];
//     }
//     return ans;
// }

// it is not efficient way to reverse the string using stack because it will inc the space complexity so to reverse any container we use reverse funtion available in stl
// reverse(str.begin(),str.end());


// so stack can help in only reversing a forward list(mainly implemented using stack internaly) in which we can't move backward direction and also we don't have any random access 
