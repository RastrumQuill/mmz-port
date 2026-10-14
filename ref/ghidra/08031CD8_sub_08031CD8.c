// sub_08031CD8 at 0x08031CD8 (thumb)

undefined4 sub_08031CD8(int param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 in_lr;
  
  sub_080297C0();
  bVar2 = false;
  uVar5 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar5 & 0x7fffffff;
  uVar5 = uVar5 * 2 >> 0x11 & 0x1f;
  if (*(short *)(param_1 + 0xcc) == 0) {
    iVar9 = (int)*(short *)(param_1 + 0x8c);
    if (iVar9 < (int)(uint)(*(byte *)(param_1 + 0xd8) >> 1)) {
      if (0x11 < uVar5) goto LAB_08031d46;
    }
    else {
      uVar8 = (uint)(*(byte *)(param_1 + 0xd8) >> 2);
      if ((int)(iVar9 + uVar8 * -3) < 0 == SBORROW4(iVar9,uVar8 * 3)) {
        if (uVar5 < 8) {
          bVar2 = true;
        }
      }
      else if (uVar5 < 0xc) goto LAB_08031d4a;
LAB_08031d46:
      if (!bVar2) goto LAB_08031d50;
    }
LAB_08031d4a:
    *(undefined *)(param_1 + 0xd) = 0x23;
    goto LAB_08031f7a;
  }
LAB_08031d50:
  bVar2 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = bVar2;
  if (bVar2) {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar3;
  iVar9 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
  if (iVar9 < 0) {
    iVar9 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
  }
  iVar6 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if (iVar6 != 0) {
    *(undefined *)(param_1 + 0xd) = 0x2b;
    *(undefined *)(param_1 + 0xe) = 1;
    if (iVar9 < 0x8000) {
      *(undefined *)(param_1 + 0xf) = 0x29;
      return in_lr;
    }
    *(undefined *)(param_1 + 0xf) = 0x2a;
    return in_lr;
  }
  *(char *)(param_1 + 0xd7) = *(char *)(param_1 + 0xd6);
  pcVar7 = (char *)(param_1 + 0xd5);
  *(char *)(param_1 + 0xd6) = *pcVar7;
  pcVar10 = (char *)(param_1 + 0xd4);
  *pcVar7 = *pcVar10;
  iVar6 = (int)*(short *)(param_1 + 0x8c);
  if (iVar6 < (int)(uint)(*(byte *)(param_1 + 0xd8) >> 1)) {
    if (0x5fff < iVar9) {
      if (*(byte *)(DAT_02022b20 + 1) < 5) {
        uVar5 = DAT_02022890 * 0x343fd + 0x269ec3;
        DAT_02022890 = uVar5 & 0x7fffffff;
        uVar5 = sub_080C8CB0(uVar5 * 2 >> 0x11,0x1a);
        uVar5 = uVar5 & 0xff;
      }
      if (uVar5 < 4) {
        uVar4 = 2;
      }
      else {
        if (uVar5 < 10) goto LAB_08031f1c;
        if (uVar5 < 0x10) {
          uVar4 = 3;
        }
        else {
          if (uVar5 < 0x1a) goto LAB_08031f2c;
          uVar4 = 0x1e;
        }
      }
      goto LAB_08031f2e;
    }
    if (*(byte *)(DAT_02022b20 + 1) < 5) {
      uVar5 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar5 & 0x7fffffff;
      uVar5 = sub_080C8CB0(uVar5 * 2 >> 0x11,0x1c);
      uVar5 = uVar5 & 0xff;
    }
    if (uVar5 < 4) {
      uVar4 = 2;
      goto LAB_08031f2e;
    }
    if (9 < uVar5) {
      if (uVar5 < 0x13) {
        uVar4 = 3;
      }
      else if (uVar5 < 0x1c) {
        uVar4 = 0x14;
      }
      else {
        uVar4 = 0x1e;
      }
      goto LAB_08031f2e;
    }
LAB_08031f1c:
    *(undefined *)(param_1 + 0xd) = 0x2b;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    uVar8 = (uint)(*(byte *)(param_1 + 0xd8) >> 2);
    if ((int)(iVar6 + uVar8 * -3) < 0 == SBORROW4(iVar6,uVar8 * 3)) {
      if (iVar9 < 0x6000) {
        if (uVar5 < 8) {
          uVar4 = 2;
        }
        else {
          if (uVar5 < 0xe) goto LAB_08031f1c;
          if (uVar5 < 0x17) {
            uVar4 = 3;
          }
          else {
            uVar4 = 0x14;
          }
        }
      }
      else if (uVar5 < 8) {
        uVar4 = 2;
      }
      else {
        if (uVar5 < 0xe) goto LAB_08031f1c;
        if (0x13 < uVar5) goto LAB_08031f2c;
        uVar4 = 3;
      }
    }
    else if (iVar9 < 0x6000) {
      if (uVar5 < 6) {
        uVar4 = 2;
      }
      else {
        if (uVar5 < 0xc) goto LAB_08031f1c;
        if (uVar5 < 0x16) {
          uVar4 = 3;
        }
        else {
          uVar4 = 0x14;
        }
      }
    }
    else if (uVar5 < 6) {
      uVar4 = 2;
    }
    else {
      if (uVar5 < 0xe) goto LAB_08031f1c;
      if (uVar5 < 0x14) {
        uVar4 = 3;
      }
      else {
LAB_08031f2c:
        uVar4 = 0x11;
      }
    }
LAB_08031f2e:
    *(undefined *)(param_1 + 0xd) = uVar4;
  }
  cVar1 = *(char *)(param_1 + 0xd);
  if (((cVar1 == '\x1e') && (*pcVar10 == '\x1e')) || ((cVar1 == '\x02' && (*pcVar10 == '\x02')))) {
    *(undefined *)(param_1 + 0xd) = 1;
    return in_lr;
  }
  if ((cVar1 == *pcVar10) && (*pcVar7 == cVar1)) {
    *(undefined *)(param_1 + 0xd) = 1;
  }
  *pcVar7 = *pcVar10;
  *pcVar10 = *(char *)(param_1 + 0xd);
LAB_08031f7a:
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

