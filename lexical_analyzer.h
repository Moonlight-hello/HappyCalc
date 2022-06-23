#ifndef LEXICAL_ANALYZER_H
#define LEXICAL_ANALYZER_H
namespace calc{
//
class Token{
    enum Type{
        Number,
        Operator,
        Termination,
    };  
    public:
    Token(const char input);
    virtual ~Token();
    private:

};
class Error{
    enum Type{
        NO_ERROR,
        TOKEN_INVALID,
        GRAMER_INVALID,
    };
    public:
    Error();
    virtual ~Error();
};
//
class lexicalAnalyzer{
    public:
    lexicalAnalyzer();
    virtual ~lexicalAnalyzer();
    bool Parse(const std::string& instr);

    const std::vector<calc::Token>& GetTokenList()const;
    const calc::Error& GetErrorVariable();

    private:
    std::vector<calc::Token> token_list_;
    calc::Error error_;
    

}

}



#endif