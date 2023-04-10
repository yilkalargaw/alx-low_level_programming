/**
 * main - displays the information contained in
 * the ELF header at the start of an ELF file.
 *
 * @argc: Number of arguments passed
 * @argv: Array of pointers to arguments
 *
 * Return: 0 on sucess
 */
int main(int argc, char **argv)
{
	return ((argc && argv[0]) ? 0 : 1);
}
