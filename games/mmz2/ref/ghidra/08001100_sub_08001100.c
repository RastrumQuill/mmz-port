// sub_08001100 at 0x08001100 (thumb)

undefined4 sub_08001100(void)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_03002ab0;
  (&DAT_03002a68)[DAT_03002ab0 * 0x18] = 1;
  FUN_08000300(&DAT_03002a6c + iVar1 * 6,&DAT_03002a70 + iVar1 * 6,DAT_02000004);
  return in_lr;
}

