// sub_080C64E8 at 0x080C64E8 (thumb)

undefined4 sub_080C64E8(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  uVar3 = bVar1 & 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0801749C(param_1);
  sub_08017700(param_1,0xdb0a);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
  iVar2 = *(int *)(iVar4 + 0x5c) * 0xa0;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar4 + 0x60);
  *(bool *)(param_1 + 0x13) = *(char *)(iVar4 + 0xf) == '\x01';
  *(undefined *)(param_1 + 0x12) = 0x16;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  sub_080C6478(param_1);
  return in_lr;
}

