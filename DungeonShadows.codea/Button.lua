Button = class()

function Button:init(x, y, image)
    -- you can accept and set parameters here
    self.x = x
    self.y = y
    self.w = 32
    self.h = 32
    self.image = image
    self.imageWidth = nil
    self.imageHeight = nil
end

function Button:draw()
    if self.imageWidth then
        sprite(self.image, self.x, self.y, self.imageWidth, self.imageHeight)
    else
        sprite(self.image, self.x, self.y)
    end
end

function Button:touched(touch)
    if touch.state == BEGAN then
        if touch.x > self.x - self.w and touch.x < self.x + self.w and
        touch.y > self.y - self.h and touch.y < self.y + self.h then
            return true
        end
    end
    return false
end
