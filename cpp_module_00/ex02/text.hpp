
#ifndef MEGAOPHONE_H
# define MEGAOPHONE_H

// class Sample {

// public:

//     int foo;

//     Sample(void);
//     ~Sample(void);

//     void bar(void);
// };
/* ************************************ */
// class Sample1 {
//     public:

//         char a1;
//         int a2;
//         float a3;

//     Sample1(char p1, int p2, float p3);
//     ~Sample1(void);
// };
/* const*************************************** */
// class Sample{
//     public:

//         float const pi;
//         int qd;

//     Sample(float const f);
//     ~Sample(void);

//     void bar(void) const;
// };
/* visibility ******************************* */
// class Sample {

// public:

//     int publicfoo;

//     Sample(void);
//     ~Sample(void);

//     void publicbar(void) const;

// private:

//     int _privatefoo;

//     void _privatebar(void) const;
// };
/*  accessors c++ ,if else ************************* */
// class Sample {
    
//     public:
//         Sample (void);
//         ~Sample (void);

//         int getfoo(void) const;
//         void setfoo(int v);

//     private:
//         int _foo;
// };
/* comparaison 对比比较******************************************************************/
// class Sample {
    
//     public:
//         Sample (int v);
//         ~Sample (void);

//         int getfoo(void) const;
//         int comparer(Sample *other) const; 

//     private:
//         int _foo;
// };
/* Non member attributes and non member functions ******/
// class Sample {
    
//     public:
//         Sample (void);
//         ~Sample (void);

//        static int getnbinst(void); 

//     private:
//         static int _nbinst;
// };
/* poiter *************************************************************************/
class Sample {
    
    public:

        int foo;
        Sample (void);
        ~Sample (void);

    void bar(void)const;
};

#endif