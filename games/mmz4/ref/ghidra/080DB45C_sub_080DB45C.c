// sub_080DB45C at 0x080DB45C (thumb)

undefined4 sub_080DB45C(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\x02') {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x54) - *(int *)(*(int *)(param_1 + 0x28) + 0x54);
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x58) - *(int *)(*(int *)(param_1 + 0x28) + 0x58);
  }
  sub_0801CC9C(param_1);
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar3 = bVar1 & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  sub_080DB4E4(param_1);
  return in_lr;
}

