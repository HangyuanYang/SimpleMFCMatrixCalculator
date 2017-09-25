; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CList1View
LastTemplate=generic CWnd
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MatrixOperation.h"
LastPage=0

ClassCount=10
Class1=CMatrixOperationApp
Class2=CMatrixOperationDoc
Class3=CMatrixOperationView
Class4=CMainFrame
Class9=CList4View

ResourceCount=6
Resource1=IDD_DIALOG3
Resource2=IDR_MAINFRAME
Resource3=IDD_DIALOG2
Resource4=IDD_ABOUTBOX
Resource5=IDD_DIALOG1
Class10=CMySplitterWnd
Class5=CAboutDlg
Class6=CList1View
Class7=CList2View
Class8=CList3View
Resource6=IDD_DIALOG4

[CLS:CMatrixOperationApp]
Type=0
HeaderFile=MatrixOperation.h
ImplementationFile=MatrixOperation.cpp
Filter=N

[CLS:CMatrixOperationDoc]
Type=0
HeaderFile=MatrixOperationDoc.h
ImplementationFile=MatrixOperationDoc.cpp
Filter=N

[CLS:CMatrixOperationView]
Type=0
HeaderFile=MatrixOperationView.h
ImplementationFile=MatrixOperationView.cpp
Filter=C


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=CMainFrame




[CLS:CAboutDlg]
Type=0
HeaderFile=MatrixOperation.cpp
ImplementationFile=MatrixOperation.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_APP_ABOUT
CommandCount=16

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[DLG:IDD_DIALOG1]
Type=1
Class=CList1View
ControlCount=21
Control1=IDC_BUTTON1,button,1342242816
Control2=IDC_BUTTON2,button,1342242816
Control3=IDC_BUTTON3,button,1342242816
Control4=IDC_BUTTON4,button,1342242816
Control5=IDC_BUTTON5,button,1342242816
Control6=IDC_BUTTON6,button,1342242816
Control7=IDC_ROWA,edit,1350639744
Control8=IDC_COLUMNA,edit,1350639744
Control9=IDC_ROWB,edit,1350639744
Control10=IDC_COLUMNB,edit,1350639744
Control11=IDC_STATIC,static,1342308353
Control12=IDC_STATIC,static,1342308353
Control13=IDC_STATIC,static,1342308353
Control14=IDC_STATIC,static,1342308353
Control15=IDC_STATIC,static,1342308353
Control16=IDC_STATIC,static,1342308353
Control17=IDC_BUTTON7,button,1342242816
Control18=IDC_BUTTON8,button,1342242816
Control19=IDC_RADIO1,button,1342373897
Control20=IDC_RADIO2,button,1342242825
Control21=IDC_STATIC,static,1342308865

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[DLG:IDD_DIALOG2]
Type=1
Class=CList2View
ControlCount=1
Control1=IDC_MatrixA,edit,1350633478

[DLG:IDD_DIALOG3]
Type=1
Class=CList3View
ControlCount=1
Control1=IDC_MatrixB,edit,1350633478

[DLG:IDD_DIALOG4]
Type=1
Class=CList4View
ControlCount=1
Control1=IDC_MatrixAnswer,edit,1350633478

[CLS:CList1View]
Type=0
HeaderFile=List1View.h
ImplementationFile=List1View.cpp
BaseClass=CFormView
Filter=D
VirtualFilter=VWC
LastObject=IDC_BUTTON7

[CLS:CList2View]
Type=0
HeaderFile=List2View.h
ImplementationFile=List2View.cpp
BaseClass=CFormView
Filter=D
LastObject=IDC_MatrixA
VirtualFilter=VWC

[CLS:CList3View]
Type=0
HeaderFile=List3View.h
ImplementationFile=List3View.cpp
BaseClass=CFormView
Filter=D
VirtualFilter=VWC
LastObject=IDC_EDIT1

[CLS:CList4View]
Type=0
HeaderFile=List4View.h
ImplementationFile=List4View.cpp
BaseClass=CFormView
Filter=D
LastObject=IDC_EDIT1
VirtualFilter=VWC

[CLS:CMySplitterWnd]
Type=0
HeaderFile=MySplitterWnd.h
ImplementationFile=MySplitterWnd.cpp
BaseClass=generic CWnd
Filter=W

