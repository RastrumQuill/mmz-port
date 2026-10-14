// sub_080467BC at 0x080467BC (thumb)

undefined4 sub_080467BC(int param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  ushort uVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x3100);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined2 *)(param_1 + 0xc4) = 0;
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar3 = sub_08017B8C(param_1);
      sub_080040A8(0x14,(uint)(iVar3 << 0x18) >> 0x13 | 0x200);
      uVar1 = 0x14;
    }
    else {
      iVar3 = sub_08017B8C(param_1);
      sub_080040A8(0xf,(uint)(iVar3 << 0x18) >> 0x13 | 0x200);
      uVar1 = 0xf;
    }
    *(undefined *)(param_1 + 0xc6) = uVar1;
    *(bool *)(param_1 + 199) = *(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0x54);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_08007390(param_1 + 0x74,&DAT_0835ee3c);
  pbVar6 = (byte *)(param_1 + 199);
  uVar7 = (ushort)*pbVar6 * 6 + -3 + *(ushort *)(param_1 + 0xc4);
  *(ushort *)(param_1 + 0xc4) = uVar7;
  if ((((*(char *)(param_1 + 0x10) == '\0') && ((*(uint *)(DAT_0202f5c0 + 0x8c) & 0x200) == 0)) &&
      (*(short *)(DAT_0202f5c0 + 0xa4) != 0)) &&
     (((uVar7 < 0xfe00 && (*pbVar6 == 0)) || ((0x200 < uVar7 && (*pbVar6 == 1)))))) {
    sub_08045D54(param_1);
  }
  sub_08045E14(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),7);
  if (cVar2 == '\0') {
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar5 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar5 & 0x7fffffff;
    sub_080BC060(*(int *)(param_1 + 0x54) + ((uVar4 * 0x20 >> 0x15) - 0x400),
                 *(int *)(param_1 + 0x58) + (uVar5 * 0x40 >> 0x16) + 0x800,0,0,
                 *(undefined *)(param_1 + 0x10));
  }
  sub_080041E4(*(undefined *)(param_1 + 0xc6));
  sub_080177F4(param_1);
  return in_lr;
}

