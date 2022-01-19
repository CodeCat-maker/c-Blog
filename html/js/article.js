var article_data = {
    header: {
        title: "Cat's Room",
        navList: [
            {
                label: "首页",
                link: "/index"
            },
            {
                label: "关于",
                link: "/about"
            },
            {
                label: "留言",
                link: "/message"
            },
            {
                label: "链接",
                link: "/connect"
            }
        ]
    },
    article:
    {
        title: "我的第一篇博客",
        description: "这是一段描述",
        content: `IyBDKysgQmxvZyAhW10oaHR0cHM6Ly9pbWcuc2hpZWxkcy5pby9iYWRnZS9saWNlbnNlLU1JVC1ibHVlKSFbXShodHRwczovL2ltZy5zaGllbGRzLmlvL2JhZGdlL2xhbmd1YWdlLWMlMkIlMkItYmx1ZSkhW10oaHR0cHM6Ly9pbWcuc2hpZWxkcy5pby9iYWRnZS92ZXJzaW9uLTAuMC4xLWJsdWUpCgo8aW1nIHNyYz0iaHR0cHM6Ly9zMy5ibXAub3ZoL2ltZ3MvMjAyMi8wMS80MTA3MTg5Mjc4M2UyZDZlLnBuZyIgd2lkdGg9IjMwJSIgLz4KCiMjIOiuvuiuoemYtuautQoKIyMjIOmhtemdouiuvuiuoQoKKirmoLflvI8qKgrkuKrkurrph4fnlKjmnoHnroDmoLflvI8g5Lul6JOd6Imy5Li65Z+66LCDCgoqKuaVsOaNruWxleekuioqCumHh+eUqCB2dWUg5qGG5p62CgojIyMg5pW05L2T5p625p6ECgoqKuWNmuWuouacjeWKoeWZqCoqCgoxLiAg5a+55Y2a5a6i55qE5aKe5Yig5pS55p+l566h55CG6IO95YqbCjIuICDlr7nmoIfnrb7nmoTlop7liKDmn6XmlLnog73lipsKCioq5Y2a5a6i5a6i5oi356uvKioKCjEuICDljZrlrqLmoIfpopjliJfooajpobXpnaIKMi4gIOWNmuWuouWGheWuueWxleekuumhtemdogozLiAg5Y2a5a6i566h55CG6aG16Z2iCjQuICDljZrlrqLlhoXlrrnnvJbovpHpobXpnaIKCioq5YWz5LqO5pWw5o2u5a2Y5YKo5ZKM5Lqk5LqSKioKCjEuICDmnI3liqHlmajlrZjlgqggbWFya2Rvd24g5qC85byP55qE5pWw5o2uCjIuICDliY3nq6/pgJrov4cgZWRpdG9yLm1kIOi/meS4quW3peWFt+WwhiBtYXJrZG93biDnmoTmlofmoaPlhoXlrrnmj5DkuqTnu5nmnI3liqHlmagsIOaIluiAheino+aekOacjeWKoeWZqOi/lOWbnueahCBtYXJrZG93biDkvZzkuLrliY3nq6/pobXpnaLlhoXlrrkuCgojIyMgYXBpIOiuvuiuoQoKUmVzdGZ1bCDpo47moLwgQVBJCgojIyMjIOaWsOWinuaWh+eroAoKYGBgCuivt+axgjoKUE9TVCAvYWRkQmxvZwp7CiAgICAidGl0bGUiOiAi5oiR55qE56ys5LiA56+H5Y2a5a6iIiwKICAgICJkZXNjcmlwdGlvbiI6ICLov5nmmK/kuIDmrrXmj4/ov7AiCiAgICAiY29udGVudCI6ICLljZrlrqLnmoQgbWFya2Rvd24g5qC85byP5YaF5a65IiwKICAgICJ0YWdfaWQiOiAxLAogICAgImNyZWF0ZV90aW1lIjogIjIwMTkvMDUvMTQiLAp9Cgrlk43lupQ6CkhUVFAvMS4xIDIwMCBPSwp7Cgkib2siOiB0cnVlLAp9CmBgYAoKIyMjIOaVsOaNruW6k+iuvuiuoQoKQysrIOaTjeS9nCBNeVNRTCDmlbDmja7lupMKCiMjIyMg5Y2a5a6i6KGoCgp8IOWIl+WQjSAgICAgICAgfCDnsbvlnosgICAgIHwg5aSH5rOoICAgICB8CnwgLS0tLS0tLS0tLS0gfCAtLS0tLS0tLSB8IC0tLS0tLS0tIHwKfCBUQUdfSUQgICAgICB8IGludCAgICAgIHwg5Y2a5a6iIGlkICB8CnwgVElUTEUgICAgICAgfCBjaGFyKDIwKSB8IOWNmuWuouagh+mimCB8CnwgREVDUklQVElPTiAgfCBUZXh0ICAgICB8IOWNmuWuouaPj+i/sCB8CnwgQ09OVEVOVCAgICAgfCBUZXh0ICAgICB8IOWNmuWuouWGheWuuSB8CnwgQ1JFQVRFX1RJTUUgfCBEYXRlICAgICB8IOWIm+W7uuaXpeacnyB8CgojIyDlvZPliY3ov5vluqYKCioq5a6M5oiQ6aaW6aG1IGh0bWwg6K6+6K6hKioKCjIwMjItMDEtMTgK`,
        tag_id: 1,
        create_time: "2022/01/18",
    }
}
new Vue({
    el: "#app",
    data: article_data
})