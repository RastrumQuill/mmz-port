// sub_08001314 at 0x08001314 (thumb)

void sub_08001314(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0200101c;
  iVar1 = DAT_02001004;
  if (DAT_02000fd1 == '\x04') {
    if (DAT_02000ffc < DAT_02000ff4) {
      iVar3 = 0;
      do {
        *(undefined2 *)(iVar1 + iVar3) = *(undefined2 *)(iVar2 + DAT_02001000);
        DAT_02001000 = DAT_02001000 + 2;
        iVar3 = iVar3 + 2;
      } while (iVar3 < 0x10);
      DAT_02000ffc = DAT_02000ffc + 0xe;
    }
    else {
      sub_08001350();
    }
  }
  return;
}

