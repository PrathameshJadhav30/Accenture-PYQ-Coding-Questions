def check_password(s: str) -> int:
    if len(s) < 4 or s[0].isdigit():
        return 0

    has_digit = has_upper = False

    for i in range(len(s)):  
        ch = s[i]
        if ch.isspace() or ch == '/':
            return 0
        if ch.isdigit():
            has_digit = True
        if ch.isupper():
            has_upper = True

    return 1 if has_digit and has_upper else 0


print(check_password(input().strip()))
