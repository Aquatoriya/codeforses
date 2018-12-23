s = input()
su = ''
su += '1' * s.count('1')
su += '2' * s.count('2')
su += '3' * s.count('3')

print('+'.join(su))
