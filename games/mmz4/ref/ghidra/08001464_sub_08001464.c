// sub_08001464 at 0x08001464 (thumb)

undefined4 sub_08001464(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  iVar1 = 1;
  do {
    sub_0800153C((int)&DAT_02000760 + iVar2);
    (&DAT_02000774)[iVar2] = 0x18;
    (&DAT_02000775)[iVar2] = 4;
    iVar2 = iVar2 + 0x18;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return in_lr;
}

