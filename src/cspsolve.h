int    load_lp(void);
int    unload_lp(void);
void   setup_lp(void);
void   put_base(void);
void   get_base(void);
int    del_cols(void);
int    del_rows(void);
int    add_rows(int,CONSTRAINT **);
void   del_col(VARIABLE *,int);
void   deletelastrow(void);
int    add_cols(int,VARIABLE**);
int    add_cols_all(void);
void   rem_cols(int,VARIABLE**);
double solve_lp(int);
double dualcost(double *,double *);
void   get_solution(void);
double solve_child_col(VARIABLE *,double,int);
double solve_child_row(CONSTRAINT *,int);
int    integer_solution(void);
void   control(void);
void   activa_pricing(void);
