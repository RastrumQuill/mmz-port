// sub_080424A0 at 0x080424A0 (thumb)

undefined4 sub_080424A0(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xfa) == '\x02') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    goto LAB_08042780;
  }
  if (*(byte *)(param_1 + 0x12) < 0x11) {
LAB_0804252e:
    if (*(char *)(param_1 + 0x12) == '\x10') {
      sub_0801CE54(param_1);
      sub_0801CEEC(param_1);
      sub_0801CF00(param_1,0x810e);
    }
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) << 4;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) << 4;
  }
  else {
    sVar2 = sub_08042838(*(int *)(param_1 + 0x54) + 0x400,*(int *)(param_1 + 0x58) + 0x400);
    if ((((sVar2 == 0) &&
         (sVar2 = sub_08042838(*(int *)(param_1 + 0x54) + 0x400,*(int *)(param_1 + 0x58) + -0x400),
         sVar2 == 0)) &&
        (sVar2 = sub_08042838(*(int *)(param_1 + 0x54) + -0x400,*(int *)(param_1 + 0x58) + 0x400),
        sVar2 == 0)) &&
       (sVar2 = sub_08042838(*(int *)(param_1 + 0x54) + -0x400,*(int *)(param_1 + 0x58) + -0x400),
       sVar2 == 0)) {
      *(undefined *)(param_1 + 0x12) = 0x10;
    }
    if (*(byte *)(param_1 + 0x12) < 0x11) goto LAB_0804252e;
  }
  sub_0801CFF0(param_1);
  if (*(int *)(param_1 + 0x5c) == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if (*(int *)(param_1 + 100) < 1) {
      iVar5 = sub_08008988(*(undefined4 *)(param_1 + 0x54));
      iVar4 = *(int *)(param_1 + 0x54);
      if (iVar4 - iVar5 < 0) {
        iVar5 = sub_08008988(iVar4,*(undefined4 *)(param_1 + 0x58));
        iVar5 = iVar5 - *(int *)(param_1 + 0x54);
      }
      else {
        iVar5 = sub_08008988(iVar4,*(undefined4 *)(param_1 + 0x58));
        iVar5 = *(int *)(param_1 + 0x54) - iVar5;
      }
      if (iVar5 < 0x400) {
        uVar3 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        goto LAB_08042606;
      }
    }
    else {
      iVar5 = sub_08008868(*(undefined4 *)(param_1 + 0x54));
      iVar4 = *(int *)(param_1 + 0x54);
      if (iVar4 - iVar5 < 0) {
        iVar5 = sub_08008868(iVar4,*(undefined4 *)(param_1 + 0x58));
        iVar5 = iVar5 - *(int *)(param_1 + 0x54);
      }
      else {
        iVar5 = sub_08008868(iVar4,*(undefined4 *)(param_1 + 0x58));
        iVar5 = *(int *)(param_1 + 0x54) - iVar5;
      }
      if (iVar5 < 0x400) {
        uVar3 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
LAB_08042606:
        *(undefined4 *)(param_1 + 0x54) = uVar3;
      }
    }
    sVar2 = sub_08042838(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      sVar2 = sub_08042838(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100) * 0x100,
                           *(undefined4 *)(param_1 + 0x58));
      if (sVar2 != 0) goto LAB_0804274a;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) << 10;
      if (*(int *)(param_1 + 0x60) < 1) goto LAB_08042658;
      uVar3 = 0xffffffff;
    }
    else {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) * -0x400;
      if (*(int *)(param_1 + 0x60) < 1) {
        uVar3 = 0xffffffff;
      }
      else {
LAB_08042658:
        uVar3 = 1;
      }
    }
    *(undefined4 *)(param_1 + 0x68) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    if (*(int *)(param_1 + 0x68) < 1) {
      iVar5 = sub_08008748(iVar5,*(undefined4 *)(param_1 + 0x58));
      if (*(int *)(param_1 + 0x58) - iVar5 < 0) {
        iVar5 = sub_08008748(*(undefined4 *)(param_1 + 0x54));
        iVar5 = iVar5 - *(int *)(param_1 + 0x58);
      }
      else {
        iVar5 = sub_08008748(*(undefined4 *)(param_1 + 0x54));
        iVar5 = *(int *)(param_1 + 0x58) - iVar5;
      }
      if (iVar5 < 0x400) {
        uVar3 = sub_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        goto LAB_080426f4;
      }
    }
    else {
      iVar5 = sub_08008534(iVar5,*(undefined4 *)(param_1 + 0x58));
      if (*(int *)(param_1 + 0x58) - iVar5 < 0) {
        iVar5 = sub_08008534(*(undefined4 *)(param_1 + 0x54));
        iVar5 = iVar5 - *(int *)(param_1 + 0x58);
      }
      else {
        iVar5 = sub_08008534(*(undefined4 *)(param_1 + 0x54));
        iVar5 = *(int *)(param_1 + 0x58) - iVar5;
      }
      if (iVar5 < 0x400) {
        uVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
LAB_080426f4:
        *(undefined4 *)(param_1 + 0x58) = uVar3;
      }
    }
    sVar2 = sub_08042838(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      sVar2 = sub_08042838(*(undefined4 *)(param_1 + 0x54),
                           *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68) * 0x100);
      if (sVar2 != 0) goto LAB_0804274a;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x68) << 10;
      if (*(int *)(param_1 + 0x5c) < 1) goto LAB_08042742;
      uVar3 = 0xffffffff;
    }
    else {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x68) * -0x400;
      if (*(int *)(param_1 + 0x5c) < 1) {
        uVar3 = 0xffffffff;
      }
      else {
LAB_08042742:
        uVar3 = 1;
      }
    }
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
LAB_0804274a:
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 != -1) && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
    return in_lr;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(uint *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
LAB_08042780:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

