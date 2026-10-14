// sub_08000F78 at 0x08000F78 (thumb)

undefined4 sub_08000F78(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 in_lr;
  
  puVar2 = &DAT_03002a68;
  DAT_03002a60 = 0;
  DAT_02000004 = 0;
  iVar1 = 2;
  DAT_03002a64 = param_1;
  do {
    *puVar2 = 1;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + 0x18;
  } while (-1 < iVar1);
  return in_lr;
}

