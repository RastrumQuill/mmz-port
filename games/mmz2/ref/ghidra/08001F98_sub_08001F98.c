// sub_08001F98 at 0x08001F98 (thumb)

undefined4 sub_08001F98(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  iVar1 = 1;
  do {
    sub_080020A0((int)&DAT_02000d10 + iVar2);
    (&DAT_02000d24)[iVar2] = 0x18;
    (&DAT_02000d25)[iVar2] = 4;
    iVar2 = iVar2 + 0x18;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return in_lr;
}

