//
// Created by liuzehao on 2021/9/7.
//

#ifndef LEARNCROW_MODELS_H
#define LEARNCROW_MODELS_H

#endif //LEARNCROW_MODELS_H

#include <string>
#include <iostream>
using namespace std;

// 数据库表名
const std::string SingerTable = "l_singer";
const std::string JudgeTable = "l_judge";
const std::string GradeTable = "l_grade";

const int LEN = 3;



class Grade {
public:
    long _g_id; // 成绩id
    long _jid; // 评委id
    long _rds; // 每一轮id
    double _score; //分数

    Grade(){}

    // 重载 << 运算符
    friend std::ostream& operator<<(std::ostream& out, Grade& g)
    {
        out << "g_id: " << g._g_id << endl;
        out << "jid: " << g._jid << endl;
        out << "rds: " << g._rds << endl;
        out << "score: " << g._score << endl;
        return out;
    }
};
class Judge{
public:
    long _id; //评委id
    std::string _username; // 评委帐号
    std::string _password; // 评委密码

    Judge(){}

    Judge(string username, string password) : _username(username), _password(password){this->_id = 0;}

    // 重载 << 运算符
    friend std::ostream& operator<<(std::ostream& out, Judge& j)
    {
        out << "id: " << j._id << endl;
        out << "username: " << j._username << endl;
        out << "password: " << j._password << endl;
        return out;
    }
} ;

class Singer{
public:
    long _s_id; // 歌手id
    std::string _name; //歌手姓名
    bool _gender; //歌手性别
    std::string _from; //歌手籍贯
    long _g_id; // 成绩id

    Singer(){this->_s_id = 0; this->_g_id = 0;}

    Singer(string name, bool gender, string from) : _name(name), _gender(gender), _from(from){this->_s_id = 0; this->_g_id = 0;}


    // 重载 << 运算符
    friend std::ostream& operator<<(std::ostream& out, Singer& s)
    {
        out << "s_id: " << s._s_id << endl;
        out << "name: " << s._name << endl;
        out << "gender: " << s._gender << endl;
        out << "from: " << s._from << endl;
        out << "g_id: " << s._g_id << endl;
        return out;
    }

};
