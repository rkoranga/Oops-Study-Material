//Ques 2-b(ii)

#include<iostream>
#include <string>

using namespace std;

/*
Step 1: split the sentence into words
Step 2: Check each words for palindrome
Step 3: If palindrome, replace with '*'.
*/

//palindrome function
bool palin(string s)
{
    for(int i=0; i<(s.length()/2); i++){
        //characters doesn't match
        if(s[i] != s[s.length()-1-i]){
            //return false and come out of the function
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    getline(cin, s);

    /*
    We will break the sentence into words with whitespaces.
    For example, if the sentence is i am bob,
    then our required output should be 'i', 'am' and 'bob'.
    So, start_counter will store the starting index of word,
    for exmaple, 'b' in 'bob'
    and end_counter will be used the find the ending character of the word.

    Initially, both start with the 0th element of the string
    */
    int start_counter = 0;
    int end_counter = 0;

    //to break string with whitespace
    while(end_counter < s.length())
    {
        //to check if the end_character is not at the last character of the string
        //we will seperatly check for the last word as there will be no whitespace after it.
        if(end_counter != (s.length()-1))
        {
            //there is a space
            if(s[end_counter+1] == ' ')
            {
                // Number of characters between start_counter and end_counter
                int sub_len = (end_counter-start_counter)+1;
                //sub string between end_counter and start_counter
                string sub = s.substr(start_counter, sub_len);

                //Checking this substring for palindrome
                if(palin(sub))
                {
                    //replacing with stars
                    for(int i=start_counter; i<=end_counter; i++)
                    {
                        s[i] = '*';
                    }
                }

                //now the end_counter will point to the next word after
                //whitespace
                /*
                If in the string 'I am bob', end_counter is at 'm' of 'am'
                then +2 will take it to 'b'(first 'b') of bob.
                */
                start_counter = end_counter+2;
            }
        }
        //If the word is the last word of the string
        else
        {
            if(palin(s.substr(start_counter, (end_counter-start_counter)+1)))
            {
                for(int i=start_counter; i<=end_counter; i++)
                {
                    s[i] = '*';
                }
            }
        }
        end_counter++;
    }

    cout << s << endl;

    return 0;
}
