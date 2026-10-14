// sub_080DBEAC at 0x080DBEAC (thumb)

undefined4 sub_080DBEAC(int param_1)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  uVar2 = sub_080EF330(*(undefined *)(param_1 + 0x11),5);
  iVar3 = ((uVar2 & 0xff) * 3 + 2) * 0x800;
  *(int *)(param_1 + 0x54) = iVar3;
  uVar1 = sub_080EF330(*(undefined *)(param_1 + 0x11),10);
  uVar2 = sub_080EF2B8(uVar1,5);
  *(uint *)(param_1 + 0x58) = ((uVar2 & 0xff) * 3 + 0xb) * 0x800;
  if (*(int *)(param_1 + 0x28) != 0) {
    *(int *)(param_1 + 0x54) = iVar3 + 0x10000;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 4);
  sub_080DBD90(param_1);
  return in_lr;
}

