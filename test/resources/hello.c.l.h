/* Generated by           cobc 2.2.0 */
/* Generated from         /home/olegs/projects/gnucobol-debug/test/resources/hello.cbl */
/* Generated at           Apr 23 2020 17:55:55 */
/* GnuCOBOL build date    Jul 17 2018 20:29:40 */
/* GnuCOBOL package date  Sep 06 2017 18:48:43 UTC */
/* Compile command        cobc -free -x -g -d -fdebugging-line -fsource-location -ftraceall /home/olegs/projects/gnucobol-debug/test/resources/hello.cbl subsample.cbl subsubsample.cbl */

/* Program local variables for 'hello' */

/* Module initialization indicator */
static unsigned int	initialized = 0;

/* Module structure pointer */
static cob_module	*module = NULL;

/* Global variable pointer */
cob_global		*cob_glob_ptr;


/* Call parameters */
cob_field		*cob_procedure_params[1];

/* Perform frame stack */
struct cob_frame	*frame_overflow;
struct cob_frame	*frame_ptr;
struct cob_frame	frame_stack[255];


/* Data storage */
static int	b_2;	/* RETURN-CODE */
static cob_u8_t	b_6[5] __attribute__((aligned));	/* MYVAR */

/* End of data storage */


/* Fields */
static cob_field f_6	= {5, b_6, &a_2};	/* MYVAR */

/* End of fields */
