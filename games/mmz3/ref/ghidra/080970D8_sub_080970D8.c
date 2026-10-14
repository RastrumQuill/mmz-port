// sub_080970D8 at 0x080970D8 (thumb)

undefined4 sub_080970D8(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (cVar1 = sub_08096F04(param_1), cVar1 != '\0'))
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
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(char *)(param_1 + 0xf) = cVar1;
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      uVar2 = *(uint *)(param_1 + 0x8c) & 0x20000;
      if (uVar2 != 0) {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 1;
    }
    *(char *)(param_1 + 0xd) = (char)uVar2;
    sub_0809733C(param_1);
    return in_lr;
  }
  piVar3 = (int *)(param_1 + 0xb8);
  if ((*piVar3 == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    if (*(char *)(param_1 + 0xd) != '\x05') {
      iVar4 = sub_080253D8(0,param_1,&DAT_08366be4);
      *piVar3 = iVar4;
      if (iVar4 != 0) {
        *(undefined *)(param_1 + 0xbf) = 1;
        sub_08007390(param_1 + 0x74,&DAT_08366b40);
        *(undefined4 *)(param_1 + 0x60) = 0;
        sub_08017700(param_1,0xdc00);
        sub_080177F4(param_1);
        if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1800;
        }
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
        *(undefined *)(param_1 + 0x4d) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      goto LAB_080971de;
    }
LAB_08097236:
    if ((*piVar3 == 0) && (*(char *)(param_1 + 0xbf) == '\0')) goto LAB_0809724c;
  }
  else {
LAB_080971de:
    if (*(char *)(param_1 + 0xd) == '\x05') goto LAB_08097236;
    if (*piVar3 == 0) {
      if (*(char *)(param_1 + 0xbf) == '\0') {
        cVar1 = *(char *)(param_1 + 0xf);
        if (cVar1 == '\0') {
          iVar4 = sub_08063614(param_1);
          if (iVar4 != 0) {
            *(undefined *)(param_1 + 0xf) = 1;
          }
          cVar1 = *(char *)(param_1 + 0xf);
          if (cVar1 == '\0') goto LAB_08097236;
        }
        if (cVar1 == '\x01') {
          sub_080177F4(param_1);
          *(undefined *)(param_1 + 0xf) = 2;
        }
        iVar4 = sub_08063614(param_1);
        if (iVar4 == 0) {
          *(undefined *)(param_1 + 0xf) = 0;
        }
        if ((*(uint *)(param_1 + 0x8c) & 0x20001) != 0x20001) {
          return in_lr;
        }
      }
      goto LAB_08097236;
    }
  }
  if (*(char *)(param_1 + 0xd) != '\x05') {
    if ((*piVar3 != 0) && (iVar4 = sub_08025794(), iVar4 != 0)) {
      sub_08007390(param_1 + 0x74,&DAT_08366a50);
      *piVar3 = 0;
    }
    iVar4 = sub_08063614(param_1);
    if ((iVar4 == 0) && (pcVar5 = (char *)(param_1 + 0xbf), *pcVar5 != '\0')) {
      iVar4 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar4;
      if (0x700 < iVar4) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar4;
      iVar4 = sub_08009B28(*(int *)(param_1 + 0x54) + -0x700,iVar4 + -0x100);
      if (iVar4 < 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        *pcVar5 = '\0';
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
      }
      iVar4 = sub_08009B28(*(int *)(param_1 + 0x54) + 0x700,*(int *)(param_1 + 0x58) + -0x100);
      if (iVar4 < 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        *pcVar5 = '\0';
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
      }
    }
    if ((*(uint *)(param_1 + 0x8c) & 0x20001) != 0x20001) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
LAB_0809724c:
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08366ba0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08366bb8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

