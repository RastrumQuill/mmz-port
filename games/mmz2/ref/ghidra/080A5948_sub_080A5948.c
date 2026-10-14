// sub_080A5948 at 0x080A5948 (thumb)

undefined4 sub_080A5948(int param_1)

{
  byte bVar1;
  short sVar2;
  byte extraout_var;
  int iVar3;
  char cVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if ((((*(uint *)(param_1 + 0x8c) & 1) != 0) &&
      ((bool)(~(*(byte *)(iVar6 + 10) >> 4) & 1) !=
       *(int *)(iVar6 + 0x54) < *(int *)(DAT_0202e130 + 0x54))) &&
     (iVar3 = sub_08003390(0x7e), iVar3 == 0)) {
    sub_080032EC(0x7e);
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0xbc) + *(char *)(param_1 + 0x12);
    sVar2 = *(short *)(param_1 + 0xc0) + -1;
    *(short *)(param_1 + 0xc0) = sVar2;
    if (sVar2 == -1) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      sub_080EEF64(((*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) + -0x1000) * 0x10 >>
                   0x10,(*(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58)) * 0x10 >> 0x10);
      puVar5 = (ushort *)(param_1 + 0xbe);
      *puVar5 = (ushort)extraout_var;
      iVar3 = (short)(&DAT_080ef450)[(int)(short)*puVar5 + 0x40U & 0xff] * 0x180;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar3 >> 8;
      iVar3 = (short)(&DAT_080ef450)[*puVar5 & 0xff] * 0x180;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x60) = iVar3 >> 8;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
    cVar4 = *(char *)(iVar6 + 0xd);
joined_r0x080a5a9e:
    if (cVar4 == '\x05') goto LAB_080a5b46;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      bVar1 = *(char *)(param_1 + 0xbc) + *(char *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar1;
      if ((bVar1 & 0x1f) == 0) {
        sub_080A54F0(param_1,2,*(undefined *)(param_1 + 0x12));
      }
      if (*(char *)(param_1 + 0x12) == '\0') {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        *(undefined2 *)(param_1 + 0xc0) = 0x20;
      }
      cVar4 = *(char *)(iVar6 + 0xd);
      goto joined_r0x080a5a9e;
    }
  }
  else if (bVar1 == 2) {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0xbc) + *(char *)(param_1 + 0x12);
    cVar4 = *(char *)(param_1 + 0x13) + '\x01';
    *(char *)(param_1 + 0x13) = cVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if (cVar4 == '\x14') {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined2 *)(param_1 + 0xc0) = 0x200;
    }
  }
  else if (bVar1 == 3) {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0xbc) + *(char *)(param_1 + 0x12);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar2 = *(short *)(param_1 + 0xc0) + -1;
    *(short *)(param_1 + 0xc0) = sVar2;
    if (sVar2 == -1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      return in_lr;
    }
  }
  if (*(byte *)(iVar6 + 0xc) < 2) {
    return in_lr;
  }
LAB_080a5b46:
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
  *(undefined *)(param_1 + 0x11) = 1;
  return in_lr;
}

