// sub_080B5D20 at 0x080B5D20 (thumb)

undefined4 sub_080B5D20(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar1 = *(byte *)(param_1 + 0x10) ^ 1;
  *(byte *)(param_1 + 0x11) = (byte)(-uVar1 >> 0x1f);
  uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0x20) + 0x183);
  *(undefined4 *)(param_1 + 0xc4) = 0xa00;
  if (uVar1 == 0) {
    iVar2 = uVar3 << 8;
  }
  else {
    iVar2 = uVar3 << 9;
  }
  *(int *)(param_1 + 200) = 0x5000 - iVar2;
  sub_08018FF8(*(int *)(param_1 + 0x20),param_1 + 0x4c,0);
  *(int *)(param_1 + 0xbc) = (*(int *)(param_1 + 0x4c) + 0x7800) - DAT_02022c7c;
  *(int *)(param_1 + 0xc0) = (*(int *)(param_1 + 0x50) + 0x5000) - DAT_02022c80;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080B4FA4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080B50DC(param_1,4);
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3;
  sub_080B5DE4(param_1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 4);
  return in_lr;
}

