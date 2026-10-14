// sub_08002398 at 0x08002398 (thumb)

undefined4 sub_08002398(void)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_03002ab0;
  (&DAT_03002a68)[DAT_03002ab0 * 0x18] = 1;
  FUN_08000300(&DAT_03002a6c + iVar1 * 6,&DAT_03002a70 + iVar1 * 6,DAT_02000000);
  return in_lr;
}

