// sub_080013AC at 0x080013AC (thumb)

void sub_080013AC(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  
  sVar2 = 0;
  DAT_02001340 = 0x61;
  iVar3 = 0;
  iVar1 = 0;
  do {
    iVar3 = iVar3 + 2;
    sVar2 = sVar2 + 1;
    *(short *)((int)&DAT_02001342 + iVar1) = sVar2;
    iVar1 = iVar1 + 2;
  } while (iVar3 < 0xe);
  return;
}

