// sub_080A84B8 at 0x080A84B8 (thumb)

undefined4 sub_080A84B8(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x5b01);
  bVar1 = *(byte *)(iVar6 + 10) >> 4;
  uVar5 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
  *(undefined2 *)(param_1 + 0xc0) = 0xffff;
  uVar2 = sub_0800471C(0x48);
  *(undefined2 *)(param_1 + 0xc0) = uVar2;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x1000;
    uVar3 = 0xfffffc80;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x1000;
    uVar3 = 0x380;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1800;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined2 *)(param_1 + 0xbc) = 0xfff0;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  pcVar4 = (char *)(iVar6 + 0xcf);
  *pcVar4 = *pcVar4 + '\x01';
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_08368814,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined *)(param_1 + 0x12) = 2;
  sub_080A83EC(param_1);
  return in_lr;
}

