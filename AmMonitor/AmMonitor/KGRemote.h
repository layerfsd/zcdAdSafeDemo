

//��������Ȩ��
bool EnableDebugPrivilege(const LPCTSTR name);

     
void enableProcessPrivilege();
;
int KGRemoteInjectLibrary(UINT processPID,LPCTSTR dllPath);


int KGRemoteEjectLibrary(UINT processPID,LPCTSTR dllPath);


DWORD KGEnumProcEjectLibrary(LPCTSTR lpcszPath);


DWORD KGEnumProcInjectLibraryIE(LPCTSTR lpcszPath);
DWORD KGEnumProcEjectLibraryIE(LPCTSTR lpcszPath);
