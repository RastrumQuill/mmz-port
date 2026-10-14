// sub_080C6DE4 at 0x080C6DE4 (thumb)

undefined4 sub_080C6DE4(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar1 = sub_080E15D8(*(undefined *)(param_1 + 0x10));
  sub_08017700(param_1,uVar1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  iVar2 = *(int *)(param_1 + 0x58) + -0x1200;
  *(int *)(param_1 + 0x58) = iVar2;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x54);
  *(int *)(param_1 + 0x78) = iVar2;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0x80;
  sub_080C6E6C(param_1);
  return in_lr;
}

