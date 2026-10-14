// sub_08047054 at 0x08047054 (thumb)

undefined4 sub_08047054(int param_1)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
  if (iVar7 < 0) {
    iVar7 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
  }
  *(undefined *)(param_1 + 0x1f) = 0;
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0xc9) != '\0') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 1;
    *(char *)(param_1 + 0xc9) = '\0';
    return in_lr;
  }
  iVar5 = *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = *(int *)(param_1 + 0x4c) < iVar5;
  if (*(int *)(param_1 + 0x4c) < iVar5) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (*(byte *)(DAT_02022b20 + 1) < 5) {
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    uVar3 = sub_080C8CB0(uVar3 * 2 >> 0x11,0xc);
    uVar3 = uVar3 & 0xff;
  }
  else {
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    uVar3 = uVar3 * 2 >> 0x11 & 0xf;
  }
  if (iVar7 < 0x4000) {
    if (uVar3 < 3) {
      if (0x2a00 < iVar7) {
        uVar2 = 5;
        goto LAB_08047226;
      }
      if (4 < *(byte *)(DAT_02022b20 + 1)) {
        uVar2 = 0x14;
        goto LAB_08047226;
      }
    }
    else {
      if (uVar3 < 6) {
        uVar2 = 0xd;
        goto LAB_08047226;
      }
      if (uVar3 < 9) {
        uVar2 = 6;
        goto LAB_08047226;
      }
      if (uVar3 < 0xc) {
        if (*(char *)(param_1 + 0xe4) < '\x06') {
          uVar2 = 0x12;
          goto LAB_08047226;
        }
      }
      else if (4 < *(byte *)(DAT_02022b20 + 1)) {
        uVar2 = 0x14;
        goto LAB_08047226;
      }
    }
  }
  else if (iVar7 < 0x8000) {
    if (uVar3 < 4) {
      if (iVar7 < 0x2a01) {
        if (*(byte *)(DAT_02022b20 + 1) < 5) {
          uVar2 = 0xd;
        }
        else {
          uVar2 = 0x14;
        }
      }
      else {
        uVar2 = 5;
      }
      goto LAB_08047226;
    }
    if (uVar3 < 6) {
      uVar2 = 6;
      goto LAB_08047226;
    }
    if (9 < uVar3) {
      if (uVar3 < 0xc) {
        iVar7 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
        if (iVar7 != 0) {
          uVar2 = 5;
          goto LAB_08047226;
        }
        if (*(char *)(param_1 + 0xe4) < '\x06') {
          uVar2 = 0x12;
          goto LAB_08047226;
        }
      }
      else if (4 < *(byte *)(DAT_02022b20 + 1)) {
        uVar2 = 0x14;
        goto LAB_08047226;
      }
    }
  }
  else if (uVar3 < 6) {
    if (0x2a00 < iVar7) {
      uVar2 = 5;
      goto LAB_08047226;
    }
    if (4 < *(byte *)(DAT_02022b20 + 1)) {
      uVar2 = 0x14;
      goto LAB_08047226;
    }
  }
  else if (uVar3 < 10) {
    if (*(char *)(param_1 + 0xe4) < '\x06') {
      uVar2 = 0x12;
      goto LAB_08047226;
    }
  }
  else {
    if (uVar3 < 0xc) {
      uVar2 = 0xd;
      goto LAB_08047226;
    }
    if (4 < *(byte *)(DAT_02022b20 + 1)) {
      uVar2 = 0x14;
      goto LAB_08047226;
    }
  }
  uVar2 = 10;
LAB_08047226:
  *(undefined *)(param_1 + 0xd) = uVar2;
  pcVar4 = (char *)(param_1 + 0xd4);
  pcVar6 = (char *)(param_1 + 0xd5);
  if ((*pcVar4 == *(char *)(param_1 + 0xd)) && (*pcVar4 == *pcVar6)) {
    *(undefined *)(param_1 + 0xd) = 2;
  }
  else {
    *(char *)(param_1 + 0xd6) = *pcVar6;
    *pcVar6 = *pcVar4;
    *pcVar4 = *(char *)(param_1 + 0xd);
  }
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

