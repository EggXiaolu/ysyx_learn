#include <lcthw/list_algos.h>
#include <lcthw/dbg.h>

int List_bubble_sort(List *list, List_compare cmp){
    for (int i=0;i<list->count;i++){
        LIST_FOREACH(list,first,next,cur){
            ListNode *node_now = cur;
            ListNode *node_next = cur->next;
            if(!node_next){
                //下一个节点为空
                break;
            }
            if(cmp(node_now->value,node_next->value)>0){
                List_swap(node_now,node_next);
            }
        }
    }
    return 0;
}

List *merge(List *left, List *right, List_compare cmp){
    List *res=List_create();
    ListNode *left_node = left->first;
    ListNode *right_node = right->first;
    while(left_node || right_node){
        if(!right_node){
            List_push(res,left_node->value);
            left_node = left_node->next;
            continue;
        }else if(!left_node){
            List_push(res,right_node->value);
            right_node = right_node->next;
            continue;
        }
        if(cmp(left_node->value,right_node->value)<0){
            List_push(res,left_node->value);
            left_node = left_node->next;
        }else{
            List_push(res,right_node->value);
            right_node = right_node->next;
        }
    }
    return res;
}

List *List_merge_sort(List *list, List_compare cmp){
    if(list->count<=1){
        return list;
    }

    //分
    int midIndex=list->count/2;
    List *left_list=List_split(list,0,midIndex);
    List *right_list=List_split(list,midIndex + 1,list->count);

    List *left_list_res=List_merge_sort(left_list,cmp);
    List *right_list_res=List_merge_sort(right_list,cmp);

    //治合
    return merge(left_list_res,right_list_res,cmp);
}


List *List_insert_sorted(List *list, void *value, List_compare cmp){
    LIST_FOREACH(list,first,next,cur){
        if(cmp(cur->value,value)>0){
            if(cur==list->first){
                List_unshift(list,value);
            }else if(cur==list->last){
                List_push(list,value);
            }else{
                ListNode *node = malloc(sizeof(ListNode));
                node->value=value;
                //与前一个节点链接
                node->prev=cur->prev;
                cur->prev->next=node;
                //与后一个节点链接
                node->next=cur;
                cur->prev=node;
            }
        }
    }
    return list;
}