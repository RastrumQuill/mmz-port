// sub_08000DFC at 0x08000DFC (thumb)

undefined4 sub_08000DFC(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_03001790;
  (&DAT_03001749)[DAT_03001790 * 0x18] = 1;
  (&DAT_0300174c)[iVar1 * 6] = param_1;
  sub_08000328(DAT_02000000);
  return in_lr;
}

