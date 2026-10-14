// sub_08082168 at 0x08082168 (thumb)

undefined4 sub_08082168(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (cVar1 = sub_08083768(param_1), cVar1 != '\0'))
  {
    cVar1 = *(char *)(param_1 + 0xd);
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      if (1 < (byte)(cVar1 - 1U)) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
      cVar1 = '\x01';
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(char *)(param_1 + 0xf) = cVar1;
    if (*(char *)(param_1 + 0xbc) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
        *(undefined *)(param_1 + 0xd) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 1;
      }
    }
    else {
      *(undefined *)(param_1 + 0xd) = 3;
    }
    sub_080823A0(param_1);
    return in_lr;
  }
  piVar2 = (int *)(param_1 + 0xb8);
  if (*piVar2 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_08082270:
      if (*piVar2 != 0) goto LAB_08082308;
    }
    else {
      iVar3 = sub_0802AD94(0,param_1,&DAT_0885b3d8);
      *piVar2 = iVar3;
      if (iVar3 != 0) {
        *(undefined *)(param_1 + 0xbf) = 1;
        sub_08005784(param_1 + 0x74,&DAT_0885b354);
        *(undefined4 *)(param_1 + 0x60) = 0;
        sub_0801CF00(param_1,0x1600);
        sub_0801CFF0(param_1);
        if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1800;
        }
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
        *(undefined *)(param_1 + 0x4d) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
        goto LAB_08082270;
      }
    }
    if (*(char *)(param_1 + 0xbf) == '\0') {
      cVar1 = *(char *)(param_1 + 0xf);
      if (cVar1 == '\0') {
        iVar3 = sub_0807F824(param_1);
        if (iVar3 != 0) {
          *(undefined *)(param_1 + 0xf) = 1;
        }
        cVar1 = *(char *)(param_1 + 0xf);
        if (cVar1 == '\0') goto LAB_080822c4;
      }
      if (cVar1 == '\x01') {
        sub_0801CFF0(param_1);
        *(undefined *)(param_1 + 0xf) = 2;
      }
      iVar3 = sub_0807F824(param_1);
      if (iVar3 == 0) {
        *(undefined *)(param_1 + 0xf) = 0;
      }
      if ((*(uint *)(param_1 + 0x8c) & 0x20001) != 0x20001) {
        return in_lr;
      }
    }
LAB_080822c4:
    if (*piVar2 == 0) {
      if (*(char *)(param_1 + 0xbf) == '\0') {
        sub_08128884(param_1,*(undefined4 *)(&DAT_0885b39c + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_08128884(param_1,*(undefined4 *)(&DAT_0885b3b0 + (uint)*(byte *)(param_1 + 0xd) * 4));
        return in_lr;
      }
      goto LAB_08082320;
    }
  }
LAB_08082308:
  iVar3 = sub_0802B3CC(*piVar2);
  if (iVar3 != 0) {
    sub_08005784(param_1 + 0x74,&DAT_0885b24c);
    *piVar2 = 0;
  }
LAB_08082320:
  iVar3 = sub_0807F824(param_1);
  if ((iVar3 == 0) && (pcVar4 = (char *)(param_1 + 0xbf), *pcVar4 != '\0')) {
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    iVar3 = sub_08007DB4(*(int *)(param_1 + 0x54) + -0x700,iVar3 + -0x100);
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *pcVar4 = '\0';
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    }
    iVar3 = sub_08007DB4(*(int *)(param_1 + 0x54) + 0x700,*(int *)(param_1 + 0x58) + -0x100);
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *pcVar4 = '\0';
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    }
  }
  return in_lr;
}

