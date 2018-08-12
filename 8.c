int myAtoi(char* str) {
    int ret = 0, flag = 1, pre_num;
    while(str[0] == ' ') str++;
    if(str[0] =='-') flag = -1,str++;
    else if(str[0] == '+')str++;
    
    while(str[0] <= '9' && str[0] >='0') {
        pre_num = ret;
        ret = ret * 10 + (str[0] - '0');
        
        if(ret / 10 != pre_num) {
            if(flag == 1){
                return INT_MAX;
            } else {
                return INT_MIN;
            }
        }
        str++;
    }
    return ret *flag;
}
