// sub_080014D0 at 0x080014D0 (thumb)

void sub_080014D0(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_02000fd1 == '\x04') {
    if (DAT_02000ffc < DAT_02000ff0) {
      iVar2 = 0;
      iVar1 = DAT_02001000;
      do {
        *(undefined2 *)(&DAT_02001230 + iVar2) = *(undefined2 *)((int)&DAT_02001340 + iVar1);
        iVar1 = iVar1 + 2;
        iVar2 = iVar2 + 2;
      } while (iVar2 < 0x10);
      DAT_02000ffc = DAT_02000ffc + 0xe;
    }
    else {
      sub_08000FF0(&DAT_02000fd0);
    }
  }
  return;
}

