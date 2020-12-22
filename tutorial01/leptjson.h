#ifndef LEPTJSON_H__
#define LEPTJSON_H__
/*JSON 中的数据类型*/
typedef enum { LEPT_NULL, LEPT_FALSE, LEPT_TRUE, LEPT_NUMBER, LEPT_STRING, LEPT_ARRAY, LEPT_OBJECT } lept_type;
/*树形结构的节点*/
typedef struct {
    lept_type type;
}lept_value;
/*表示JSON的解析结果*/
enum {
    LEPT_PARSE_OK = 0,
    LEPT_PARSE_EXPECT_VALUE,
    LEPT_PARSE_INVALID_VALUE,
    LEPT_PARSE_ROOT_NOT_SINGULAR
};
/*解析函数
 *@para:
 * v：传入的根节点指针，保存解析结果
 * json：传入的JSON文本是一个C字符串
 */

int lept_parse(lept_value* v, const char* json);

/*访问解析结果，获取解析结果的类型*/
lept_type lept_get_type(const lept_value* v);

#endif /* LEPTJSON_H__ */
