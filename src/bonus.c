/*
** EPITECH PROJECT, 2024
** organized
** File description:
** organized
*/

int display_help(void)
{
    my_printf("COMMANDS:\n");
    my_printf("add : To use the 'add' command, write the type ");
    my_printf("in uppercase followed by the name of your object.\n");
    my_printf("      The only types supported are: ");
    my_printf("WIRE, DEVICE, SENSOR, PROCESSOR, and ACTUATOR.\n");
    my_printf("disp: Write 'disp' to display all your objects. ");
    my_printf("If you write anything else after 'disp', the ");
    my_printf("program will stop.\n");
    my_printf("del : Write 'del' followed by <object id> ");
    my_printf("to delete an object from your list.\n");
    my_printf("sort: The 'sort' command is not yet available.\n\n\n");
    my_printf("TIPS:\n");
    my_printf("You can add or delete as many objects ");
    my_printf("as you want using the 'add' and 'del' commands.\n");
    my_printf("To do this, simply write 'add' or 'del' followed by:\n");
    my_printf("the TYPE and name of each object for 'add', ");
    my_printf("and the ID of each object for 'del'.\n");
    return 0;
}
