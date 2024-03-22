#include <stdio.h>
#include <stdlib.h>
#include "list.h"
List l;
int main()
{
    create_list(&l);
    insert_at_pos(&l,1,10);
    insert_at_beg(&l,1);
    insert_at_pos(&l,2,5);
    insert_at_end(&l,30);
    insert_at_pos(&l,3,8);
    insert_at_pos(&l,10,156);
    printf("count=%d\n",count_nodes(&l));
    view_nodes(&l);
    delete_last(&l);
    printf("count=%d\n",count_nodes(&l));
    view_nodes(&l);
    delete_first(&l);
    printf("count=%d\n",count_nodes(&l));
    view_nodes(&l);
    delete_at_pos(&l,2);
    printf("count=%d\n",count_nodes(&l));
    view_nodes(&l);
    reverse_list(&l);
    view_nodes(&l);

    return 0;
}
