{"filter":false,"title":"nostacksandqueues.h","tooltip":"/exercises_stack_queue/nostacksandqueues.h","undoManager":{"mark":100,"position":100,"stack":[[{"start":{"row":125,"column":24},"end":{"row":125,"column":25},"action":"insert","lines":[")"],"id":314}],[{"start":{"row":153,"column":67},"end":{"row":156,"column":1},"action":"insert","lines":["","\t","\t","\t"],"id":322,"ignore":true}],[{"start":{"row":156,"column":1},"end":{"row":158,"column":1},"action":"insert","lines":["","\t","\t"],"id":323,"ignore":true}],[{"start":{"row":158,"column":1},"end":{"row":159,"column":1},"action":"insert","lines":["","\t"],"id":324,"ignore":true}],[{"start":{"row":156,"column":1},"end":{"row":200,"column":16},"action":"insert","lines":["stack<char> S;","\tstring postfix = \"\"; // Initialize postfix as empty string.","\tfor(int i = 0;i< expression.length();i++) {","","\t\t// Scanning each character from left. ","\t\t// If character is a delimitter, move on. ","\t\tif(expression[i] == ' ' || expression[i] == ',') continue; ","","\t\t// If character is operator, pop two elements from stack, perform operation and push the result back. ","\t\telse if(IsOperator(expression[i])) ","\t\t{","\t\t\twhile(!S.empty() && S.top() != '(' && HasHigherPrecedence(S.top(),expression[i]))","\t\t\t{","\t\t\t\tpostfix+= S.top();","\t\t\t\tS.pop();","\t\t\t}","\t\t\tS.push(expression[i]);","\t\t}","\t\t// Else if character is an operand","\t\telse if(IsOperand(expression[i]))","\t\t{","\t\t\tpostfix +=expression[i];","\t\t}","","\t\telse if (expression[i] == '(') ","\t\t{","\t\t\tS.push(expression[i]);","\t\t}","","\t\telse if(expression[i] == ')') ","\t\t{","\t\t\twhile(!S.empty() && S.top() !=  '(') {","\t\t\t\tpostfix += S.top();","\t\t\t\tS.pop();","\t\t\t}","\t\t\tS.pop();","\t\t}","\t}","","\twhile(!S.empty()) {","\t\tpostfix += S.top();","\t\tS.pop();","\t}","","\treturn postfix;"],"id":325,"ignore":true}],[{"start":{"row":204,"column":0},"end":{"row":205,"column":0},"action":"remove","lines":["\treturn string(\"\");",""],"id":326,"ignore":true}],[{"start":{"row":155,"column":1},"end":{"row":155,"column":2},"action":"insert","lines":["s"],"id":327,"ignore":true}],[{"start":{"row":155,"column":2},"end":{"row":155,"column":3},"action":"insert","lines":["t"],"id":328,"ignore":true}],[{"start":{"row":155,"column":3},"end":{"row":155,"column":4},"action":"insert","lines":["r"],"id":329,"ignore":true}],[{"start":{"row":155,"column":4},"end":{"row":155,"column":5},"action":"insert","lines":["i"],"id":330,"ignore":true}],[{"start":{"row":155,"column":5},"end":{"row":155,"column":6},"action":"insert","lines":["b"],"id":331,"ignore":true}],[{"start":{"row":155,"column":5},"end":{"row":155,"column":6},"action":"remove","lines":["b"],"id":332,"ignore":true}],[{"start":{"row":155,"column":5},"end":{"row":155,"column":6},"action":"insert","lines":["n"],"id":333,"ignore":true}],[{"start":{"row":155,"column":6},"end":{"row":155,"column":7},"action":"insert","lines":["g"],"id":334,"ignore":true}],[{"start":{"row":155,"column":7},"end":{"row":155,"column":8},"action":"insert","lines":[" "],"id":335,"ignore":true}],[{"start":{"row":155,"column":8},"end":{"row":155,"column":18},"action":"insert","lines":["expression"],"id":336,"ignore":true}],[{"start":{"row":155,"column":18},"end":{"row":155,"column":20},"action":"insert","lines":["()"],"id":337,"ignore":true}],[{"start":{"row":155,"column":19},"end":{"row":155,"column":23},"action":"insert","lines":["expr"],"id":338,"ignore":true}],[{"start":{"row":155,"column":24},"end":{"row":155,"column":25},"action":"insert","lines":[";"],"id":339,"ignore":true}],[{"start":{"row":151,"column":1},"end":{"row":153,"column":0},"action":"insert","lines":["","",""],"id":340,"ignore":true}],[{"start":{"row":153,"column":0},"end":{"row":169,"column":0},"action":"insert","lines":["bool IsOperand(char C) ","{","\tif(C >= '0' && C <= '9') return true;","\tif(C >= 'a' && C <= 'z') return true;","\tif(C >= 'A' && C <= 'Z') return true;","\treturn false;","}","","// Function to verify whether a character is operator symbol or not. ","bool IsOperator(char C)","{","\tif(C == '+' || C == '-' || C == '*' || C == '/' || C== '$')","\t\treturn true;","","\treturn false;","}",""],"id":341,"ignore":true}],[{"start":{"row":173,"column":0},"end":{"row":188,"column":12},"action":"remove","lines":["\tstring expression(expr);","\tstack<char> S;","\tstring postfix = \"\"; // Initialize postfix as empty string.","\tfor(int i = 0;i< expression.length();i++) {","","\t\t// Scanning each character from left. ","\t\t// If character is a delimitter, move on. ","\t\tif(expression[i] == ' ' || expression[i] == ',') continue; ","","\t\t// If character is operator, pop two elements from stack, perform operation and push the result back. ","\t\telse if(IsOperator(expression[i])) ","\t\t{","\t\t\twhile(!S.empty() && S.top() != '(' && HasHigherPrecedence(S.top(),expression[i]))","\t\t\t{","\t\t\t\tpostfix+= S.top();","\t\t\t\tS.pop();"],"id":353}],[{"start":{"row":171,"column":0},"end":{"row":191,"column":23},"action":"remove","lines":["string StacksAndQueues::convertInfixToPostfix(const string &expr) {","\t","","\t\t\t}","\t\t\tS.push(expression[i]);","\t\t}","\t\t// Else if character is an operand","\t\telse if(IsOperand(expression[i]))","\t\t{","\t\t\tpostfix +=expression[i];","\t\t}","","\t\telse if (expression[i] == '(') ","\t\t{","\t\t\tS.push(expression[i]);","\t\t}","","\t\telse if(expression[i] == ')') ","\t\t{","\t\t\twhile(!S.empty() && S.top() !=  '(') {","\t\t\t\tpostfix += S.top();"],"id":354},{"start":{"row":171,"column":0},"end":{"row":171,"column":1},"action":"insert","lines":["¡"]}],[{"start":{"row":172,"column":0},"end":{"row":187,"column":1},"action":"remove","lines":["\t\t\t\tS.pop();","\t\t\t}","\t\t\tS.pop();","\t\t}","\t}","","\twhile(!S.empty()) {","\t\tpostfix += S.top();","\t\tS.pop();","\t}","","\treturn postfix;","\t","\t","\t","}"],"id":355}],[{"start":{"row":171,"column":1},"end":{"row":172,"column":0},"action":"remove","lines":["",""],"id":356}],[{"start":{"row":171,"column":0},"end":{"row":171,"column":1},"action":"remove","lines":["¡"],"id":357}],[{"start":{"row":170,"column":0},"end":{"row":171,"column":0},"action":"remove","lines":["",""],"id":358}],[{"start":{"row":162,"column":0},"end":{"row":170,"column":0},"action":"remove","lines":["bool IsOperator(char C)","{","\tif(C == '+' || C == '-' || C == '*' || C == '/' || C== '$')","\t\treturn true;","","\treturn false;","}","",""],"id":359},{"start":{"row":162,"column":0},"end":{"row":162,"column":1},"action":"insert","lines":["¡"]}],[{"start":{"row":150,"column":1},"end":{"row":162,"column":1},"action":"remove","lines":["   ","}","","bool IsOperand(char C) ","{","\tif(C >= '0' && C <= '9') return true;","\tif(C >= 'a' && C <= 'z') return true;","\tif(C >= 'A' && C <= 'Z') return true;","\treturn false;","}","","// Function to verify whether a character is operator symbol or not. ","¡"],"id":360}],[{"start":{"row":98,"column":0},"end":{"row":150,"column":1},"action":"remove","lines":["\t","\tstd::queue<int> uno(queue1);","    std::queue<int> dos(queue2);","    ","        std::queue<int>  newQ;;","    while(uno.empty()!=true && dos.empty()!=true) {","    ","    ","    if(uno.front()>dos.front()){","    \t            newQ.push(dos.front());","    \t                        newQ.push(uno.front());","    \t                        ","    \t                dos.pop();","    \t                uno.pop();","    }","    ","    else if(uno.front()<=dos.front()){","         newQ.push(uno.front());","    \t newQ.push(dos.front());","    \t ","    \t ","    \t uno.pop();","    \t dos.pop();","    }","    ","    if(dos.empty()==true){","    \t","    \t\twhile  (uno.empty()!=true){","    \t\t\t         newQ.push(uno.front());","","    \t\t\t    \t uno.pop();","","    \t\t","    \t}","    \t","    }","    ","    if(uno.empty()==true){","    \t","    \twhile  (dos.empty()!=true){","    \t\t    \t newQ.push(dos.front());","","    \t\t    \t dos.pop();","","    \t}","    \t","    }","    }","    ","    ","    return newQ;","    "," "],"id":361}],[{"start":{"row":98,"column":0},"end":{"row":98,"column":1},"action":"insert","lines":["}"],"id":362}],[{"start":{"row":98,"column":1},"end":{"row":99,"column":0},"action":"insert","lines":["",""],"id":363}],[{"start":{"row":99,"column":0},"end":{"row":100,"column":0},"action":"insert","lines":["",""],"id":364}],[{"start":{"row":100,"column":0},"end":{"row":101,"column":0},"action":"insert","lines":["",""],"id":365}],[{"start":{"row":101,"column":0},"end":{"row":204,"column":1},"action":"insert","lines":["bool isOperator(char currentChar)","{","    switch (currentChar) {","    case '+':","    case '-':","    case '*':","    case '/':","    case '^':","    case '%':","        return true;","    default:","        return false;","    }","}","","// returns whether a `lOp` b `rOp` c == (a `lOp` b) `rOp` c","bool precedence(char leftOperator, char rightOperator)","{","    if ( leftOperator == '^' ) {","        return true;","    } else if ( rightOperator == '^' ) {","        return false;","    } else if ( leftOperator == '*' || leftOperator == '/' || leftOperator == '%' ) {","        return true;","    } else if ( rightOperator == '*' || rightOperator == '/' || rightOperator == '%' ) {","        return false;","    }","","    return true;","}","","#include <stdexcept>","#include <cctype>","#include <sstream>","#include <stack>","std::string convertToPostfix(const std::string& infix)","{","    std::stringstream postfix; // Our return string","    std::stack<char> stack;","    stack.push('('); // Push a left parenthesis ‘(‘ onto the stack.","","    for(std::size_t i = 0, l = infix.size(); i < l; ++i) {","        const char current = infix[i];","","        if (isspace(current)) {","            // ignore","        }","        // If it's a digit or '.' or a letter (\"variables\"), add it to the output","        else if(isalnum(current) || '.' == current) {","            postfix << current;","        }","","        else if('(' == current) {","            stack.push(current);","        }","","        else if(isOperator(current)) {","            char rightOperator = current;","            while(!stack.empty() && isOperator(stack.top()) && precedence(stack.top(), rightOperator)) {","                postfix << ' ' << stack.top();","                stack.pop();","            }","            postfix << ' ';","            stack.push(rightOperator);","        }","","        // We've hit a right parens","        else if(')' == current) {","            // While top of stack is not a left parens","            while(!stack.empty() && '(' != stack.top()) {","                postfix << ' ' << stack.top();","                stack.pop();","            }","            if (stack.empty()) {","                throw std::runtime_error(\"missing left paren\");","            }","            // Discard the left paren","            stack.pop();","            postfix << ' ';","        } else {","            throw std::runtime_error(\"invalid input character\");","        }","    }","","","    // Started with a left paren, now close it:","    // While top of stack is not a left paren","    while(!stack.empty() && '(' != stack.top()) {","        postfix << ' ' << stack.top();","        stack.pop();","    }","    if (stack.empty()) {","        throw std::runtime_error(\"missing left paren\");","    }","    // Discard the left paren","    stack.pop();","","    // all open parens should be closed now -> empty stack","    if (!stack.empty()) {","        throw std::runtime_error(\"missing right paren\");","    }","","    return postfix.str();","}"],"id":366}],[{"start":{"row":132,"column":0},"end":{"row":135,"column":16},"action":"remove","lines":["#include <stdexcept>","#include <cctype>","#include <sstream>","#include <stack>"],"id":367}],[{"start":{"row":116,"column":0},"end":{"row":132,"column":0},"action":"remove","lines":["// returns whether a `lOp` b `rOp` c == (a `lOp` b) `rOp` c","bool precedence(char leftOperator, char rightOperator)","{","    if ( leftOperator == '^' ) {","        return true;","    } else if ( rightOperator == '^' ) {","        return false;","    } else if ( leftOperator == '*' || leftOperator == '/' || leftOperator == '%' ) {","        return true;","    } else if ( rightOperator == '*' || rightOperator == '/' || rightOperator == '%' ) {","        return false;","    }","","    return true;","}","",""],"id":368}],[{"start":{"row":100,"column":0},"end":{"row":116,"column":0},"action":"remove","lines":["","bool isOperator(char currentChar)","{","    switch (currentChar) {","    case '+':","    case '-':","    case '*':","    case '/':","    case '^':","    case '%':","        return true;","    default:","        return false;","    }","}","",""],"id":369}],[{"start":{"row":97,"column":0},"end":{"row":98,"column":0},"action":"insert","lines":["",""],"id":370}],[{"start":{"row":98,"column":0},"end":{"row":99,"column":0},"action":"insert","lines":["",""],"id":371}],[{"start":{"row":99,"column":0},"end":{"row":100,"column":0},"action":"insert","lines":["",""],"id":372}],[{"start":{"row":100,"column":0},"end":{"row":101,"column":0},"action":"insert","lines":["",""],"id":373}],[{"start":{"row":98,"column":0},"end":{"row":127,"column":31},"action":"insert","lines":["queue<int> StacksAndQueues::merge(const queue<int> &queue1, const queue<int> &queue2) {","\tqueue<int> result;","\tqueue<int> queu1;","\tqueue<int> queu2;","\t","\twhile(!queu1.empty() && !queu2.empty()){","","    {","        if(queu1.front()<queu2.front())","        {","            result.push_back(queu1.front());","            queu1.pop_front();","        }","        else","        {","            result.push_back(queu2.front());","            queu2.pop_front();","        }","    }","    ","\t}","\t","\treturn result;","}","","string StacksAndQueues::convertInfixToPostfix(const string &expr) {","\treturn string(\"\");","}","","#endif /* STACKSANDQUEUES_H_ */"],"id":374}],[{"start":{"row":98,"column":0},"end":{"row":99,"column":0},"action":"remove","lines":["queue<int> StacksAndQueues::merge(const queue<int> &queue1, const queue<int> &queue2) {",""],"id":375}],[{"start":{"row":130,"column":0},"end":{"row":130,"column":1},"action":"remove","lines":["}"],"id":376}],[{"start":{"row":135,"column":3},"end":{"row":200,"column":25},"action":"remove","lines":[" std::stringstream postfix; // Our return string","    std::stack<char> stack;","    stack.push('('); // Push a left parenthesis ‘(‘ onto the stack.","","    for(std::size_t i = 0, l = infix.size(); i < l; ++i) {","        const char current = infix[i];","","        if (isspace(current)) {","            // ignore","        }","        // If it's a digit or '.' or a letter (\"variables\"), add it to the output","        else if(isalnum(current) || '.' == current) {","            postfix << current;","        }","","        else if('(' == current) {","            stack.push(current);","        }","","        else if(isOperator(current)) {","            char rightOperator = current;","            while(!stack.empty() && isOperator(stack.top()) && precedence(stack.top(), rightOperator)) {","                postfix << ' ' << stack.top();","                stack.pop();","            }","            postfix << ' ';","            stack.push(rightOperator);","        }","","        // We've hit a right parens","        else if(')' == current) {","            // While top of stack is not a left parens","            while(!stack.empty() && '(' != stack.top()) {","                postfix << ' ' << stack.top();","                stack.pop();","            }","            if (stack.empty()) {","                throw std::runtime_error(\"missing left paren\");","            }","            // Discard the left paren","            stack.pop();","            postfix << ' ';","        } else {","            throw std::runtime_error(\"invalid input character\");","        }","    }","","","    // Started with a left paren, now close it:","    // While top of stack is not a left paren","    while(!stack.empty() && '(' != stack.top()) {","        postfix << ' ' << stack.top();","        stack.pop();","    }","    if (stack.empty()) {","        throw std::runtime_error(\"missing left paren\");","    }","    // Discard the left paren","    stack.pop();","","    // all open parens should be closed now -> empty stack","    if (!stack.empty()) {","        throw std::runtime_error(\"missing right paren\");","    }","","    return postfix.str();"],"id":377}],[{"start":{"row":131,"column":0},"end":{"row":136,"column":1},"action":"remove","lines":["","","std::string convertToPostfix(const std::string& infix)","{","   ","}"],"id":378}],[{"start":{"row":130,"column":0},"end":{"row":131,"column":0},"action":"remove","lines":["",""],"id":379}],[{"start":{"row":129,"column":1},"end":{"row":130,"column":0},"action":"remove","lines":["",""],"id":380}],[{"start":{"row":129,"column":0},"end":{"row":129,"column":1},"action":"remove","lines":["\t"],"id":381}],[{"start":{"row":128,"column":0},"end":{"row":129,"column":0},"action":"remove","lines":["",""],"id":382}],[{"start":{"row":127,"column":0},"end":{"row":128,"column":0},"action":"remove","lines":["",""],"id":383}],[{"start":{"row":126,"column":31},"end":{"row":127,"column":0},"action":"remove","lines":["",""],"id":384}],[{"start":{"row":126,"column":30},"end":{"row":126,"column":31},"action":"remove","lines":["/"],"id":385}],[{"start":{"row":126,"column":29},"end":{"row":126,"column":30},"action":"remove","lines":["*"],"id":386}],[{"start":{"row":126,"column":28},"end":{"row":126,"column":29},"action":"remove","lines":[" "],"id":387}],[{"start":{"row":126,"column":27},"end":{"row":126,"column":28},"action":"remove","lines":["_"],"id":388}],[{"start":{"row":126,"column":26},"end":{"row":126,"column":27},"action":"remove","lines":["H"],"id":389}],[{"start":{"row":126,"column":25},"end":{"row":126,"column":26},"action":"remove","lines":["_"],"id":390}],[{"start":{"row":126,"column":24},"end":{"row":126,"column":25},"action":"remove","lines":["S"],"id":391}],[{"start":{"row":126,"column":23},"end":{"row":126,"column":24},"action":"remove","lines":["E"],"id":392}],[{"start":{"row":126,"column":22},"end":{"row":126,"column":23},"action":"remove","lines":["U"],"id":393}],[{"start":{"row":126,"column":21},"end":{"row":126,"column":22},"action":"remove","lines":["E"],"id":394}],[{"start":{"row":126,"column":20},"end":{"row":126,"column":21},"action":"remove","lines":["U"],"id":395}],[{"start":{"row":126,"column":19},"end":{"row":126,"column":20},"action":"remove","lines":["Q"],"id":396}],[{"start":{"row":126,"column":18},"end":{"row":126,"column":19},"action":"remove","lines":["D"],"id":397}],[{"start":{"row":126,"column":17},"end":{"row":126,"column":18},"action":"remove","lines":["N"],"id":398}],[{"start":{"row":126,"column":16},"end":{"row":126,"column":17},"action":"remove","lines":["A"],"id":399}],[{"start":{"row":126,"column":15},"end":{"row":126,"column":16},"action":"remove","lines":["S"],"id":400}],[{"start":{"row":126,"column":14},"end":{"row":126,"column":15},"action":"remove","lines":["K"],"id":401}],[{"start":{"row":126,"column":13},"end":{"row":126,"column":14},"action":"remove","lines":["C"],"id":402}],[{"start":{"row":126,"column":12},"end":{"row":126,"column":13},"action":"remove","lines":["A"],"id":403}],[{"start":{"row":126,"column":11},"end":{"row":126,"column":12},"action":"remove","lines":["T"],"id":404}],[{"start":{"row":126,"column":10},"end":{"row":126,"column":11},"action":"remove","lines":["S"],"id":405}],[{"start":{"row":126,"column":9},"end":{"row":126,"column":10},"action":"remove","lines":[" "],"id":406}],[{"start":{"row":126,"column":8},"end":{"row":126,"column":9},"action":"remove","lines":["*"],"id":407}],[{"start":{"row":126,"column":7},"end":{"row":126,"column":8},"action":"remove","lines":["/"],"id":408}],[{"start":{"row":126,"column":6},"end":{"row":126,"column":7},"action":"remove","lines":[" "],"id":409}],[{"start":{"row":126,"column":5},"end":{"row":126,"column":6},"action":"remove","lines":["f"],"id":410}],[{"start":{"row":126,"column":4},"end":{"row":126,"column":5},"action":"remove","lines":["i"],"id":411}],[{"start":{"row":126,"column":3},"end":{"row":126,"column":4},"action":"remove","lines":["d"],"id":412}],[{"start":{"row":126,"column":2},"end":{"row":126,"column":3},"action":"remove","lines":["n"],"id":413}],[{"start":{"row":126,"column":1},"end":{"row":126,"column":2},"action":"remove","lines":["e"],"id":414}],[{"start":{"row":126,"column":0},"end":{"row":126,"column":1},"action":"remove","lines":["#"],"id":415}],[{"start":{"row":125,"column":0},"end":{"row":126,"column":0},"action":"remove","lines":["",""],"id":416}],[{"start":{"row":123,"column":0},"end":{"row":124,"column":0},"action":"remove","lines":["\treturn string(\"\");",""],"id":417},{"start":{"row":123,"column":0},"end":{"row":188,"column":25},"action":"insert","lines":[" std::stringstream postfix; // Our return string","    std::stack<char> stack;","    stack.push('('); // Push a left parenthesis ‘(‘ onto the stack.","","    for(std::size_t i = 0, l = infix.size(); i < l; ++i) {","        const char current = infix[i];","","        if (isspace(current)) {","            // ignore","        }","        // If it's a digit or '.' or a letter (\"variables\"), add it to the output","        else if(isalnum(current) || '.' == current) {","            postfix << current;","        }","","        else if('(' == current) {","            stack.push(current);","        }","","        else if(isOperator(current)) {","            char rightOperator = current;","            while(!stack.empty() && isOperator(stack.top()) && precedence(stack.top(), rightOperator)) {","                postfix << ' ' << stack.top();","                stack.pop();","            }","            postfix << ' ';","            stack.push(rightOperator);","        }","","        // We've hit a right parens","        else if(')' == current) {","            // While top of stack is not a left parens","            while(!stack.empty() && '(' != stack.top()) {","                postfix << ' ' << stack.top();","                stack.pop();","            }","            if (stack.empty()) {","                throw std::runtime_error(\"missing left paren\");","            }","            // Discard the left paren","            stack.pop();","            postfix << ' ';","        } else {","            throw std::runtime_error(\"invalid input character\");","        }","    }","","","    // Started with a left paren, now close it:","    // While top of stack is not a left paren","    while(!stack.empty() && '(' != stack.top()) {","        postfix << ' ' << stack.top();","        stack.pop();","    }","    if (stack.empty()) {","        throw std::runtime_error(\"missing left paren\");","    }","    // Discard the left paren","    stack.pop();","","    // all open parens should be closed now -> empty stack","    if (!stack.empty()) {","        throw std::runtime_error(\"missing right paren\");","    }","","    return postfix.str();"]}],[{"start":{"row":59,"column":0},"end":{"row":60,"column":0},"action":"insert","lines":["",""],"id":418}],[{"start":{"row":60,"column":0},"end":{"row":61,"column":0},"action":"insert","lines":["",""],"id":419}],[{"start":{"row":61,"column":0},"end":{"row":62,"column":0},"action":"insert","lines":["",""],"id":420}],[{"start":{"row":62,"column":0},"end":{"row":63,"column":0},"action":"insert","lines":["",""],"id":421}],[{"start":{"row":60,"column":0},"end":{"row":163,"column":1},"action":"insert","lines":["bool isOperator(char currentChar)","{","    switch (currentChar) {","    case '+':","    case '-':","    case '*':","    case '/':","    case '^':","    case '%':","        return true;","    default:","        return false;","    }","}","","// returns whether a `lOp` b `rOp` c == (a `lOp` b) `rOp` c","bool precedence(char leftOperator, char rightOperator)","{","    if ( leftOperator == '^' ) {","        return true;","    } else if ( rightOperator == '^' ) {","        return false;","    } else if ( leftOperator == '*' || leftOperator == '/' || leftOperator == '%' ) {","        return true;","    } else if ( rightOperator == '*' || rightOperator == '/' || rightOperator == '%' ) {","        return false;","    }","","    return true;","}","","#include <stdexcept>","#include <cctype>","#include <sstream>","#include <stack>","std::string convertToPostfix(const std::string& infix)","{","    std::stringstream postfix; // Our return string","    std::stack<char> stack;","    stack.push('('); // Push a left parenthesis ‘(‘ onto the stack.","","    for(std::size_t i = 0, l = infix.size(); i < l; ++i) {","        const char current = infix[i];","","        if (isspace(current)) {","            // ignore","        }","        // If it's a digit or '.' or a letter (\"variables\"), add it to the output","        else if(isalnum(current) || '.' == current) {","            postfix << current;","        }","","        else if('(' == current) {","            stack.push(current);","        }","","        else if(isOperator(current)) {","            char rightOperator = current;","            while(!stack.empty() && isOperator(stack.top()) && precedence(stack.top(), rightOperator)) {","                postfix << ' ' << stack.top();","                stack.pop();","            }","            postfix << ' ';","            stack.push(rightOperator);","        }","","        // We've hit a right parens","        else if(')' == current) {","            // While top of stack is not a left parens","            while(!stack.empty() && '(' != stack.top()) {","                postfix << ' ' << stack.top();","                stack.pop();","            }","            if (stack.empty()) {","                throw std::runtime_error(\"missing left paren\");","            }","            // Discard the left paren","            stack.pop();","            postfix << ' ';","        } else {","            throw std::runtime_error(\"invalid input character\");","        }","    }","","","    // Started with a left paren, now close it:","    // While top of stack is not a left paren","    while(!stack.empty() && '(' != stack.top()) {","        postfix << ' ' << stack.top();","        stack.pop();","    }","    if (stack.empty()) {","        throw std::runtime_error(\"missing left paren\");","    }","    // Discard the left paren","    stack.pop();","","    // all open parens should be closed now -> empty stack","    if (!stack.empty()) {","        throw std::runtime_error(\"missing right paren\");","    }","","    return postfix.str();","}"],"id":422}],[{"start":{"row":97,"column":4},"end":{"row":162,"column":25},"action":"remove","lines":["std::stringstream postfix; // Our return string","    std::stack<char> stack;","    stack.push('('); // Push a left parenthesis ‘(‘ onto the stack.","","    for(std::size_t i = 0, l = infix.size(); i < l; ++i) {","        const char current = infix[i];","","        if (isspace(current)) {","            // ignore","        }","        // If it's a digit or '.' or a letter (\"variables\"), add it to the output","        else if(isalnum(current) || '.' == current) {","            postfix << current;","        }","","        else if('(' == current) {","            stack.push(current);","        }","","        else if(isOperator(current)) {","            char rightOperator = current;","            while(!stack.empty() && isOperator(stack.top()) && precedence(stack.top(), rightOperator)) {","                postfix << ' ' << stack.top();","                stack.pop();","            }","            postfix << ' ';","            stack.push(rightOperator);","        }","","        // We've hit a right parens","        else if(')' == current) {","            // While top of stack is not a left parens","            while(!stack.empty() && '(' != stack.top()) {","                postfix << ' ' << stack.top();","                stack.pop();","            }","            if (stack.empty()) {","                throw std::runtime_error(\"missing left paren\");","            }","            // Discard the left paren","            stack.pop();","            postfix << ' ';","        } else {","            throw std::runtime_error(\"invalid input character\");","        }","    }","","","    // Started with a left paren, now close it:","    // While top of stack is not a left paren","    while(!stack.empty() && '(' != stack.top()) {","        postfix << ' ' << stack.top();","        stack.pop();","    }","    if (stack.empty()) {","        throw std::runtime_error(\"missing left paren\");","    }","    // Discard the left paren","    stack.pop();","","    // all open parens should be closed now -> empty stack","    if (!stack.empty()) {","        throw std::runtime_error(\"missing right paren\");","    }","","    return postfix.str();"],"id":423}],[{"start":{"row":91,"column":0},"end":{"row":99,"column":0},"action":"remove","lines":["#include <stdexcept>","#include <cctype>","#include <sstream>","#include <stack>","std::string convertToPostfix(const std::string& infix)","{","    ","}",""],"id":424}],[{"start":{"row":157,"column":1},"end":{"row":222,"column":25},"action":"remove","lines":["std::stringstream postfix; // Our return string","    std::stack<char> stack;","    stack.push('('); // Push a left parenthesis ‘(‘ onto the stack.","","    for(std::size_t i = 0, l = infix.size(); i < l; ++i) {","        const char current = infix[i];","","        if (isspace(current)) {","            // ignore","        }","        // If it's a digit or '.' or a letter (\"variables\"), add it to the output","        else if(isalnum(current) || '.' == current) {","            postfix << current;","        }","","        else if('(' == current) {","            stack.push(current);","        }","","        else if(isOperator(current)) {","            char rightOperator = current;","            while(!stack.empty() && isOperator(stack.top()) && precedence(stack.top(), rightOperator)) {","                postfix << ' ' << stack.top();","                stack.pop();","            }","            postfix << ' ';","            stack.push(rightOperator);","        }","","        // We've hit a right parens","        else if(')' == current) {","            // While top of stack is not a left parens","            while(!stack.empty() && '(' != stack.top()) {","                postfix << ' ' << stack.top();","                stack.pop();","            }","            if (stack.empty()) {","                throw std::runtime_error(\"missing left paren\");","            }","            // Discard the left paren","            stack.pop();","            postfix << ' ';","        } else {","            throw std::runtime_error(\"invalid input character\");","        }","    }","","","    // Started with a left paren, now close it:","    // While top of stack is not a left paren","    while(!stack.empty() && '(' != stack.top()) {","        postfix << ' ' << stack.top();","        stack.pop();","    }","    if (stack.empty()) {","        throw std::runtime_error(\"missing left paren\");","    }","    // Discard the left paren","    stack.pop();","","    // all open parens should be closed now -> empty stack","    if (!stack.empty()) {","        throw std::runtime_error(\"missing right paren\");","    }","","    return postfix.str();"],"id":425},{"start":{"row":157,"column":1},"end":{"row":222,"column":25},"action":"insert","lines":["std::stringstream postfix; // Our return string","    std::stack<char> stack;","    stack.push('('); // Push a left parenthesis ‘(‘ onto the stack.","","    for(std::size_t i = 0, l = infix.size(); i < l; ++i) {","        const char current = infix[i];","","        if (isspace(current)) {","            // ignore","        }","        // If it's a digit or '.' or a letter (\"variables\"), add it to the output","        else if(isalnum(current) || '.' == current) {","            postfix << current;","        }","","        else if('(' == current) {","            stack.push(current);","        }","","        else if(isOperator(current)) {","            char rightOperator = current;","            while(!stack.empty() && isOperator(stack.top()) && precedence(stack.top(), rightOperator)) {","                postfix << ' ' << stack.top();","                stack.pop();","            }","            postfix << ' ';","            stack.push(rightOperator);","        }","","        // We've hit a right parens","        else if(')' == current) {","            // While top of stack is not a left parens","            while(!stack.empty() && '(' != stack.top()) {","                postfix << ' ' << stack.top();","                stack.pop();","            }","            if (stack.empty()) {","                throw std::runtime_error(\"missing left paren\");","            }","            // Discard the left paren","            stack.pop();","            postfix << ' ';","        } else {","            throw std::runtime_error(\"invalid input character\");","        }","    }","","","    // Started with a left paren, now close it:","    // While top of stack is not a left paren","    while(!stack.empty() && '(' != stack.top()) {","        postfix << ' ' << stack.top();","        stack.pop();","    }","    if (stack.empty()) {","        throw std::runtime_error(\"missing left paren\");","    }","    // Discard the left paren","    stack.pop();","","    // all open parens should be closed now -> empty stack","    if (!stack.empty()) {","        throw std::runtime_error(\"missing right paren\");","    }","","    return postfix.str();"]}],[{"start":{"row":222,"column":25},"end":{"row":224,"column":0},"action":"insert","lines":["","\t",""],"id":426}],[{"start":{"row":157,"column":1},"end":{"row":223,"column":1},"action":"remove","lines":["std::stringstream postfix; // Our return string","    std::stack<char> stack;","    stack.push('('); // Push a left parenthesis ‘(‘ onto the stack.","","    for(std::size_t i = 0, l = infix.size(); i < l; ++i) {","        const char current = infix[i];","","        if (isspace(current)) {","            // ignore","        }","        // If it's a digit or '.' or a letter (\"variables\"), add it to the output","        else if(isalnum(current) || '.' == current) {","            postfix << current;","        }","","        else if('(' == current) {","            stack.push(current);","        }","","        else if(isOperator(current)) {","            char rightOperator = current;","            while(!stack.empty() && isOperator(stack.top()) && precedence(stack.top(), rightOperator)) {","                postfix << ' ' << stack.top();","                stack.pop();","            }","            postfix << ' ';","            stack.push(rightOperator);","        }","","        // We've hit a right parens","        else if(')' == current) {","            // While top of stack is not a left parens","            while(!stack.empty() && '(' != stack.top()) {","                postfix << ' ' << stack.top();","                stack.pop();","            }","            if (stack.empty()) {","                throw std::runtime_error(\"missing left paren\");","            }","            // Discard the left paren","            stack.pop();","            postfix << ' ';","        } else {","            throw std::runtime_error(\"invalid input character\");","        }","    }","","","    // Started with a left paren, now close it:","    // While top of stack is not a left paren","    while(!stack.empty() && '(' != stack.top()) {","        postfix << ' ' << stack.top();","        stack.pop();","    }","    if (stack.empty()) {","        throw std::runtime_error(\"missing left paren\");","    }","    // Discard the left paren","    stack.pop();","","    // all open parens should be closed now -> empty stack","    if (!stack.empty()) {","        throw std::runtime_error(\"missing right paren\");","    }","","    return postfix.str();","\t"],"id":427}],[{"start":{"row":75,"column":0},"end":{"row":89,"column":1},"action":"remove","lines":["// returns whether a `lOp` b `rOp` c == (a `lOp` b) `rOp` c","bool precedence(char leftOperator, char rightOperator)","{","    if ( leftOperator == '^' ) {","        return true;","    } else if ( rightOperator == '^' ) {","        return false;","    } else if ( leftOperator == '*' || leftOperator == '/' || leftOperator == '%' ) {","        return true;","    } else if ( rightOperator == '*' || rightOperator == '/' || rightOperator == '%' ) {","        return false;","    }","","    return true;","}"],"id":428}],[{"start":{"row":60,"column":1},"end":{"row":75,"column":0},"action":"remove","lines":["ool isOperator(char currentChar)","{","    switch (currentChar) {","    case '+':","    case '-':","    case '*':","    case '/':","    case '^':","    case '%':","        return true;","    default:","        return false;","    }","}","",""],"id":429}],[{"start":{"row":60,"column":0},"end":{"row":60,"column":1},"action":"remove","lines":["b"],"id":430}],[{"start":{"row":59,"column":0},"end":{"row":60,"column":0},"action":"remove","lines":["",""],"id":431}],[{"start":{"row":58,"column":1},"end":{"row":59,"column":0},"action":"remove","lines":["",""],"id":432}]]},"ace":{"folds":[],"scrolltop":961.5,"scrollleft":0,"selection":{"start":{"row":58,"column":1},"end":{"row":58,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":71,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1477439970800,"hash":"1a354e5e1d0a4b4a2ca87c7cac7cecf182e25584"}