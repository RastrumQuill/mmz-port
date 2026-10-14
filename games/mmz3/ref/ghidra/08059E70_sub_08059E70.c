// sub_08059E70 at 0x08059E70 (thumb)

undefined4 sub_08059E70(int param_1)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb400);
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0xe) = 1;
    *(undefined2 *)(*(int *)(param_1 + 0x2c) + 0xbc) = 0x6400;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  iVar5 = DAT_0202f5c0;
  *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
  iVar5 = *(int *)(iVar5 + 0x54);
  *(byte *)(param_1 + 0x4a) =
       *(byte *)(param_1 + 0x4a) & 0xef | (*(int *)(param_1 + 0x54) < iVar5) << 4;
  if (*(int *)(param_1 + 0x54) < iVar5) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  iVar5 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
  if (iVar5 < 0) {
    iVar5 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
  }
  uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar3 & 0x7fffffff;
  uVar3 = uVar3 * 2 >> 0x11 & 0x1f;
  if (iVar5 < 0x3800) {
    if (7 < uVar3) {
      if (*(byte *)(DAT_02030160 + 1) < 5) {
        *(undefined *)(param_1 + 0xd) = 7;
        *(undefined *)(param_1 + 0xe) = 1;
        goto LAB_0805a110;
      }
      if ((0xf < uVar3) && ((int)*(short *)(param_1 + 0xa4) < (int)*(char *)(param_1 + 0xd0) / 2)) {
LAB_0805a080:
        *(undefined *)(param_1 + 0xd) = 10;
        goto LAB_0805a110;
      }
LAB_0805a08c:
      *(undefined *)(param_1 + 0xd) = 7;
      goto LAB_0805a110;
    }
LAB_0805a108:
    *(undefined *)(param_1 + 0xd) = 4;
    uVar2 = 0xd;
  }
  else if (iVar5 < 0x5000) {
    iVar5 = (int)*(char *)(param_1 + 0xd0);
    if ((int)*(short *)(param_1 + 0xa4) < iVar5 / 2) {
      if (uVar3 < 8) {
        *(undefined *)(param_1 + 0xd) = 4;
        uVar2 = 5;
      }
      else {
        if (0x13 < uVar3) goto LAB_0805a108;
        if (*(char *)(param_1 + 0xe0) == '\0') {
LAB_0805a0fa:
          *(undefined *)(param_1 + 0xd) = 0x11;
          goto LAB_0805a110;
        }
        *(undefined *)(param_1 + 0xd) = 4;
        uVar2 = 5;
      }
    }
    else {
      if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
      }
      if ((int)*(short *)(param_1 + 0xa4) < (iVar5 >> 2) * 3) {
        if (uVar3 < 3) {
LAB_0805a0d6:
          *(undefined *)(param_1 + 0xd) = 3;
          goto LAB_0805a110;
        }
        if (uVar3 < 8) {
          *(undefined *)(param_1 + 0xd) = 4;
          uVar2 = 5;
        }
        else {
          if (0x13 < uVar3) goto LAB_0805a108;
          if (*(char *)(param_1 + 0xe0) == '\0') goto LAB_0805a0fa;
          *(undefined *)(param_1 + 0xd) = 4;
          uVar2 = 5;
        }
      }
      else {
        if (uVar3 < 6) goto LAB_0805a0d6;
        if (uVar3 < 0xd) {
          *(undefined *)(param_1 + 0xd) = 4;
          uVar2 = 5;
        }
        else {
          if (0x18 < uVar3) goto LAB_0805a108;
          if (*(char *)(param_1 + 0xe0) == '\0') goto LAB_0805a0fa;
          *(undefined *)(param_1 + 0xd) = 4;
          uVar2 = 5;
        }
      }
    }
  }
  else {
    iVar5 = (int)*(char *)(param_1 + 0xd0);
    if ((int)*(short *)(param_1 + 0xa4) < iVar5 / 2) {
      if (uVar3 < 6) {
        *(undefined *)(param_1 + 0xd) = 4;
        uVar2 = 5;
      }
      else {
        if (0xd < uVar3) {
          if (0x17 < uVar3) {
            if (4 < *(byte *)(DAT_02030160 + 1)) goto LAB_0805a080;
            goto LAB_0805a08c;
          }
          goto LAB_0805a108;
        }
        if (*(char *)(param_1 + 0xe0) == '\0') goto LAB_0805a0fa;
        *(undefined *)(param_1 + 0xd) = 4;
        uVar2 = 5;
      }
    }
    else {
      if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
      }
      if ((int)*(short *)(param_1 + 0xa4) < (iVar5 >> 2) * 3) {
        if (uVar3 < 4) goto LAB_0805a0d6;
        if (uVar3 < 0xe) {
          *(undefined *)(param_1 + 0xd) = 4;
          uVar2 = 5;
        }
        else {
          if (0x11 < uVar3) goto LAB_0805a108;
          if (*(char *)(param_1 + 0xe0) == '\0') goto LAB_0805a0fa;
          *(undefined *)(param_1 + 0xd) = 4;
          uVar2 = 5;
        }
      }
      else {
        if (uVar3 < 6) goto LAB_0805a0d6;
        if (uVar3 < 0xd) {
          *(undefined *)(param_1 + 0xd) = 4;
          uVar2 = 5;
        }
        else {
          if (0x18 < uVar3) goto LAB_0805a108;
          if (*(char *)(param_1 + 0xe0) == '\0') goto LAB_0805a0fa;
          *(undefined *)(param_1 + 0xd) = 4;
          uVar2 = 5;
        }
      }
    }
  }
  *(undefined *)(param_1 + 0xf) = uVar2;
LAB_0805a110:
  pcVar4 = (char *)(param_1 + 0xcc);
  pcVar6 = (char *)(param_1 + 0xcd);
  if (((int)*pcVar4 == (uint)*(byte *)(param_1 + 0xd)) && (*pcVar4 == *pcVar6)) {
    *(undefined *)(param_1 + 0xd) = 2;
  }
  else {
    *(char *)(param_1 + 0xce) = *pcVar6;
    *pcVar6 = *pcVar4;
    *pcVar4 = *(char *)(param_1 + 0xd);
  }
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

