// sub_080A86F4 at 0x080A86F4 (thumb)

undefined4 sub_080A86F4(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x5b00);
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  uVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  *(undefined2 *)(param_1 + 0xc0) = 0xffff;
  uVar3 = *(undefined4 *)(iVar5 + 0xb4);
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar5 + 0xb8);
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x10) == '\x02') {
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar5 + 0x5c);
    *(undefined4 *)(param_1 + 0x60) = 0;
    uVar2 = 0xfff0;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar5 + 0x5c);
    *(undefined4 *)(param_1 + 0x60) = 0x380;
    uVar2 = 0xffe8;
  }
  *(undefined2 *)(param_1 + 0xbc) = uVar2;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_08368814,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined *)(param_1 + 0x12) = 2;
  sub_080A83EC(param_1);
  return in_lr;
}

