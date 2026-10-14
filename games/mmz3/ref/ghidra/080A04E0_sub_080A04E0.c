// sub_080A04E0 at 0x080A04E0 (thumb)

undefined4 sub_080A04E0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_083679d4)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_083678e4,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80a04dd;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0xb4);
  iVar1 = *(int *)(param_1 + 0x58) >> 8;
  *(int *)(param_1 + 0xb8) = iVar1;
  iVar1 = FUN_080fe2f8(iVar1,0xa0);
  *(int *)(param_1 + 0xb8) = iVar1 * 0xa000;
  sub_080A0570(param_1);
  return in_lr;
}

