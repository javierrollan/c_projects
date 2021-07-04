# Chapter 2: Comments

## Section 2.1: Preprocessor

For large chunks of code we can use the `#if 0` and `#endif` directive.

```c
#if 0 /* Starts the "Comment" */

/* Code with multi-line comments */
int foo(){
    /* Some more code */
    
    ....

    /* Comment describing if statement */
    if(someTest){
        /* more comments */
        ...
        return 1;
    }
    return 0;
}
#endif /* 0 */
```

## Section 2.2: /**/ delimited comments 

Other type of comment
```c
/* This is a comment */
```

```c
/* This is a
multi-line
comment */
```

## Section 2.3: // delimited comments

Other type of comment
```c
// this is a comment
```

```c
// Each line are single-line comment
// need to start with
// the double forward-slash
```

