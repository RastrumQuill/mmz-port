// sub_080AE5C8 at 0x080AE5C8 (thumb)

undefined4 sub_080AE5C8(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08369218);
    if (*(byte *)(param_1 + 0x12) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    uVar3 = *(byte *)(param_1 + 0x12) & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x12) * 0x900 + -0x480;
    *(undefined4 *)(param_1 + 100) = 0x80;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08017700(param_1,0x8008);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  if ((*(byte *)(param_1 + 0x13) & 3) == 0) {
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    sub_080C36C0(*(int *)(param_1 + 0x54) - ((uint)*(byte *)(param_1 + 0x12) * 0x2000 + -0x1000),
                 *(int *)(param_1 + 0x58) + ((uVar3 * 0x10 >> 0x14) - 0x800));
  }
  sub_080177F4(param_1);
  if ('\x03' < *(char *)(param_1 + 0x71)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  if (((*(int *)(param_1 + 100) == 0) ||
      (iVar2 = *(int *)(param_1 + 100) + -1, *(int *)(param_1 + 100) = iVar2, iVar2 == 0)) &&
     (uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54), 0x4000 < uVar3)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

