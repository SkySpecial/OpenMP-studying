The following example demonstrates how to use the task construct to process elements of a linked list in parallel. The 
pointer p is firstprivate by default on the task construct so it is not necessary to specify it in a firstprivate clause. 

struct node { int data; node* next; };
extern void process(node* );
void increment_list_items(node* head)
{
    #pragma omp parallel
    {
        #pragma omp single
        {
            for(node* p = head; p; p = p->next)
            {
            	#pragma omp task
            	process(p); // p is firstprivate by default
            }
        } 
    }
}
