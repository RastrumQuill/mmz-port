// sub_080B4EEC at 0x080B4EEC (thumb)

undefined4 sub_080B4EEC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08017700(param_1,0x13);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 1;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  if (((*(uint *)(iVar1 + 0x8c) & 0x200) == 0) && (*(short *)(iVar1 + 0xa4) != 0)) {
    sub_0800471C(0xf);
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = DAT_0202e48c;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  sub_080B4F84(param_1);
  return in_lr;
}

