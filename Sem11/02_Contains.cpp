// Contains -> element in an array with recurion
bool contains(int* arr, int len, int el, int index)
{
	if (index >= len)
		return false;

	if (el == arr[index])
		return true;

	return contains(arr, len, el, index + 1);
}

bool contains(int* arr, int len, int el)
{
	if (len == 0)
		return false;
	return arr[len - 1] == el || contains(arr, len - 1, el);
}