var alldata = {
    "author": {
        "name": "codecat",
        "img": "./dist/img/logo.png"
    },
    "data":
        [
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
    "global": 10
}

var vue = new Vue({
    el: "#app",
    data: alldata
})