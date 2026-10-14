// sub_080577C8 at 0x080577C8 (thumb)

undefined4 sub_080577C8(int param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        iVar4 = *(int *)(param_1 + 0xd4);
        if ((iVar4 != 0) && (1 < *(byte *)(iVar4 + 0xc))) {
          *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfc;
          *(undefined4 *)(iVar4 + 0x8c) = 0;
          *(undefined4 *)(iVar4 + 0x90) = 0;
          *(undefined *)(iVar4 + 0x94) = 0;
          *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfb;
          *(undefined4 *)(iVar4 + 0xc) = 3;
          *(undefined4 *)(iVar4 + 0x14) =
               *(undefined4 *)((&DAT_088614b8)[*(byte *)(iVar4 + 9)] + 0xc);
          *(int *)(param_1 + 0xd4) = 0;
        }
        iVar4 = *(int *)(param_1 + 0xd8);
        if ((iVar4 != 0) && (1 < *(byte *)(iVar4 + 0xc))) {
          *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfc;
          *(undefined4 *)(iVar4 + 0x8c) = 0;
          *(undefined4 *)(iVar4 + 0x90) = 0;
          *(undefined *)(iVar4 + 0x94) = 0;
          *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfb;
          *(undefined4 *)(iVar4 + 0xc) = 3;
          *(undefined4 *)(iVar4 + 0x14) =
               *(undefined4 *)((&DAT_088614b8)[*(byte *)(iVar4 + 9)] + 0xc);
          *(int *)(param_1 + 0xd8) = 0;
        }
      }
      goto LAB_0805797c;
    }
    if (bVar1 != 0) goto LAB_0805797c;
    sub_0801CF00(param_1,0xa006);
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  piVar2 = (int *)(param_1 + 0xd4);
  iVar4 = *piVar2;
  if ((iVar4 != 0) && (1 < *(byte *)(iVar4 + 0xc))) {
    *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfc;
    *(undefined4 *)(iVar4 + 0x8c) = 0;
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined *)(iVar4 + 0x94) = 0;
    *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfb;
    *(undefined4 *)(iVar4 + 0xc) = 3;
    *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(iVar4 + 9)] + 0xc);
    *piVar2 = 0;
  }
  piVar3 = (int *)(param_1 + 0xd8);
  iVar4 = *piVar3;
  if ((iVar4 != 0) && (1 < *(byte *)(iVar4 + 0xc))) {
    *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfc;
    *(undefined4 *)(iVar4 + 0x8c) = 0;
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined *)(iVar4 + 0x94) = 0;
    *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfb;
    *(undefined4 *)(iVar4 + 0xc) = 3;
    *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(iVar4 + 9)] + 0xc);
    *piVar3 = 0;
  }
  iVar4 = *piVar2;
  if (iVar4 == 0) {
    iVar4 = *piVar3;
    if (iVar4 == 0) goto LAB_0805797c;
LAB_080578d2:
    if (*(char *)(iVar4 + 0xb4) == '\0') goto LAB_0805797c;
    *(undefined *)(iVar4 + 0xb6) = 1;
  }
  else {
    if (*piVar3 == 0) goto LAB_080578d2;
    if ((*(char *)(iVar4 + 0xb4) == '\0') || (*(char *)(*piVar3 + 0xb4) == '\0')) goto LAB_0805797c;
    sub_08002B10(0xfd);
    *(undefined *)(*piVar2 + 0xb5) = 1;
    *(undefined *)(*piVar3 + 0xb5) = 1;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_0805797c:
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               &DAT_08854f90 +
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(&DAT_088551e0 +
                                        (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                  *(undefined *)(param_1 + 0x70)) - 0xa000) * 4)) *
               0x18);
  if ((*(int *)(param_1 + 0xd4) == 0) && (*(int *)(param_1 + 0xd8) == 0)) {
    *(undefined *)(param_1 + 0xe) = 10;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

