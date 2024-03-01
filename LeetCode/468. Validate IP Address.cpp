class Solution {
public:
    string validIPAddress(string queryIP) {
        regex patternIPv4("([1-9][0-9]?|1[0-9]{2}|2[0-4][0-9]|25[0-5]|0)\\.([1-9][0-9]?|1[0-9]{2}|2[0-4][0-9]|25[0-5]|0)\\.([1-9][0-9]?|1[0-9]{2}|2[0-4][0-9]|25[0-5]|0)\\.([1-9][0-9]?|1[0-9]{2}|2[0-4][0-9]|25[0-5]|0)");
        
        regex patternIPv6("[0-9a-fA-F]{1,4}:[0-9a-fA-F]{1,4}:[0-9a-fA-F]{1,4}:[0-9a-fA-F]{1,4}:[0-9a-fA-F]{1,4}:[0-9a-fA-F]{1,4}:[0-9a-fA-F]{1,4}:[0-9a-fA-F]{1,4}");
        
        bool isIPv4 = regex_match(queryIP, patternIPv4);
        bool isIPv6 = regex_match(queryIP, patternIPv6);
        
        if (isIPv4) return "IPv4";
        else if (isIPv6) return "IPv6";
        return "Neither";
    }
};