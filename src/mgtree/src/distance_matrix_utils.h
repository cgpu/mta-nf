
#ifndef DISTANCE_MATRIX_UTILS_H
#define	DISTANCE_MATRIX_UTILS_H

#include "utils.h"
#include "sequence_utils.h"

/*
 *Distance Matrix
 */
struct Distance_matrix{
    int nseq;
    int **similarity_matrix; /*Pairwise ID levels: 1-10000*/
    int **score_similarity_matrix; /*Pairwise ID levels: 1-10000*/
    int **distance_matrix; /*Pairwise ID levels: 1-10000*/
};
typedef struct Distance_matrix Distance_matrix;

Distance_matrix *declare_distance_matrix(int nseq);
void free_distance_matrix(Distance_matrix *DM);

Distance_matrix *make_distance_matrix(Sequence *S);

int **ktup_dist_mat(char **seq, int nseq, int ktup, char *type);
int *makepointtable(int *pointt, int *n, int ktup);
int *code_seq (char *seq, char *type);
void makecompositiontable(short *table, int *pointt);
int commonsextet(short *table, int *pointt);
char** make_group_aa_mafft(int *ngroup, char *mode);

#endif	/* DISTANCE_MATRIX_UTILS_H */

