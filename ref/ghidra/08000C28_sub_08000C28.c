// sub_08000C28 at 0x08000C28 (thumb)

void sub_08000C28(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = &DAT_03001748;
  DAT_03001740 = 0;
  DAT_02000000 = 0;
  iVar1 = 2;
  DAT_03001744 = param_1;
  do {
    *puVar2 = 1;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + 0x18;
  } while (-1 < iVar1);
  return;
}

