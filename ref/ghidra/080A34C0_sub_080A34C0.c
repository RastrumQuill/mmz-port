// sub_080A34C0 at 0x080A34C0 (thumb)

undefined4 sub_080A34C0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  sub_08001FA8(param_1 + 0x2c,0x80a35f9);
  *(int *)(param_1 + 0x34) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  iVar1 = *(int *)(iVar2 + 0x4c) + 0x5000;
  *(int *)(param_1 + 0x4c) = iVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
  *(int *)(param_1 + 0xbc) = iVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080A3528(param_1);
  return in_lr;
}

