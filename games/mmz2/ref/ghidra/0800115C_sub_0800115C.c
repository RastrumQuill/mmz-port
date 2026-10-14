// sub_0800115C at 0x0800115C (thumb)

undefined4 sub_0800115C(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_03002ab0;
  (&DAT_03002a69)[DAT_03002ab0 * 0x18] = 1;
  (&DAT_03002a6c)[iVar1 * 6] = param_1;
  FUN_08000328(DAT_02000004);
  return in_lr;
}

