// sub_080D6BFC at 0x080D6BFC (thumb)

undefined4 sub_080D6BFC(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar1 = *(byte *)(param_1 + 0x10) ^ 1;
  *(byte *)(param_1 + 0x11) = (byte)(-uVar1 >> 0x1f);
  uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0x28) + 0x1fd);
  *(undefined4 *)(param_1 + 0xbc) = 0xa00;
  if (uVar1 == 0) {
    iVar2 = uVar3 << 8;
  }
  else {
    iVar2 = uVar3 << 9;
  }
  *(int *)(param_1 + 0xc0) = 0x5000 - iVar2;
  sub_080378B4(*(int *)(param_1 + 0x28),param_1 + 0x54,0);
  *(int *)(param_1 + 0xb4) = (*(int *)(param_1 + 0x54) + 0x7800) - DAT_0202ed50;
  *(int *)(param_1 + 0xb8) = (*(int *)(param_1 + 0x58) + 0x5000) - DAT_0202ed54;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080127E4(param_1,0x9004);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  sub_080D6CC4(param_1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 4);
  return in_lr;
}

