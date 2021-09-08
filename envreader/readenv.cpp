////
//// Created by liuzehao on 2021/9/7.
////
//
//#include <map>
//#include <string>
//#include <boost/filesystem.hpp>
//#include <boost/token_functions.hpp>
//#include <boost/tokenizer.hpp>
//
//using namespace std;
//
//// 获取配置文件中的环境变量
//map<string, string> getEnvs() {
//    //使用boost库读取文件
//    boost::filesystem::path path("../env/dev_env.env");
//    // 加载文件流
//    boost::filesystem::ifstream ifs(path);
//    // 设置字符串分隔符为 =
//    boost::char_separator<char> sep("=");
//
//    // 用于存放从配置文件中读取的数据库连接信息
//    map<string, string> e_map;
//
//    // 用于存放临时环境变量字符串
//    string temp;
//
//    // 环境变量具体k,v
//    string k, v;
//
//    // 当文件流没有到达结尾时持续读取
//    while (!ifs.eof()) {
//        // 读入单行配置信息字符串
//        ifs >> temp;
//        // 将字符串进行分割
//        boost::tokenizer<boost::char_separator<char>> t(temp, sep);
//        // 获取结果的迭代器
//        boost::tokenizer<boost::char_separator<char>>::iterator iterator;
//
//        // 将获取的环境变量参数存储在map中
//        for (iterator = t.begin(); iterator != t.end(); iterator++) {
//            if (iterator == t.begin()) {
//                k = *iterator;
//            } else {
//                v = *iterator;
//            }
//        }
//        e_map[k] = v;
//    }
//    return e_map;
//}
