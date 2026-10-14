// sub_0803427C at 0x0803427C (thumb)

undefined4 sub_0803427C(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  sub_080297C0();
  iVar5 = *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = *(int *)(param_1 + 0x4c) < iVar5;
  if (*(int *)(param_1 + 0x4c) < iVar5) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xc0) + -0x4000;
  bVar2 = *(byte *)(param_1 + 0x11);
  if ((bVar2 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x11);
    if (bVar1 == 2) {
      uVar3 = 0x13;
    }
    else {
      if (2 < bVar1) {
        if (bVar1 != 4) {
          if (bVar1 != 6) goto LAB_0803436c;
          if (*(byte *)(DAT_02022b20 + 1) < 5) goto LAB_08034364;
          uVar3 = 0x1b;
          goto LAB_08034366;
        }
        goto LAB_0803434a;
      }
      if (bVar1 != 0) goto LAB_0803436c;
      uVar3 = 6;
    }
  }
  else {
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    iVar5 = sub_080C8CB0(uVar4 * 2 >> 0x11,3);
    if (iVar5 == 1) {
      uVar3 = 0x13;
    }
    else if (iVar5 == 0) {
      uVar3 = 6;
    }
    else {
      if (iVar5 != 2) {
        if (iVar5 != 3) goto LAB_0803436c;
        if (*(byte *)(DAT_02022b20 + 1) < 5) {
LAB_08034364:
          uVar3 = 2;
        }
        else {
          uVar3 = 0x1b;
        }
LAB_08034366:
        *(undefined *)(param_1 + 0xd) = uVar3;
        *(undefined *)(param_1 + 0xe) = 1;
        goto LAB_0803436c;
      }
LAB_0803434a:
      uVar3 = 10;
    }
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
  *(undefined *)(param_1 + 0xe) = 1;
LAB_0803436c:
  if (*(char *)(param_1 + 0xd2) != '\0') {
    *(undefined *)(param_1 + 0xd) = 0x1b;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  *(byte *)(param_1 + 0x11) = bVar2 + 1 & 7;
  return in_lr;
}

