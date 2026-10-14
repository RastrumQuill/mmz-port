// sub_08002330 at 0x08002330 (thumb)

undefined4 sub_08002330(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_03002ab0;
  iVar2 = DAT_03002ab0 * 0x18;
  if (param_1 != 0) {
    (&DAT_03002a6a)[DAT_03002ab0 * 0xc] = (short)param_1;
    (&DAT_03002a68)[iVar2] = 4;
    FUN_08000300(&DAT_03002a6c + iVar1 * 6,&DAT_03002a70 + iVar1 * 6,DAT_02000000);
  }
  return in_lr;
}

