// sub_08095B44 at 0x08095B44 (thumb)

undefined4 sub_08095B44(int param_1)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0xfffff800;
  puVar6 = (uint *)(param_1 + 0x8c);
  if ((*puVar6 & 0x200) != 0) {
    if (*(char *)(param_1 + 0x10) != '\x04') {
      uVar1 = *(undefined *)(param_1 + 0xd);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      if ((*puVar6 & 0x18000) == 0x10000) {
        uVar3 = 1;
      }
      else {
        uVar3 = *puVar6 & 0x20000;
        if (uVar3 != 0) {
          uVar3 = 3;
        }
      }
      *(char *)(param_1 + 0xd) = (char)uVar3;
      *(undefined *)(param_1 + 0xf) = uVar1;
      sub_08095DC8(param_1);
      return in_lr;
    }
    goto LAB_08095cbe;
  }
  if (*(char *)(param_1 + 0x10) == '\x04') goto LAB_08095cbe;
  uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (0x8000 < uVar3) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar6 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  piVar4 = (int *)(param_1 + 0xb8);
  if ((*piVar4 == 0) && ((*puVar6 & 1) != 0)) {
    if (*(char *)(param_1 + 0xd) != '\n') {
      iVar5 = sub_080253D8(0,param_1,&local_18);
      *piVar4 = iVar5;
      if (iVar5 != 0) {
        if (*(char *)(param_1 + 0x10) == '\0') {
          sub_08007390(param_1 + 0x74,&DAT_083668b4);
        }
        else {
          sub_08007390(param_1 + 0x74,&DAT_08366974);
        }
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x60);
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
      goto LAB_08095c62;
    }
LAB_08095cb2:
    if (*piVar4 == 0) goto LAB_08095cbe;
  }
  else {
LAB_08095c62:
    if (*(char *)(param_1 + 0xd) == '\n') goto LAB_08095cb2;
    if (*piVar4 == 0) {
      cVar2 = *(char *)(param_1 + 0xf);
      if (cVar2 == '\0') {
        iVar5 = sub_08063614(param_1);
        if (iVar5 != 0) {
          *(undefined *)(param_1 + 0xf) = 1;
        }
        cVar2 = *(char *)(param_1 + 0xf);
        if (cVar2 == '\0') goto LAB_08095cb2;
      }
      if (cVar2 == '\x01') {
        sub_080177F4(param_1);
        *(undefined *)(param_1 + 0xf) = 2;
      }
      iVar5 = sub_08063614(param_1);
      if (iVar5 == 0) {
        *(undefined *)(param_1 + 0xf) = 0;
      }
      if ((*(uint *)(param_1 + 0x8c) & 0x20001) != 0x20001) {
        return in_lr;
      }
      goto LAB_08095cb2;
    }
  }
  if (*(char *)(param_1 + 0xd) != '\n') {
    iVar5 = sub_08025794(*piVar4);
    if (iVar5 == 0) {
      iVar5 = sub_08063614(param_1);
      if (((iVar5 == 0) &&
          (iVar5 = sub_08009B28(*(int *)(param_1 + 0x54) + -0xa00,*(undefined4 *)(param_1 + 0x58)),
          -1 < iVar5)) &&
         (iVar5 = sub_08009B28(*(int *)(param_1 + 0x54) + 0xa00,*(undefined4 *)(param_1 + 0x58)),
         -1 < iVar5)) {
        iVar5 = *(int *)(param_1 + 0x60) + 0x40;
        *(int *)(param_1 + 0x60) = iVar5;
        if (0x700 < iVar5) {
          *(undefined4 *)(param_1 + 0x60) = 0x700;
        }
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        iVar5 = sub_08009B28(*(int *)(param_1 + 0x54) + -0x800);
        if (iVar5 < 0) {
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
        }
        iVar5 = sub_08009B28(*(int *)(param_1 + 0x54) + 0x800,*(undefined4 *)(param_1 + 0x58));
        if (iVar5 < 0) {
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x10) == '\0') {
        sub_08007390(param_1 + 0x74,&DAT_08366854);
      }
      else {
        sub_08007390(param_1 + 0x74,&DAT_08366884);
      }
      *piVar4 = 0;
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x68);
    }
    if ((*(uint *)(param_1 + 0x8c) & 0x20001) != 0x20001) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
LAB_08095cbe:
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083669d4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08366a00 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

