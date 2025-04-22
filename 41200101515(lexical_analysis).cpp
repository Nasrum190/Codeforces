#include <iostream>
#include <vector>
#include <regex>
#include <string>

enum TokenType {
    NUMBER,
    ASSIGN,
    PLUS,
    MINUS,
    TIMES,
    DIVIDE,
    LPAREN,
    RPAREN,
    IDENTIFIER,
    WHITESPACE,
    UNKNOWN
};

struct Token {
    TokenType type;
    std::string lexeme;
};

std::string tokenTypeToString(TokenType type) {
    switch (type) {
        case NUMBER: return "NUMBER";
        case ASSIGN: return "ASSIGN";
        case PLUS: return "PLUS";
        case MINUS: return "MINUS";
        case TIMES: return "TIMES";
        case DIVIDE: return "DIVIDE";
        case LPAREN: return "LPAREN";
        case RPAREN: return "RPAREN";
        case IDENTIFIER: return "IDENTIFIER";
        case WHITESPACE: return "WHITESPACE";
        case UNKNOWN: return "UNKNOWN";
        default: return "UNKNOWN";
    }
}

std::vector<Token> lexer(const std::string &code) {
    std::vector<Token> tokens;
    std::vector<std::pair<TokenType, std::regex>> tokenTypes = {
        {NUMBER, std::regex(R"(\d+(\.\d*)?)")},
        {ASSIGN, std::regex(R")")},
        {PLUS, std::regex(R"(\+)")},
        {MINUS, std::regex(R"(-)")},
        {TIMES, std::regex(R"(\*)")},
        {DIVIDE, std::regex(R"(/)")},
        {LPAREN, std::regex(R"(\()")},
        {RPAREN, std::regex(R"(\))")},
        {IDENTIFIER, std::regex(R"([A-Za-z_]\w*)")},
        {WHITESPACE, std::regex(R"(\s+)")},
        {UNKNOWN, std::regex(R"(.)")}
    };

    std::string::const_iterator start = code.begin();
    std::string::const_iterator end = code.end();

    while (start != end) {
        std::smatch match;
        bool matched = false;
        for (const auto &tokenType : tokenTypes) {
            if (std::regex_search(start, end, match, tokenType.second, std::regex_constants::match_continuous)) {
                if (tokenType.first != WHITESPACE) {
                    tokens.push_back({tokenType.first, match.str()});
                }
                start += match.length();
                matched = true;
                break;
            }
        }
        if (!matched) {
            std::cerr << "Illegal character at position " << std::distance(code.begin(), start) << std::endl;
            break;
        }
    }

    return tokens;
}

int main() {
    std::string code = "x = 3 + 42 * (s - 1)";
    std::vector<Token> tokens = lexer(code);

    for (const auto &token : tokens) {
        std::cout << tokenTypeToString(token.type) << ": " << token.lexeme << std::endl;
    }

    return 0;
}
