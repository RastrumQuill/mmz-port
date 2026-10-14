// sub_0804B72C at 0x0804B72C (thumb)

undefined4 sub_0804B72C(int param_1)

{
  bool bVar1;
  undefined uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x54);
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + iVar6;
  iVar6 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar6;
  iVar7 = -0xe00;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar7 = 0xe00;
  }
  uVar4 = sub_080065AC(iVar6 + iVar7,*(int *)(param_1 + 0x50) + 0x400);
  if (((uVar4 & 0xf) == 1) || ((uVar4 & 0xf) == 0xe)) {
    uVar4 = sub_080065AC(*(int *)(param_1 + 0x4c) + iVar7,*(int *)(param_1 + 0x50) + 0x2000);
    if (((uVar4 & 0xf) == 1) || ((uVar4 & 0xf) == 0xe)) {
      bVar3 = *(byte *)(param_1 + 10);
      uVar2 = 8;
      if ((bVar3 & 0x10) != 0) {
        uVar2 = 9;
      }
      *(undefined *)(param_1 + 0xd) = uVar2;
      iVar6 = 0xff;
      if ((bVar3 & 0x10) != 0) {
        iVar6 = 0x80;
      }
      *(char *)(param_1 + 0x12) = (char)iVar6;
      *(int *)(param_1 + 0x54) = (short)(&DAT_080c8e24)[iVar6 + 0x40] * 0xd;
      *(int *)(param_1 + 0x58) = (short)(&DAT_080c8e24)[iVar6] * -0xd;
      if ((bVar3 & 0x10) == 0) goto LAB_0804b838;
      iVar6 = sub_08007EE0(*(int *)(param_1 + 0x4c) + iVar7,*(int *)(param_1 + 0x50) + 0x400);
      goto joined_r0x0804b816;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar6 = sub_08007EE0(*(int *)(param_1 + 0x4c) + iVar7,*(int *)(param_1 + 0x50) + 0x400);
      goto joined_r0x0804b816;
    }
LAB_0804b838:
    iVar6 = sub_08008120(*(int *)(param_1 + 0x4c) + iVar7,*(int *)(param_1 + 0x50) + 0x400);
    if (0 < iVar6) goto LAB_0804b84a;
  }
  else {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) goto LAB_0804b838;
    iVar6 = sub_08007EE0(*(int *)(param_1 + 0x4c) + iVar7,*(int *)(param_1 + 0x50) + 0x400);
joined_r0x0804b816:
    if (iVar6 < 0) {
LAB_0804b84a:
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar6;
    }
  }
  uVar4 = sub_080065AC(*(int *)(param_1 + 0x4c) + iVar7,*(int *)(param_1 + 0x50) + -0x400);
  if (((uVar4 & 0xf) != 1) && ((uVar4 & 0xf) != 0xe)) {
    bVar3 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar3;
    if (bVar3 == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
  }
  uVar4 = sub_080065AC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + -0x400);
  if ((uVar4 & 0xf) == 1) {
    iVar6 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  }
  else {
    if ((uVar4 & 0xf) == 0xe) goto LAB_0804b94e;
    *(undefined *)(param_1 + 0x10) = 2;
    *(undefined *)(param_1 + 0xd) = 1;
    sub_080033F0(param_1 + 0x6c,1);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    bVar1 = *(int *)(DAT_0202286c + 0x4c) < *(int *)(param_1 + 0x4c);
    if (bVar1) {
      uVar5 = 0x240;
    }
    else {
      uVar5 = 0xfffffdc0;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    iVar6 = *(int *)(param_1 + 0x50) + 0xe00;
  }
  *(int *)(param_1 + 0x50) = iVar6;
LAB_0804b94e:
  if (*(char *)(param_1 + 0x11) == '\x05') {
    iVar6 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
    if (iVar6 < 0) {
      iVar6 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    }
    if (iVar6 < 0x4000) {
      *(undefined4 *)(param_1 + 0x58) = 0x280;
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      sub_080033F0(param_1 + 0x6c,5);
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 0x4c);
    iVar6 = iVar7 - *(int *)(DAT_0202286c + 0x4c);
    if (iVar6 < 0) {
      iVar6 = *(int *)(DAT_0202286c + 0x4c) - iVar7;
    }
    if ((iVar6 < 0x5000) && (*(int *)(param_1 + 0x50) < *(int *)(DAT_0202286c + 0x50) + -0x2000)) {
      bVar1 = iVar7 <= *(int *)(DAT_0202286c + 0x4c);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        if (bVar1) {
          return in_lr;
        }
      }
      else if (!bVar1) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0x12) = 0;
      *(undefined *)(param_1 + 0xd) = 10;
      sub_080033F0(param_1 + 0x6c,2);
    }
  }
  return in_lr;
}

