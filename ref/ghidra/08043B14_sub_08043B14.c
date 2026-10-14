// sub_08043B14 at 0x08043B14 (thumb)

undefined4 sub_08043B14(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  cVar2 = sub_08042DE4();
  if (cVar2 != '\0') {
    return in_lr;
  }
  bVar3 = *(byte *)(param_1 + 0xe);
  if (bVar3 != 1) {
    if (1 < bVar3) {
      if (bVar3 == 2) {
        *(undefined *)(param_1 + 0xe) = 3;
      }
      else if (bVar3 != 3) {
        return in_lr;
      }
      iVar6 = *(int *)(param_1 + 0x58) + 0x40;
      *(int *)(param_1 + 0x58) = iVar6;
      if (0x700 < iVar6) {
        *(undefined4 *)(param_1 + 0x58) = 0x700;
      }
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
      uVar7 = sub_080426A0(param_1);
      if ((uVar7 & 1) != 0) {
        *(undefined *)(param_1 + 0xd) = 0xc;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080297C0(param_1);
      return in_lr;
    }
    if (bVar3 != 0) {
      return in_lr;
    }
    sub_08029778(param_1,1);
    bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    uVar7 = (uint)bVar1;
    *(bool *)(param_1 + 0x44) = bVar1;
    if (uVar7 == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(uint *)(param_1 + 0x54) = uVar7 * 0x300 + -0x180;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffa00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar6;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar6;
  sub_080426A0(param_1);
  if (*(int *)(param_1 + 0x58) < 1) goto LAB_08043cc2;
  iVar6 = *(short *)(param_1 + 0x8c) + -1;
  if (iVar6 < 0) {
    iVar6 = *(short *)(param_1 + 0x8c) + 0xe;
  }
  uVar7 = 3U - (iVar6 >> 4) & 0xff;
  if (uVar7 == 2) {
    uVar7 = 1;
  }
  else if (uVar7 == 3) {
    uVar7 = 2;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar6 = sub_08008BC0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  }
  else {
    iVar6 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  }
  iVar6 = iVar6 - *(int *)(param_1 + 0x4c);
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  if (iVar6 < 0x5000) {
LAB_08043c14:
    iVar6 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    if (iVar6 < 0) {
      iVar6 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
    }
joined_r0x08043c96:
    if (0x63ff < iVar6) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_08043cc2;
    }
    uVar4 = 0xd;
  }
  else {
    uVar5 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar5 & 0x7fffffff;
    uVar5 = uVar5 * 2 >> 0x11 & 0x1f;
    if (((uVar7 == 0) || ((uVar7 == 1 && (uVar5 < 0xc)))) || ((uVar7 == 2 && (uVar5 < 10))))
    goto LAB_08043c14;
    if (*(byte *)(DAT_02022b20 + 1) < 5) {
      iVar6 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
      if (iVar6 < 0) {
        iVar6 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
      }
      goto joined_r0x08043c96;
    }
    uVar4 = 0x10;
  }
  *(undefined *)(param_1 + 0xd) = uVar4;
  *(undefined *)(param_1 + 0xe) = 0;
LAB_08043cc2:
  sub_080297C0(param_1);
  return in_lr;
}

