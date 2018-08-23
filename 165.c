int compareVersion(char* version1, char* version2) {
	int lenversion1 = strlen(version1);
	int lenversion2 = strlen(version2);
	int i = 0;
	int j = 0;
	int num1 = 0;
	int num2 = 0;
 
	while (i < lenversion1 || j < lenversion2)
	{
		while (i < lenversion1&&version1[i] != '.')
		{
			num1 = 10 * num1 + version1[i]-'0';
			i++;
		}
 
		while (j < lenversion2 && version2[j] != '.')
		{
			num2 = 10 * num2 + version2[j]-'0';
			j++;
		}
 
		if (num1>num2)return 1;
		else if (num1 < num2)return -1;
		i++;
		j++;
		num1 = 0;
		num2 = 0;
	}
	return 0;
}
