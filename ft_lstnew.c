t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlst;

	if (!(newlst = (t_list *)malloc((sizeof)(*newlst))))
		return (NULL);
	if (content == NULL)
	{
		newlst->content = NULL;
		newlst->content_size = 0;
	}
	else
	{
		if(!(newlst->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(newlst->content, content, content_size);
		newlst->content_size = content_size;
	}
	newlst->next = NULL;
	return (newlst);
}
