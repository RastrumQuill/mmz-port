// sub_08035AE4 at 0x08035AE4 (thumb)

undefined4 sub_08035AE4(int param_1)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0);
    *(undefined *)(*(int *)(param_1 + 0x24) + 0xe) = 1;
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x11) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  iVar5 = *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = *(int *)(param_1 + 0x4c) < iVar5;
  if (*(int *)(param_1 + 0x4c) < iVar5) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  iVar5 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
  if (iVar5 < 0) {
    iVar5 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
  }
  uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  uVar3 = uVar3 * 2 >> 0x11 & 0x1f;
  if (iVar5 < 0x3800) {
    if (7 < uVar3) {
      if (*(byte *)(DAT_02022b20 + 1) < 5) {
        *(undefined *)(param_1 + 0xd) = 7;
        *(undefined *)(param_1 + 0xe) = 1;
        goto LAB_08035d58;
      }
      if ((0xf < uVar3) && ((int)*(short *)(param_1 + 0x8c) < (int)*(char *)(param_1 + 0xd4) / 2)) {
LAB_08035cc8:
        *(undefined *)(param_1 + 0xd) = 10;
        goto LAB_08035d58;
      }
LAB_08035cd4:
      *(undefined *)(param_1 + 0xd) = 7;
      goto LAB_08035d58;
    }
LAB_08035d50:
    *(undefined *)(param_1 + 0xd) = 4;
    uVar2 = 0xd;
  }
  else if (iVar5 < 0x5000) {
    iVar5 = (int)*(char *)(param_1 + 0xd4);
    if ((int)*(short *)(param_1 + 0x8c) < iVar5 / 2) {
      if (uVar3 < 8) {
        *(undefined *)(param_1 + 0xd) = 4;
        uVar2 = 5;
      }
      else {
        if (0x13 < uVar3) goto LAB_08035d50;
        if (*(char *)(param_1 + 0xe4) == '\0') {
LAB_08035d42:
          *(undefined *)(param_1 + 0xd) = 0x11;
          goto LAB_08035d58;
        }
        *(undefined *)(param_1 + 0xd) = 4;
        uVar2 = 5;
      }
    }
    else {
      if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
      }
      if ((int)*(short *)(param_1 + 0x8c) < (iVar5 >> 2) * 3) {
        if (uVar3 < 3) {
LAB_08035d1e:
          *(undefined *)(param_1 + 0xd) = 3;
          goto LAB_08035d58;
        }
        if (uVar3 < 8) {
          *(undefined *)(param_1 + 0xd) = 4;
          uVar2 = 5;
        }
        else {
          if (0x13 < uVar3) goto LAB_08035d50;
          if (*(char *)(param_1 + 0xe4) == '\0') goto LAB_08035d42;
          *(undefined *)(param_1 + 0xd) = 4;
          uVar2 = 5;
        }
      }
      else {
        if (uVar3 < 6) goto LAB_08035d1e;
        if (uVar3 < 0xd) {
          *(undefined *)(param_1 + 0xd) = 4;
          uVar2 = 5;
        }
        else {
          if (0x18 < uVar3) goto LAB_08035d50;
          if (*(char *)(param_1 + 0xe4) == '\0') goto LAB_08035d42;
          *(undefined *)(param_1 + 0xd) = 4;
          uVar2 = 5;
        }
      }
    }
  }
  else {
    iVar5 = (int)*(char *)(param_1 + 0xd4);
    if ((int)*(short *)(param_1 + 0x8c) < iVar5 / 2) {
      if (uVar3 < 6) {
        *(undefined *)(param_1 + 0xd) = 4;
        uVar2 = 5;
      }
      else {
        if (0xd < uVar3) {
          if (0x17 < uVar3) {
            if (4 < *(byte *)(DAT_02022b20 + 1)) goto LAB_08035cc8;
            goto LAB_08035cd4;
          }
          goto LAB_08035d50;
        }
        if (*(char *)(param_1 + 0xe4) == '\0') goto LAB_08035d42;
        *(undefined *)(param_1 + 0xd) = 4;
        uVar2 = 5;
      }
    }
    else {
      if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
      }
      if ((int)*(short *)(param_1 + 0x8c) < (iVar5 >> 2) * 3) {
        if (uVar3 < 4) goto LAB_08035d1e;
        if (uVar3 < 0xe) {
          *(undefined *)(param_1 + 0xd) = 4;
          uVar2 = 5;
        }
        else {
          if (0x11 < uVar3) goto LAB_08035d50;
          if (*(char *)(param_1 + 0xe4) == '\0') goto LAB_08035d42;
          *(undefined *)(param_1 + 0xd) = 4;
          uVar2 = 5;
        }
      }
      else {
        if (uVar3 < 6) goto LAB_08035d1e;
        if (uVar3 < 0xd) {
          *(undefined *)(param_1 + 0xd) = 4;
          uVar2 = 5;
        }
        else {
          if (0x18 < uVar3) goto LAB_08035d50;
          if (*(char *)(param_1 + 0xe4) == '\0') goto LAB_08035d42;
          *(undefined *)(param_1 + 0xd) = 4;
          uVar2 = 5;
        }
      }
    }
  }
  *(undefined *)(param_1 + 0xf) = uVar2;
LAB_08035d58:
  pcVar4 = (char *)(param_1 + 0xd0);
  pcVar6 = (char *)(param_1 + 0xd1);
  if (((int)*pcVar4 == (uint)*(byte *)(param_1 + 0xd)) && (*pcVar4 == *pcVar6)) {
    *(undefined *)(param_1 + 0xd) = 2;
  }
  else {
    *(char *)(param_1 + 0xd2) = *pcVar6;
    *pcVar6 = *pcVar4;
    *pcVar4 = *(char *)(param_1 + 0xd);
  }
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

