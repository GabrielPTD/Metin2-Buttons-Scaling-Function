//1) Search:
PyObject* wndImageSetScale(PyObject* poSelf, PyObject* poArgs) {
    UI::CWindow* pWindow;
    if (!PyTuple_GetWindow(poArgs, 0, &pWindow))
        return Py_BuildException();
    float fx;
    if (!PyTuple_GetFloat(poArgs, 1, &fx))
        return Py_BuildException();
    float fy;
    if (!PyTuple_GetFloat(poArgs, 2, &fy))
        return Py_BuildException();

    static_cast<UI::CExpandedImageBox*>(pWindow)->SetScale(fx, fy);

    return Py_BuildNone();
}

//2) Add after:
PyObject* wndButtonSetScale(PyObject* poSelf, PyObject* poArgs) {
    UI::CWindow* pWindow;
    if (!PyTuple_GetWindow(poArgs, 0, &pWindow))
        return Py_BuildException();
		
    float fx;
    if (!PyTuple_GetFloat(poArgs, 1, &fx))
        return Py_BuildException();
    float fy;
	
    if (!PyTuple_GetFloat(poArgs, 2, &fy))
        return Py_BuildException();

    static_cast<UI::CButton*>(pWindow)->SetScale(fx, fy);

    return Py_BuildNone();
}
//////////////////////////////////////////////////////////////////////////////
//1) Search:
{"SetScale", wndImageSetScale, METH_VARARGS},

//2) Add after:
{"SetButtonScale", wndButtonSetScale, METH_VARARGS},
//////////////////////////////////////////////////////////////////////////////