//1) Search:
void SetCurrentVisual(CGraphicImageInstance* pVisual);

//2) Replace with:
void SetCurrentVisual(CGraphicExpandedImageInstance* pVisual);

public:
	void CButton::SetScale(float x, float y);
//////////////////////////////////////////////////////////////////////////////
//1) Search:
	CGraphicImageInstance* m_pcurVisual;
    CGraphicImageInstance m_upVisual;
    CGraphicImageInstance m_overVisual;
    CGraphicImageInstance m_downVisual;
    CGraphicImageInstance m_disableVisual;
//2) Replace with:
	CGraphicExpandedImageInstance* m_pcurVisual;
    CGraphicExpandedImageInstance m_upVisual;
    CGraphicExpandedImageInstance m_overVisual;
    CGraphicExpandedImageInstance m_downVisual;
    CGraphicExpandedImageInstance m_disableVisual;