import { HEADER } from "./GLOBAL.js"
var index_data = {
    header: HEADER,
    banner:
    {
        title: "一只写代码的猫",
        introduction: "loving coding"
    },
    textList:
        [
            {
                "title": "我的 2022 盘点",
                "link": "./article/demo.html",
                "time": "2022/1/18",
                "decription": "一段没有意义的测试话"
            },
            {
                "title": "我的 2021 盘点",
                "link": "./",
                "time": "2022/1/19",
                "decription": "对于 2021年，如果仅从岁月流逝的角度，当然是期望时光时光慢些吧；如果从这一年外界的疯狂变幻来讲，又想对它说慢走不送。但终会无力地看清，时间的洪流上并无刻度，你喜欢或者不喜欢，它并不在意，兀自「逝者如斯夫，不舍昼夜」"
            },
        ],
    message: "hello"

}
new Vue(
    {
        el: "#app",
        data: index_data
    }
)