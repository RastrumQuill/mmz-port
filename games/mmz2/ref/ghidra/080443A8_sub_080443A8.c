// sub_080443A8 at 0x080443A8 (thumb)

undefined4 sub_080443A8(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar3 = sub_08044D54(param_1,*(undefined *)(param_1 + 0xb5));
  iVar4 = sub_08044D80(param_1,*(undefined *)(param_1 + 0xb5));
  iVar5 = *(int *)(param_1 + 0xbc);
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar2 = *(byte *)(param_1 + 10) >> 4;
    uVar6 = bVar2 & 1;
    sub_0801260C(param_1);
    sub_080127D0(param_1);
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined *)(param_1 + 0x24) = 0;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    sub_080127E4(param_1,0xa30b);
    sub_08006E08(param_1 + 0x74,&DAT_0833a630);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x24) + '\x18';
  cVar1 = *(char *)(param_1 + 0x12);
  uVar6 = (uint)(byte)(0x1c - cVar1);
  *(uint *)(param_1 + 0x54) = iVar3 - (uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x5c);
  *(uint *)(param_1 + 0x58) =
       ((iVar4 + -0x1600) - iVar5) + uVar6 * *(int *)(param_1 + 0x60) + uVar6 * uVar6 * 0x20;
  *(char *)(param_1 + 0x12) = cVar1 + -1;
  if (cVar1 == '\x01') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(char *)(param_1 + 0xf) = cVar1 + -1;
  }
  return in_lr;
}

