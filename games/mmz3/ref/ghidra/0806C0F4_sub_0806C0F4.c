// sub_0806C0F4 at 0x0806C0F4 (thumb)

undefined4 sub_0806C0F4(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  undefined auStack_1c [8];
  
  sub_0801749C();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  if (((DAT_02002445 & 1) == 0) || (uVar2 = DAT_02030104 & 0x40, (DAT_02030104 & 0x40) != 0)) {
    uVar2 = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar4 = 8;
  }
  else {
    *(byte *)(param_1 + 10) = bVar1 | 7;
    uVar4 = 0xc;
  }
  sub_0800736C(param_1 + 0x74,&DAT_08362d58,param_1 + 0x54,uVar4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(uint *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x98) = 0x806ccc9;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined *)(param_1 + 0xbc) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xbc) = 1;
  }
  uVar2 = (uint)*(byte *)(param_1 + 0xbc);
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar2 = uVar2 & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  uVar4 = sub_0800A1F4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  uVar4 = sub_0809D630(param_1,auStack_1c,*(byte *)(param_1 + 0xbc),0);
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  iVar3 = sub_08063614(param_1);
  if (iVar3 != 0) {
    sub_08017700(param_1,0x1900);
    sub_080177F4(param_1);
  }
  *(undefined *)(param_1 + 0xbb) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_0806C244(param_1);
  return in_lr;
}

