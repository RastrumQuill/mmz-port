// sub_08050844 at 0x08050844 (thumb)

undefined4 sub_08050844(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_18;
  undefined4 local_14;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    iVar3 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0xc4);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (iVar3 < 0) goto LAB_08050898;
    }
    else if (-1 < iVar3) {
LAB_08050898:
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (0x7000 < iVar3) {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
        sub_08050400(param_1);
        return in_lr;
      }
    }
    sub_080033F0(param_1 + 0x6c,1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0805085a_caseD_1:
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_08050a64:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_0805085a_caseD_6:
    return in_lr;
  case 1:
    goto switchD_0805085a_caseD_1;
  case 2:
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(undefined *)(param_1 + 0x13) = 8;
    *(undefined4 *)(param_1 + 0x54) = 0xfffffcc0;
    uVar2 = 0xfffffcc0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar2 = 0x340;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    sub_0800561C(param_1 + 0x74,&DAT_082af390);
    sub_0808A81C(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    uVar5 = bVar1 & 1;
    iVar3 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0xc4);
    if (iVar3 < 0) {
      if (uVar5 != 1) {
LAB_0805095c:
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (0xa000 < iVar3) {
          *(undefined *)(param_1 + 0xe) = 4;
          return in_lr;
        }
      }
    }
    else if ((bVar1 & 1) != 0) goto LAB_0805095c;
    iVar3 = *(int *)(param_1 + 0x4c) + uVar5 * 0x1800 + -0xc00;
    if ((bVar1 & 1) == 0) {
      iVar3 = sub_08008120(iVar3,*(int *)(param_1 + 0x50) + -0x800);
      if (0 < iVar3) goto LAB_080509b2;
    }
    else {
      iVar3 = sub_08007EE0(iVar3,*(int *)(param_1 + 0x50) + -0x800);
      if (iVar3 < 0) {
LAB_080509b2:
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar3;
      }
    }
    iVar4 = *(int *)(param_1 + 0x4c) + uVar5 * 0x1200 + -0x900;
    iVar3 = sub_08007B30(iVar4,*(int *)(param_1 + 0x50) + 0x400);
    if (iVar3 < 0) {
      iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x4c) = iVar3;
      if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
        local_14 = *(undefined4 *)(param_1 + 0x50);
        local_18 = iVar3;
        sub_0808827C(3,&local_18);
      }
      if ((bVar1 & 1) == 0) {
        iVar3 = sub_08008120(iVar4,*(int *)(param_1 + 0x50) + -0xf00);
        if (0 < iVar3) goto LAB_08050a2e;
      }
      else {
        iVar3 = sub_08007EE0(iVar4,*(int *)(param_1 + 0x50) + -0xf00);
        if (iVar3 < 0) {
LAB_08050a2e:
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar3;
          goto LAB_08050a34;
        }
      }
    }
    else {
LAB_08050a34:
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
    }
    bVar1 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (bVar1 < 0x14) {
      iVar3 = *(int *)(param_1 + 0x54) * 0xf5;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x54) = iVar3 >> 8;
    }
    if ((*(char *)(param_1 + 0x12) != '\0') && (*(char *)(param_1 + 0x13) != '\0')) {
      return in_lr;
    }
    goto LAB_08050a64;
  case 4:
    sub_080033F0(param_1 + 0x6c,2);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      sub_0800561C(param_1 + 0x74,&DAT_082af358);
    }
  default:
    goto switchD_0805085a_caseD_6;
  }
}

