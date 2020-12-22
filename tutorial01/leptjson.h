#ifndef LEPTJSON_H__
#define LEPTJSON_H__
/*JSON �е���������*/
typedef enum { LEPT_NULL, LEPT_FALSE, LEPT_TRUE, LEPT_NUMBER, LEPT_STRING, LEPT_ARRAY, LEPT_OBJECT } lept_type;
/*���νṹ�Ľڵ�*/
typedef struct {
    lept_type type;
}lept_value;
/*��ʾJSON�Ľ������*/
enum {
    LEPT_PARSE_OK = 0,
    LEPT_PARSE_EXPECT_VALUE,
    LEPT_PARSE_INVALID_VALUE,
    LEPT_PARSE_ROOT_NOT_SINGULAR
};
/*��������
 *@para:
 * v������ĸ��ڵ�ָ�룬����������
 * json�������JSON�ı���һ��C�ַ���
 */

int lept_parse(lept_value* v, const char* json);

/*���ʽ����������ȡ�������������*/
lept_type lept_get_type(const lept_value* v);

#endif /* LEPTJSON_H__ */
