// sub_0804F8A0 at 0x0804F8A0 (thumb)

undefined4 sub_0804F8A0(int param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  uVar6 = *(undefined4 *)(param_1 + 200);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0809F624(uVar6,3);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    bVar1 = 0 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    uVar3 = (uint)bVar1;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (uVar3 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(uint *)(param_1 + 0xbc) = *(int *)(DAT_0202e130 + 0x54) + -0x4000 + uVar3 * 0x8000;
    *(uint *)(param_1 + 0x5c) = uVar3 * 0x580 + -0x2c0;
    sub_080127E4(param_1,0xa403);
    sub_08006E08(param_1 + 0x74,&DAT_0833b8ac);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_080032EC(0x83);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ((byte)(&DAT_0833c0e0)[*(byte *)(param_1 + 0x13)] <= *(byte *)(param_1 + 0x12)) {
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) + 1;
  }
  sub_08006E08(param_1 + 0x74,
               &DAT_0833b87c + (uint)(byte)(&DAT_0833c0d2)[*(byte *)(param_1 + 0x13)] * 0x30);
  sub_0809F624(uVar6,(&DAT_0833c0d9)[*(byte *)(param_1 + 0x13)]);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar5 = iVar4 - *(int *)(param_1 + 0xbc);
  if (iVar5 < 0) {
    iVar5 = *(int *)(param_1 + 0xbc) - iVar4;
  }
  if ((iVar5 < 0x400) || (uVar3 = sub_0804EBC4(param_1), (uVar3 & 2) != 0)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x04') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
  }
  return in_lr;
}

