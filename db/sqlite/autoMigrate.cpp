//
// Created by liuzehao on 2021/9/8.
//

#include <sqlite_orm/sqlite_orm.h>
#include "../../models/models.h"
#include <string>

using namespace std;
using namespace sqlite_orm;

string dbHead = "/home/liuzehao/FILES/sqliteData/";

// 初始化Singer数据表
auto getSingerDB() {
    auto storage = make_storage(
            dbHead + "db.sqlite",
            make_table("l_singer",
                       make_column("s_id", &Singer::_s_id, autoincrement(), primary_key()),
                       make_column("name", &Singer::_name),
                       make_column("gender", &Singer::_gender),
                       make_column("from", &Singer::_from),
                       make_column("g_id", &Singer::_g_id)
            )
    );
    storage.sync_schema();
    return storage;
}

// 初始化Grade数据表
auto getGradeDB() {
    auto storage = make_storage(
            dbHead + "db.sqlite",
            make_table("l_grade",
                       make_column("g_id", &Grade::_g_id),
                       make_column("jid", &Grade::_jid),
                       make_column("rds", &Grade::_rds),
                       make_column("score", &Grade::_score)
            )
    );
    storage.sync_schema();
    return storage;
}

// 初始化裁判数据库
auto getJudgeDB() {
    auto storage = make_storage(
            dbHead + "db.sqlite",
            make_table("l_judge",
                       make_column("jid", &Judge::_id),
                       make_column("username", &Judge::_username),
                       make_column("rds", &Judge::_password)
            )
    );
    storage.sync_schema();
    return storage;
}
