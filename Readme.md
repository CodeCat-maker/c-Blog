# C++ Blog ![](https://img.shields.io/badge/license-MIT-blue)![](https://img.shields.io/badge/language-c%2B%2B-blue)![](https://img.shields.io/badge/version-0.0.2-blue)

<img src="https://s3.bmp.ovh/imgs/2022/01/41071892783e2d6e.png" width="30%" />

## 设计阶段

### 页面设计

**样式**
个人采用极简样式 以蓝色为基调

**数据展示**
采用 vue 框架

### 整体架构

**博客服务器**

1.  对博客的增删改查管理能力
2.  对标签的增删查改能力

**博客客户端**

1.  博客标题列表页面
2.  博客内容展示页面
3.  博客管理页面
4.  博客内容编辑页面

**关于数据存储和交互**

1.  服务器存储 markdown 格式的数据
2.  前端通过 editor.md 这个工具将 markdown 的文档内容提交给服务器, 或者解析服务器返回的 markdown 作为前端页面内容.

### api 设计

Restful 风格 API

#### 新增文章

```
请求:
POST /add
{
    "title": "我的第一篇博客",
    "description": "这是一段描述"
    "content": "博客的 markdown 格式内容",
}

响应:
HTTP/1.1 200 OK
{
	"bbid": 20220025733,
	"code": 0,
	"message": "success",
	"time": "2022/2/4 14:32:13"
}
```

```
请求:
POST /delete
{
    "bbid":"20220025733"
}

响应:
HTTP/1.1 200 OK
{
	"code": 0,
	"message": "success",
	"time": "2022/2/4 14:32:57"
}
```

```
请求:
GET /find
{
    "page":1
}

响应:
HTTP/1.1 200 OK
{
	"code": 0,
	"data": [
		{
			"blid": 20220025701,
			"content": "content test",
			"create_time": "2022/2/4",
			"dectribe": "this is a test",
			"title": "test"
		},
		{
			"blid": 20220025701,
			"content": "content test",
			"create_time": "2022/2/4",
			"dectribe": "this is a test",
			"title": "test"
		}
	],
	"message": "success",
	"time": "2022/2/4 14:25:51"
}
```

### 数据库设计

C++ 操作 MySQL 数据库

#### 博客表

| 列名        | 类型     | 备注     |
| ----------- | -------- | -------- |
| BBID        | long     | 博客 id  |
| TITLE       | char(20) | 博客标题 |
| DECRIPTION  | Text     | 博客描述 |
| CONTENT     | Text     | 博客内容 |
| CREATE_TIME | Date     | 创建日期 |

## 当前进度

**初步完成 Server 端设计**
2022-2-4
