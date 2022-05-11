**_<big><big><head>0x17. C - Doubly linked lists</big></big></head>_**

<p><img style="display: block;-webkit-user-select: none;margin: auto;background-color: hsl(0, 0%, 90%);transition: background-color 300ms;" src="https://static.javatpoint.com/ds/images/doubly-linked-list2.png"></p>

**_<big><head>Structure used</head></big>_**

<pre><code>/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
</code></pre>
