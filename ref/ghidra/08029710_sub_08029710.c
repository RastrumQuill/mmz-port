// sub_08029710 at 0x08029710 (thumb)

undefined4 sub_08029710(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (uint)*(byte *)(param_1 + 9) * 4;
  sub_080033DC(param_1 + 0x6c,*(undefined4 *)(&DAT_085a0000 + iVar1));
  sub_080020A4(param_1 + 0x2c,*(undefined4 *)(&DAT_08552000 + iVar1),param_1 + 0x4c);
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 10) >> 4 & 1;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 10) >> 5 & 1;
  *(undefined *)(param_1 + 0x1f) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0x100;
  *(undefined2 *)(param_1 + 0x4a) = 0x100;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x48;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 1;
  return in_lr;
}

