#ifndef _KDTREE_H_
#define _KDTREE_H_

typedef struct Kdtree {
	float x;
	float y;
	float z;
	
	// data
	float v; // velocity
	float p; // pressure
		
} Kdtree;

/* Build the kd-tree */
void kd_build(Kdtree *tree, Kdtree *kd_tree, int size, int axis, int c_index);

/* Print the kdtree */
void kd_print(Kdtree *tree, int size);

/* Free the kdtree */
void kd_free(Kdtree *tree);


#endif	/* _KDTREE_H_ */
