// sub_080C679C at 0x080C679C (thumb)

undefined4 sub_080C679C(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar2 = *(byte *)(iVar3 + 10) >> 4;
  uVar4 = bVar2 & 1;
  bVar1 = *(byte *)(param_1 + 0x11);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0801749C(param_1);
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  sub_08017700(param_1,*(undefined2 *)(&DAT_0836c022 + (uint)bVar1 * 2));
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
  iVar3 = (uint)*(byte *)(param_1 + 0x12) * -0x300 + 0x180;
  *(int *)(param_1 + 0x5c) = iVar3;
  iVar3 = iVar3 * ((uint)*(byte *)(param_1 + 0x11) * 0x60 + 0x140);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  uVar4 = *(byte *)(param_1 + 0x11) ^ 1;
  *(uint *)(param_1 + 0x60) = uVar4 * -0x140 + -0x200;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | (byte)((uVar4 + 2 & 3) << 2);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  sub_080C6478(param_1);
  return in_lr;
}

