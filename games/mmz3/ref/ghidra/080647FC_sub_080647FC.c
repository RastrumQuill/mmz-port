// sub_080647FC at 0x080647FC (thumb)

undefined4 sub_080647FC(int param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_lr;
  
  uVar2 = DAT_02030108 & 0x40;
  if ((DAT_02030108 & 0x40) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
LAB_0806487e:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  if ((*(char *)(param_1 + 0x10) == '\x02') &&
     ((uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54), 0x4000 < uVar3 ||
      ((((DAT_02030104 & 0x10) != 0 && (DAT_02002470 != 0x32da)) && (DAT_02002470 != 0)))))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(uint *)(param_1 + 0x8c) = uVar2;
    *(uint *)(param_1 + 0x90) = uVar2;
    *(char *)(param_1 + 0x94) = (char)uVar2;
    goto LAB_0806487e;
  }
  sub_08064B90(param_1);
  if (*(char *)(param_1 + 0xd) == '\x02') {
    sub_08064C2C(param_1);
    return in_lr;
  }
  if (((*(uint *)(param_1 + 0x8c) & 0x200) != 0) ||
     (uVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800),
     (uVar2 & 0x10) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08064A74(param_1);
    return in_lr;
  }
  iVar4 = sub_0800A5A4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
  if (iVar4 != 0) {
    iVar4 = sub_0800A5A4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  piVar5 = (int *)(param_1 + 0xc0);
  if (*piVar5 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      iVar4 = sub_080253D8(0,param_1,&DAT_0836244c);
      *piVar5 = iVar4;
      if (iVar4 == 0) goto LAB_080649e8;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    if (*piVar5 == 0) {
LAB_080649e8:
      iVar4 = sub_08063614(param_1);
      if (iVar4 != 0) {
        sub_08017700(param_1,0x1300);
        sub_080177F4(param_1);
        sub_08007390(param_1 + 0x74,&DAT_08362394);
        *piVar5 = 0;
        sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if ((sVar1 != 0) || (*(char *)(param_1 + 0x10) == '\x01')) {
          iVar4 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
          iVar7 = sub_0800A1F4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
          if (iVar4 != iVar7) {
            uVar6 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
            *(undefined4 *)(param_1 + 0x58) = uVar6;
          }
        }
        *(undefined *)(param_1 + 0xd) = 6;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      sub_08064B48(param_1);
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362354 + (uint)*(byte *)(param_1 + 0xd) * 4));
      return in_lr;
    }
  }
  sub_08017700(param_1,0x1303);
  sub_080177F4(param_1);
  sub_08007390(param_1 + 0x74,&DAT_083623ac);
  sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 1);
  if (sVar1 == 0) {
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
    if (sVar1 == 0) goto LAB_080649b8;
  }
  uVar6 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar6;
LAB_080649b8:
  iVar4 = sub_08025794(*piVar5);
  if (iVar4 == 0) {
    return in_lr;
  }
  *piVar5 = 0;
  sub_08007390(param_1 + 0x74,&DAT_08362394);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

