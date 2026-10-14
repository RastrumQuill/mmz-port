// sub_08047B64 at 0x08047B64 (thumb)

undefined4 sub_08047B64(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_08047c20:
    iVar10 = *(int *)(param_1 + 0x54);
    iVar8 = *(int *)(param_1 + 0x58);
    iVar4 = *(int *)(param_1 + 0xb8);
    iVar5 = FUN_080fe2f8((*(int *)(param_1 + 0xb4) - iVar10) + -0x5800 +
                         (uint)*(byte *)(param_1 + 199) * 0xb000,0xc);
    iVar4 = FUN_080fe2f8(iVar4 - (iVar8 + 0x5000),0xc);
    *(int *)(param_1 + 0x54) = iVar10 + iVar5;
    *(int *)(param_1 + 0x58) = iVar8 + iVar4;
    sub_080177F4(param_1);
    cVar3 = sub_080041E4(*(undefined *)(param_1 + 0xc6));
    if (cVar3 != '\x03') goto LAB_08047d86;
    cVar3 = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_08047d86;
      sub_0800471C(0x117);
      sub_08007390(param_1 + 0x74,&DAT_0835ee3c);
      *(undefined *)(param_1 + 0x22) = *(undefined *)(param_1 + 0x10);
      sub_08017700(param_1,0x3100);
      if (*(char *)(param_1 + 0x10) == '\0') {
        iVar4 = sub_08017B8C(param_1);
        sub_080040A8(0x16,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
        uVar2 = 0x16;
      }
      else {
        iVar4 = sub_08017B8C(param_1);
        sub_080040A8(0x11,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
        uVar2 = 0x11;
      }
      *(undefined *)(param_1 + 0xc6) = uVar2;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(undefined *)(param_1 + 199) = *(undefined *)(param_1 + 0x10);
      *(undefined *)(param_1 + 0x12) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_08047c20;
    }
    if (bVar1 == 2) {
      *(undefined *)(param_1 + 0x13) = 0x28;
      pcVar9 = (char *)(param_1 + 0xc6);
      if (*pcVar9 != '\0') {
        sub_08004230();
        *pcVar9 = '\0';
      }
      if (*(char *)(param_1 + 0x10) == '\0') {
        iVar4 = sub_08017B8C(param_1);
        sub_080040A8(0x14,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
        cVar3 = '\x14';
      }
      else {
        iVar4 = sub_08017B8C(param_1);
        sub_080040A8(0xf,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
        cVar3 = '\x0f';
      }
      *pcVar9 = cVar3;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (bVar1 != 3) goto LAB_08047d86;
    iVar10 = *(int *)(param_1 + 0x54);
    iVar8 = *(int *)(param_1 + 0x58);
    iVar4 = *(int *)(param_1 + 0xb8);
    iVar5 = FUN_080fe2f8((*(int *)(param_1 + 0xb4) - iVar10) + -0x5800 +
                         (uint)*(byte *)(param_1 + 199) * 0xb000,0xc);
    iVar4 = FUN_080fe2f8(iVar4 - (iVar8 + 0x5000),0xc);
    *(int *)(param_1 + 0x54) = iVar10 + iVar5;
    *(int *)(param_1 + 0x58) = iVar8 + iVar4;
    sub_080041E4(*(undefined *)(param_1 + 0xc6));
    sub_080177F4(param_1);
    cVar3 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar3;
    if (cVar3 != '\0') goto LAB_08047d86;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
    *(undefined2 *)(param_1 + 0xc4) = 0;
    cVar3 = '\x01';
    *(undefined *)(param_1 + 0xd) = 1;
  }
  *(char *)(param_1 + 0xe) = cVar3;
LAB_08047d86:
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  cVar3 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),7);
  if (cVar3 == '\0') {
    uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar7 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar7 & 0x7fffffff;
    sub_080BC060(*(int *)(param_1 + 0x54) + ((uVar6 * 0x20 >> 0x15) - 0x400),
                 *(int *)(param_1 + 0x58) + (uVar7 * 0x40 >> 0x16) + 0x800,0,0,
                 *(undefined *)(param_1 + 0x10));
  }
  return in_lr;
}

