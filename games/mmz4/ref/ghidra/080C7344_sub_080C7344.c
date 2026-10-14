// sub_080C7344 at 0x080C7344 (thumb)

undefined4 sub_080C7344(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  int local_20 [3];
  
  local_20[0] = 0x2c0;
  local_20[1] = 0x300;
  local_20[2] = 0x340;
  bVar1 = *(byte *)(param_1 + 0x11);
  bVar3 = *(byte *)(param_1 + 0xb4);
  iVar4 = sub_0806610C(*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar5 = *(int *)((int)local_20 + ((uint)(iVar4 << 0x18) >> 0x16));
  *(int *)(param_1 + 0xb8) = iVar5;
  iVar4 = iVar5 * *(short *)((int)&DAT_08128c10 + ((bVar3 + 0x40) * 0x1000000 >> 0x17));
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar4 >> 8;
  iVar5 = iVar5 * (short)(&DAT_08128c10)[bVar3];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar5 >> 8;
  sub_0801CD28(param_1);
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar6 = bVar1 & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar6;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar3 = 0x80 - bVar3;
  }
  *(byte *)(param_1 + 0x24) = bVar3 + 0x80;
  sub_0801CF00(param_1,0x640b);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_088629e8,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080C7468(param_1);
  return in_lr;
}

