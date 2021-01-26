//1) Search:
void CButton::SetCurrentVisual(CGraphicImageInstance* pVisual) {
    m_pcurVisual = pVisual;
    m_pcurVisual->SetPosition(m_rect.left, m_rect.top);
}

//2) Replace with:
void CButton::SetCurrentVisual(CGraphicExpandedImageInstance* pVisual) {
    m_pcurVisual = pVisual;
    m_pcurVisual->SetPosition(m_rect.left, m_rect.top);
}

void CButton::SetScale(float x, float y) {
	if (!m_upVisual.IsEmpty())
		m_upVisual.SetScale(x, y);

	if (!m_overVisual.IsEmpty())
		m_overVisual.SetScale(x, y);

	if (!m_downVisual.IsEmpty())
		m_downVisual.SetScale(x, y);

	if (!m_disableVisual.IsEmpty())
		m_disableVisual.SetScale(x, y);

	const float width = static_cast<float>(GetWidth()) * x;
	const float height = static_cast<float>(GetHeight()) * y;

	SetSize(static_cast<long>(width), static_cast<long>(height));
}
//////////////////////////////////////////////////////////////////////////////