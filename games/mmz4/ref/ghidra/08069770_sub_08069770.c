// sub_08069770 at 0x08069770 (thumb)

undefined4 sub_08069770(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  iVar2 = *(int *)(param_1 + 0xb8);
  iVar3 = *(int *)(param_1 + 0xbc);
  iVar10 = *(int *)(param_1 + 0xc0);
  bVar5 = *(byte *)(param_1 + 10) >> 4 & 1;
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    uVar6 = *(undefined4 *)(iVar3 + 0x58);
    *(undefined4 *)(iVar10 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
    *(undefined4 *)(iVar10 + 0x58) = uVar6;
    *(byte *)(iVar10 + 10) = *(byte *)(iVar10 + 10) | 1;
    sub_0806A77C(param_1,*(undefined *)(param_1 + 0xc4),bVar5,1);
    sub_0806AA78(iVar1,*(undefined *)(iVar1 + 0xb4),bVar5,1);
    sub_0806A844(iVar2,*(undefined *)(iVar2 + 0xb4),bVar5,1);
    sub_0806A844(iVar3,*(undefined *)(iVar3 + 0xb4),bVar5,1);
    sub_0806A844(iVar10,*(undefined *)(iVar10 + 0xb4),bVar5,1);
    sub_0801CF00(iVar1,0x5709);
    sub_0801CF00(iVar2,0x5704);
    sub_0801CF00(iVar3,0x5708);
    sub_0801CF00(iVar10,0x570a);
    *(undefined4 *)(param_1 + 0x5c) = 0x180;
    *(undefined4 *)(param_1 + 0x60) = 0x30;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_080697b2_caseD_1:
    sub_0801CFC8(iVar1,CONCAT11(*(undefined *)(iVar1 + 0x1e),*(undefined *)(iVar1 + 0x70)),
                 (short)*(char *)(iVar1 + 0x71),*(char *)(iVar1 + 0x72) + 1);
    sub_0801CFF0(iVar1);
    sub_0801CFC8(iVar2,CONCAT11(*(undefined *)(iVar2 + 0x1e),*(undefined *)(iVar2 + 0x70)),
                 (short)*(char *)(iVar2 + 0x71),*(char *)(iVar2 + 0x72) + 1);
    sub_0801CFF0(iVar2);
    sub_0801CFC8(iVar3,CONCAT11(*(undefined *)(iVar3 + 0x1e),*(undefined *)(iVar3 + 0x70)),
                 (short)*(char *)(iVar3 + 0x71),*(char *)(iVar3 + 0x72) + 1);
    sub_0801CFF0(iVar3);
    sub_0801CFC8(iVar10,CONCAT11(*(undefined *)(iVar10 + 0x1e),*(undefined *)(iVar10 + 0x70)),
                 (short)*(char *)(iVar10 + 0x71),*(char *)(iVar10 + 0x72) + 1);
    sub_0801CFF0(iVar10);
    iVar1 = *(int *)(param_1 + 0x60) + -1;
    *(int *)(param_1 + 0x60) = iVar1;
    if (iVar1 == 0) {
LAB_08069e54:
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    else if ((*(uint *)(param_1 + 0x60) & 7) == 0) {
      bVar5 = *(char *)(param_1 + 0x13) + 1;
      *(byte *)(param_1 + 0x13) = bVar5;
      if ((bVar5 & 1) != 0) {
        iVar3 = iVar2;
      }
      uVar7 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      local_28 = *(int *)(iVar3 + 0x54) + ((uVar7 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
      uVar7 = (uVar7 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar7 & 0x7fffffff;
      local_24 = *(int *)(iVar3 + 0x58) + ((uVar7 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
      sub_080D0894(1,&local_28);
      sub_08002B10(0x35);
    }
switchD_080697b2_caseD_6:
    return in_lr;
  case 1:
    goto switchD_080697b2_caseD_1;
  case 2:
    *(undefined4 *)(param_1 + 0x60) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    sub_0801CFC8(iVar1,CONCAT11(*(undefined *)(iVar1 + 0x1e),*(undefined *)(iVar1 + 0x70)),
                 (short)*(char *)(iVar1 + 0x71),*(char *)(iVar1 + 0x72) + 1);
    sub_0801CFF0(iVar1);
    sub_0801CFC8(iVar2,CONCAT11(*(undefined *)(iVar2 + 0x1e),*(undefined *)(iVar2 + 0x70)),
                 (short)*(char *)(iVar2 + 0x71),*(char *)(iVar2 + 0x72) + 1);
    sub_0801CFF0(iVar2);
    sub_0801CFC8(iVar3,CONCAT11(*(undefined *)(iVar3 + 0x1e),*(undefined *)(iVar3 + 0x70)),
                 (short)*(char *)(iVar3 + 0x71),*(char *)(iVar3 + 0x72) + 1);
    sub_0801CFF0(iVar3);
    sub_0801CFC8(iVar10,CONCAT11(*(undefined *)(iVar10 + 0x1e),*(undefined *)(iVar10 + 0x70)),
                 (short)*(char *)(iVar10 + 0x71),*(char *)(iVar10 + 0x72) + 1);
    sub_0801CFF0(iVar10);
    iVar3 = *(int *)(param_1 + 0x60) + -1;
    *(int *)(param_1 + 0x60) = iVar3;
    if (iVar3 != 0) {
      return in_lr;
    }
    goto LAB_08069e54;
  case 4:
    *(undefined4 *)(param_1 + 0x60) = 0x100;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 5:
    uVar7 = *(int *)(param_1 + 0x60) - 1;
    *(uint *)(param_1 + 0x60) = uVar7;
    if ((int)uVar7 < 0x80) {
      if ((uVar7 & 1) == 0) {
LAB_08069b6e:
        *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfe;
        *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfe;
        *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfe;
        bVar5 = *(byte *)(iVar10 + 10) & 0xfe;
      }
      else {
        *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) | 1;
        *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) | 1;
        *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) | 1;
        bVar5 = *(byte *)(iVar10 + 10) | 1;
      }
    }
    else {
      if ((uVar7 & 3) == 0) goto LAB_08069b6e;
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) | 1;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) | 1;
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) | 1;
      bVar5 = *(byte *)(iVar10 + 10) | 1;
    }
    *(byte *)(iVar10 + 10) = bVar5;
    uVar9 = *(uint *)(param_1 + 0x60);
    uVar7 = uVar9;
    if ((int)uVar9 < 0) {
      uVar7 = uVar9 + 0x1f;
    }
    iVar4 = (int)uVar7 >> 5;
    iVar8 = (uVar9 & 7) * 4;
    if (iVar4 == iVar8 || (int)(iVar4 + (uVar9 & 7) * -4) < 0 != SBORROW4(iVar4,iVar8)) {
      sub_0801CFC8(iVar1,CONCAT11(*(undefined *)(iVar1 + 0x1e),*(undefined *)(iVar1 + 0x70)),
                   (short)*(char *)(iVar1 + 0x71),*(char *)(iVar1 + 0x72) + 1);
      sub_0801CFF0(iVar1);
      sub_0801CFC8(iVar2,CONCAT11(*(undefined *)(iVar2 + 0x1e),*(undefined *)(iVar2 + 0x70)),
                   (short)*(char *)(iVar2 + 0x71),*(char *)(iVar2 + 0x72) + 1);
      sub_0801CFF0(iVar2);
      sub_0801CFC8(iVar3,CONCAT11(*(undefined *)(iVar3 + 0x1e),*(undefined *)(iVar3 + 0x70)),
                   (short)*(char *)(iVar3 + 0x71),*(char *)(iVar3 + 0x72) + 1);
      sub_0801CFF0(iVar3);
      sub_0801CFC8(iVar10,CONCAT11(*(undefined *)(iVar10 + 0x1e),*(undefined *)(iVar10 + 0x70)),
                   (short)*(char *)(iVar10 + 0x71),*(char *)(iVar10 + 0x72) + 1);
      sub_0801CFF0(iVar10);
      bVar5 = *(char *)(param_1 + 0x12) + 1;
      *(byte *)(param_1 + 0x12) = bVar5;
      if ((bVar5 & 7) == 0) {
        bVar5 = *(char *)(param_1 + 0x13) + 1;
        *(byte *)(param_1 + 0x13) = bVar5;
        iVar4 = iVar3;
        if ((bVar5 & 1) != 0) {
          iVar4 = iVar2;
        }
        uVar7 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        local_28 = *(int *)(iVar4 + 0x54) + ((uVar7 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
        uVar7 = (uVar7 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar7 & 0x7fffffff;
        local_24 = *(int *)(iVar4 + 0x58) + ((uVar7 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
        sub_080D0894(2,&local_28);
        sub_08002B10(0x35);
      }
    }
    else {
      sub_0801CFF0(iVar1);
      sub_0801CFF0(iVar2);
      sub_0801CFF0(iVar3);
      sub_0801CFF0(iVar10);
      sub_08069FA8(param_1,0x180);
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      return in_lr;
    }
    DAT_0202e922 = DAT_0202e922 | 2;
    sub_08002B10(0x2a);
    sub_080D0894(2,iVar1 + 0x54);
    sub_080D0894(1,iVar3 + 0x54);
    sub_080D0894(1,iVar2 + 0x54);
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
    *(undefined4 *)(iVar2 + 0x8c) = 0;
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined *)(iVar2 + 0x94) = 0;
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
    *(undefined4 *)(iVar2 + 0xc) = 3;
    *(undefined4 *)(iVar2 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar2 + 9) * 4) + 0xc);
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
    *(undefined4 *)(iVar3 + 0x8c) = 0;
    *(undefined4 *)(iVar3 + 0x90) = 0;
    *(undefined *)(iVar3 + 0x94) = 0;
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
    *(undefined4 *)(iVar3 + 0xc) = 3;
    *(undefined4 *)(iVar3 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar3 + 9) * 4) + 0xc);
    *(byte *)(iVar10 + 10) = *(byte *)(iVar10 + 10) & 0xfc;
    *(undefined4 *)(iVar10 + 0x8c) = 0;
    *(undefined4 *)(iVar10 + 0x90) = 0;
    *(undefined *)(iVar10 + 0x94) = 0;
    *(byte *)(iVar10 + 10) = *(byte *)(iVar10 + 10) & 0xfb;
    *(undefined4 *)(iVar10 + 0xc) = 3;
    *(undefined4 *)(iVar10 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar10 + 9) * 4) + 0xc);
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfc;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined *)(iVar1 + 0x94) = 0;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
    *(undefined4 *)(iVar1 + 0xc) = 3;
    *(undefined4 *)(iVar1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar1 + 9) * 4) + 0xc);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    goto LAB_08069e54;
  default:
    goto switchD_080697b2_caseD_6;
  }
}

