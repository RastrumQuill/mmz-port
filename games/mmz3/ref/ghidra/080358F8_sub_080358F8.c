// sub_080358F8 at 0x080358F8 (thumb)

undefined4 sub_080358F8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x58);
  if (iVar3 < 0x12c01) {
    iVar1 = *(int *)(param_1 + 0x54);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar3 = 0x12c00;
  }
  iVar3 = sub_08009ED0(iVar1 + 0x1a00,iVar3);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  }
  if (((*(char *)(param_1 + 0x284) == '\0') && (*(short *)(*(int *)(param_1 + 0x28) + 4) == 1)) &&
     ((DAT_02002134 & 1) != 0)) {
    *(char *)(param_1 + 0x284) = '\x01';
    *(undefined *)(param_1 + 0x285) = 1;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffac0;
  }
  if (*(char *)(param_1 + 0x284) == '\x01') {
    if (((DAT_02002130 & 1) == 0) && (*(int *)(param_1 + 0x60) < 0)) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined *)(param_1 + 0x285) = 0;
    }
    if ((*(char *)(param_1 + 0x285) == '\x01') && (0 < *(int *)(param_1 + 0x60))) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(char *)(param_1 + 0x285) = '\0';
    }
    iVar3 = *(int *)(param_1 + 0x60) + 0x2c;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    iVar1 = *(int *)(param_1 + 0x288);
    if ((iVar1 != 0x7fffffff) && (iVar3 <= iVar1)) {
      iVar3 = sub_08009BE4(*(int *)(param_1 + 0x54) + -0x1a00,iVar3 + *(int *)(param_1 + 0x60));
      iVar1 = sub_0800A1F4(*(int *)(param_1 + 0x54) + -0x1a00,*(undefined4 *)(param_1 + 0x58));
      if ((iVar3 == 0) || (*(int *)(param_1 + 0x288) < iVar1)) {
        iVar3 = sub_08009BE4(*(int *)(param_1 + 0x54) + 0x1a00,
                             *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60));
        iVar1 = sub_0800A1F4(*(int *)(param_1 + 0x54) + 0x1a00,*(undefined4 *)(param_1 + 0x58));
        if ((iVar3 == 0) || (*(int *)(param_1 + 0x288) < iVar1)) {
          iVar3 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),
                               *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60));
          iVar1 = sub_0800A1F4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
          if (iVar3 == 0) {
            return in_lr;
          }
          if (*(int *)(param_1 + 0x288) < iVar1) {
            return in_lr;
          }
          iVar3 = *(int *)(param_1 + 0x54);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x54) + 0x1a00;
        }
      }
      else {
        iVar3 = *(int *)(param_1 + 0x54) + -0x1a00;
      }
      uVar2 = sub_0800A1F4(iVar3,*(int *)(param_1 + 0x58) + -0x1000);
      *(undefined4 *)(param_1 + 0x58) = uVar2;
      *(undefined *)(param_1 + 0x284) = 0;
      *(undefined *)(param_1 + 0x285) = 0;
    }
  }
  else {
    iVar3 = sub_0800A1F4(*(int *)(param_1 + 0x54) + 0x1a00,*(undefined4 *)(param_1 + 0x58));
    if (((iVar3 != *(int *)(param_1 + 0x58)) &&
        (iVar3 = sub_0800A1F4(*(int *)(param_1 + 0x54) + -0x1a00), iVar3 != *(int *)(param_1 + 0x58)
        )) && (iVar3 = sub_0800A1F4(*(undefined4 *)(param_1 + 0x54)),
              iVar3 != *(int *)(param_1 + 0x58))) {
      *(char *)(param_1 + 0x284) = '\x01';
      *(undefined *)(param_1 + 0x285) = 1;
      *(undefined4 *)(param_1 + 0x60) = 0;
      if (*(int *)(param_1 + 0x288) < iVar3) {
        *(int *)(param_1 + 0x288) = 0x7fffffff;
        *(undefined *)(param_1 + 0x286) = 0x78;
      }
    }
  }
  return in_lr;
}

