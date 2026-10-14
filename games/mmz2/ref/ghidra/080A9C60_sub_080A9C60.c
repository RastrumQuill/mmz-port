// sub_080A9C60 at 0x080A9C60 (thumb)

undefined4 sub_080A9C60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  sub_08006DE4(param_1 + 0x74,&DAT_0834555c,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar1 = *(undefined4 *)(iVar2 + 0xb4);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar2 + 0xb8);
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_080A9BAC(param_1);
  return in_lr;
}

