// sub_080B21CC at 0x080B21CC (thumb)

undefined4 sub_080B21CC(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  sub_0801CF00(param_1,0xc50c);
  if (*(byte *)(param_1 + 0x11) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar2 = *(byte *)(param_1 + 0x11) & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08860158,param_1 + 0x54,4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80b20c1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1d00;
  *(undefined *)(param_1 + 0xd) = 4;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

