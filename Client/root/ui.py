###1) Search in class Button(Window):
	def RegisterWindow(self, layer):
		self.hWnd = wndMgr.RegisterButton(self, layer)

###2) Add after:
	def SetScale(self, scaleW, scaleH):
		wndMgr.SetButtonScale(self.hWnd, scaleW, scaleH)