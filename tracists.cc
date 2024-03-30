local library = loadstring(game:HttpGet("https://raw.githubusercontent.com/laagginq/ui-libraries/main/nbt/src.lua"))()
local window = library:Win()
local tap1 = window:addtap("Main")
local tap2 = window:addtap("Camlock")
local page1 = tap1:addpage()
local page2 = tap1:addpage()
local page3 = tap1:addpage()
local page4 = tap1:addpage()
page1:Ti("tracists")

page1:Toggle("ScriptHub",nil, function(value)
    loadstring(game:HttpGet("https://raw.githubusercontent.com/scripthubekitten/scripthubv3beta/main/scripthubv3beta1", true))()
end)

page1:Button("6vain Private", function(value)
    loadstring(game:HttpGet("https://pastebin.com/raw/ue2VfT6Z"))();
end)

page1:Button1("TrashTalk", function(value)
    loadstring(game:HttpGet("https://pastebin.com/C7tcr9pR"))();
end)

page1:Button1("OP DOT |Q|", function(value)
    loadstring(game:HttpGet("https://pastebin.com/UjbGczSJ"))();
end)

local getlable = page1:Label("tracists on discord")

page1:Button1("OP CAMLOCK Hc or Dh|Q|", function(value)
    loadstring(game:HttpGet("https://pastebin.com/BHxG0jT5"))();
end)

page2:Button1("tracists with RESOVLER", function(value)
    loadstring(game:HttpGet("https://raw.githubusercontent.com/badrnick15/tracist/main/tracists%20with%20RESOVLER"))();
end)

page4:Ti("tracists on discord")

page4:Toggle("Bypass Chat",nil, function(value)
    loadstring(game:HttpGet('https://pastes.io/raw/lstrrfipqq'))();
end)

page4:Button("Q-TOOL", function(value)
    loadstring(game:HttpGet("https://raw.githubusercontent.com/badrnick15/q-tool/main/README.md%5C%5C/q%20tool"))();
end)

page4:Button("Silent OP", function(value)
    loadstring(game:HttpGet("https://raw.githubusercontent.com/VloxsGG/VloxsGG/48655312e6ec17a5653825b1f83234ccb2420df6/Aura.cc%20Aura.cc%20Aura.cc"))()
end)

page4:Button("tracists OP", function(value)
    loadstring(game:HttpGet("https://raw.githubusercontent.com/bobbbb-b/bobbbb-b/main/Crimson"))()
end)

page4:Button("TpWalk V4", function(value)
    loadstring(game:HttpGet("https://raw.githubusercontent.com/TheRealXORA/Roblox-Scripts/main/Tpwalk%20V4%20%5B%20BETA%20%5D.lua"))()
end)

page4:Button("Silent tracists OP AUTOPRED", function(value)
    loadstring(game:HttpGet("https://raw.githubusercontent.com/badrnick15/silent-tracists/main/tracists%20op"))()
end)

page4:Button("tp script OP", function(value)
    loadstring(game:HttpGet("https://raw.githubusercontent.com/badrnick15/tp/main/teleport%20script"))()
end)
