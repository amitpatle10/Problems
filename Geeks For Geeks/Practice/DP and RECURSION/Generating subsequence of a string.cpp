/*

V stores all the subsequence


*/ 





vector<string>v;
void sub(string input, string output)
{
    
    if (input.empty()) {
        v.push_back(output);
        return;
    }

    //we need to make two choices whether to add the char or not 

    sub(input.substr(1), output + input[0]);    
    sub(input.substr(1), output);

}