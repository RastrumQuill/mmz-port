// sub_0802EB88 at 0x0802EB88 (thumb)

undefined4 sub_0802EB88(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_0802ebb8:
    sub_0800561C(param_1 + 0x74,&DAT_082ad128);
    sub_08029778(param_1,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0x12) = 1;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xc3) = 7;
      goto LAB_0802ebb8;
    }
    if (bVar1 != 2) {
      return in_lr;
    }
  }
  sub_080785C8(*(undefined4 *)(param_1 + 0x24),3);
  iVar4 = *(int *)(DAT_0202286c + 0x4c);
  iVar5 = iVar4 - *(int *)(param_1 + 0x4c);
  *(bool *)(param_1 + 0x44) = 0 < iVar5;
  if (iVar4 == *(int *)(param_1 + 0x4c) || iVar5 < 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar6 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar6 & 0x7fffffff;
  uVar6 = sub_080C8CB0(uVar6 * 2 >> 0x11,0x1f);
  if ((uVar6 < 0x18) && (piVar7 = (int *)sub_08029850(param_1), piVar7 != (int *)0x0)) {
    iVar4 = *(int *)(param_1 + 0x4c) - *piVar7;
    if (iVar4 < 0) {
      iVar4 = *piVar7 - *(int *)(param_1 + 0x4c);
    }
    if (iVar4 < 0x2000) {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 != '\0') goto LAB_0802ed68;
  iVar4 = (int)*(short *)(param_1 + 0x8c);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xf;
  }
  uVar6 = iVar4 >> 4 & 0xff;
  iVar4 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
  if (iVar4 < 0) {
    if (*(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c) < 0x5000) goto LAB_0802ecb8;
LAB_0802ed0c:
    do {
      if (*(byte *)(param_1 + 0xc2) < 4) {
        uVar8 = DAT_02022890 * 0x343fd + 0x269ec3;
        DAT_02022890 = uVar8 & 0x7fffffff;
        uVar8 = uVar8 * 2 >> 0x11 & 0x1f;
      }
      else {
        uVar8 = 0x20;
      }
      cVar2 = sub_0802EA5C(param_1,uVar8,uVar6);
      cVar3 = sub_0802E704(param_1,*(undefined *)(param_1 + 0xd));
    } while (cVar3 != '\0');
  }
  else {
    if (0x4fff < iVar4) goto LAB_0802ed0c;
LAB_0802ecb8:
    do {
      if (*(byte *)(param_1 + 0xc2) < 4) {
        uVar8 = DAT_02022890 * 0x343fd + 0x269ec3;
        DAT_02022890 = uVar8 & 0x7fffffff;
        uVar8 = uVar8 * 2 >> 0x11 & 0x1f;
      }
      else {
        uVar8 = 0x20;
      }
      cVar2 = sub_0802E9F4(param_1,uVar8,uVar6);
      cVar3 = sub_0802E704(param_1,*(undefined *)(param_1 + 0xd));
    } while (cVar3 != '\0');
  }
  if (cVar2 == '\0') {
    cVar3 = *(char *)(param_1 + 0xc2) + '\x01';
  }
  else {
    cVar3 = '\0';
  }
  *(char *)(param_1 + 0xc2) = cVar3;
LAB_0802ed68:
  sub_080297C0(param_1);
  return in_lr;
}

