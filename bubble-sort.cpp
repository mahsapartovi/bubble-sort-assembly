 #include <...>

 int main()
 {
  int a[1000];
  int n;
 	std::cin >> n;
 for (int i = 0; i < n; i++)
 {
 	std::cin >> a[i];
 }
 for (int i = 0; i < n; i++)
 {
 	for (int j = i + 1; j < n; j++){
 		__asm{
 			mov eax, i
 			mov ebx, TYPE a
 			mul ebx
 			add eax, OFFSET a
 			mov ecx, eax
			mov eax, j
			mov ebx, TYPE a
 			mul ebx
 			add eax, OFFSET a
 			mov ebx, [ecx]
			cmp ebx, [eax]
 			jle L
 			mov edx, [eax]
 			mov[eax], ebx
			mov[ecx], edx
 	L :

		}
	}
 }
 for (int i = 0; i < n; i++)
 {
 	std::cout << a[i] << ' ';
 }
 std::cin >> a[0];
  return 0;
  }