a_character = 'a'
a_code = ord(a_character)
print(a_code)
# The output is 97
a_character = chr(a_code)
print(a_character)
# The output is 'a'

first_bytes = b'123'
print(first_bytes)
# The output is b'123'
print(len(first_bytes))
# The output is 3
chinese_hello = bytes('你好，世界', encoding='utf-8')
print(chinese_hello)  # b'\xe4\xbd\xa0\xe5\xa5\xbd\xef\xbc\x8c\xe4\xb8\x96\xe7\x95\x8c'

first_number = (100).to_bytes(1, byteorder='little')
print(first_number)  # b'd'
 
second_number = (1024).to_bytes(2, byteorder='little')
print(second_number)  # b'\x00\x04'
 
third_number = (1024).to_bytes(2, byteorder='big')
print(third_number)  # b'\x04\x00'

#ZEROBYTES
zero_bytes = bytes(6)


bye_bytes = b'bye bytes'
hello_str = str(bye_bytes, encoding='utf-8')
hello_another_str = bye_bytes.decode()
print(hello_str == hello_another_str)  # True