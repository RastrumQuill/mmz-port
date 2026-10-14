// sub_080A87F0 at 0x080A87F0 (thumb)

undefined4 sub_080A87F0(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  sub_08017528(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x5b01);
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  uVar3 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  *(undefined2 *)(param_1 + 0xc0) = 0xffff;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar4 = *(int *)(param_1 + 0x54);
    iVar2 = 0x500;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54);
    iVar2 = -0x500;
  }
  *(int *)(param_1 + 0x54) = iVar4 + iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x2800;
  *(int *)(param_1 + 0x5c) = (int)*(short *)(&DAT_08368874 + (uint)*(byte *)(param_1 + 0x11) * 2);
  *(undefined4 *)(param_1 + 0x60) = 0xfffffa00;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_08368814,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080A83EC(param_1);
  return in_lr;
}

