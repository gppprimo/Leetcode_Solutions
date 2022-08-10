func myAtoi(s string) int {
    s = strings.TrimLeft(s, " ")
    
    if len(s) == 0 {
        return 0
    }
    
    m := 1
    i := 0
    if s[0] == '-' {
        m = -1
        i = 1
    }
    if s[0] == '+' {
        i = 1
    }
    
    res := 0
    for ; i < len(s); i++ {
        if !(s[i] >= '0' && s[i] <= '9') {
            return res * m
        }
        res = res * 10 + int(s[i] - '0') 
        if res * m <= math.MinInt32 {
			return math.MinInt32
		} else if res * m >= math.MaxInt32 {
			return math.MaxInt32
		}
    }
    return res * m
}
