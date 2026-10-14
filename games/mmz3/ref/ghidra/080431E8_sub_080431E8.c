// sub_080431E8 at 0x080431E8 (thumb)

undefined4 sub_080431E8(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 0x10;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        *(undefined *)(param_1 + 0xd) = 5;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0800471C(0x129);
    *(undefined *)(param_1 + 0x12) = 0x14;
    sub_08017700(param_1,0x2b06);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(param_1 + 0x12) < 0x10) &&
     (cVar2 = sub_080FE4D8(*(byte *)(param_1 + 0x12),3), cVar2 == '\0')) {
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar8 = uVar3 & 0x7fffffff;
    DAT_0202f608 = uVar8;
    iVar4 = sub_080FE4D8(uVar3 * 2 >> 0x11,5);
    uVar3 = uVar8 * 0x343fd + 0x269ec3;
    uVar8 = uVar3 & 0x7fffffff;
    DAT_0202f608 = uVar8;
    iVar5 = sub_080FE4D8(uVar3 * 2 >> 0x11,0x1800);
    iVar7 = *(int *)(param_1 + 0x54);
    uVar3 = uVar8 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    iVar6 = sub_080FE4D8(uVar3 * 2 >> 0x11,0x3000);
    sub_0807AEA4(iVar7 - ((iVar4 * 0x3000 - iVar5) + 0x1000),DAT_020302c4 - (iVar6 + 0x8000));
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar8 = uVar3 & 0x7fffffff;
    DAT_0202f608 = uVar8;
    iVar4 = sub_080FE4D8(uVar3 * 2 >> 0x11,5);
    uVar3 = uVar8 * 0x343fd + 0x269ec3;
    uVar8 = uVar3 & 0x7fffffff;
    DAT_0202f608 = uVar8;
    iVar5 = sub_080FE4D8(uVar3 * 2 >> 0x11,0x1800);
    iVar7 = *(int *)(param_1 + 0x54);
    uVar3 = uVar8 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    iVar6 = sub_080FE4D8(uVar3 * 2 >> 0x11,0x3000);
    sub_0807AEA4(iVar7 - ((iVar4 * 0x3000 - iVar5) + 0x1000),DAT_020302c4 - (iVar6 + 0x8000));
  }
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    iVar4 = sub_080FE4D8(uVar3 * 2 >> 0x11,0x1400);
    sub_0807ADF0(*(int *)(param_1 + 0x54) + iVar4 + -0x3100,*(int *)(param_1 + 0x58) + -0x4200);
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    iVar4 = sub_080FE4D8(uVar3 * 2 >> 0x11,0x1400);
    sub_0807ADF0(*(int *)(param_1 + 0x54) + iVar4 + -0x3100,*(int *)(param_1 + 0x58) + -0x4200);
  }
  sub_080177F4(param_1);
  return in_lr;
}

