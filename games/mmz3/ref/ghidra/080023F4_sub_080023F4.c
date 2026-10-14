// sub_080023F4 at 0x080023F4 (thumb)

undefined4 sub_080023F4(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_03002ab0;
  (&DAT_03002a69)[DAT_03002ab0 * 0x18] = 1;
  (&DAT_03002a6c)[iVar1 * 6] = param_1;
  FUN_08000328(DAT_02000000);
  return in_lr;
}

