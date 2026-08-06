class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded {};
        
        for(string s : strs){
            encoded += to_string(s.size());
            encoded += '#';
            encoded += s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;

        size_t i = 0;

        while (i < s.size()) {
            // 길이가 끝나는 위치를 찾는다.
            size_t delimiter = s.find('#', i);

            
            size_t length = stoull(
                s.substr(i, delimiter - i)
            );

            // 구분자 다음부터 length개의 문자를 읽는다.
            size_t start = delimiter + 1;
            decoded.push_back(s.substr(start, length));

            // 다음 문자열의 시작 위치로 이동한다.
            i = start + length;
        }

        return decoded;
    }  
};
