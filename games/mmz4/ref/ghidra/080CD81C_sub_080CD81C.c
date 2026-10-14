// sub_080CD81C at 0x080CD81C (thumb)

undefined4 sub_080CD81C(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_24;
  undefined4 local_20;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar4 + 0xd) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080CD990(param_1);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
    *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + 0x1000;
    if (*(char *)(param_1 + 0x71) != '\0') goto LAB_080cd95e;
    *(int *)(iVar4 + 0x54) = *(int *)(iVar4 + 0x54) + -0x600;
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    local_24 = *(int *)(param_1 + 0x54) - (uVar2 * 0x10 >> 0x14);
    local_20 = *(undefined4 *)(param_1 + 0x58);
    sub_080D08F8(4,&local_24,0,0);
    *(undefined *)(iVar4 + 0xdb) = 1;
    if (*(byte *)(param_1 + 0x10) < 2) {
      sub_0801CF00(param_1,0xdc01);
    }
    else if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x2400) &&
            (uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3, DAT_0202dc38 = uVar2 & 0x7fffffff,
            (uVar2 * 2 >> 0x11 & 3) == 0)) {
      sub_0801CF00(param_1,0xdc01);
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + 0x1000;
      }
      goto LAB_080cd95e;
    }
    if ((bVar1 != 0) ||
       (iVar3 = *(int *)(param_1 + 0x54) + -0x800, *(int *)(param_1 + 0x54) = iVar3,
       *(int *)(iVar4 + 0x54) + 0x1000 <= iVar3)) goto LAB_080cd95e;
    sub_08002B10(0x1b6);
    *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + 0x1000;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080cd95e:
  sub_0801CFF0(param_1);
  if (*(ushort *)(iVar4 + 0x52) == 0) {
    iVar4 = *(int *)(iVar4 + 0x58);
    iVar3 = *(int *)(param_1 + 0x68);
  }
  else {
    iVar3 = (int)(*(int *)(param_1 + 0x68) * (uint)*(ushort *)(iVar4 + 0x52)) >> 8;
    iVar4 = *(int *)(iVar4 + 0x58);
  }
  *(int *)(param_1 + 0x58) = iVar4 + iVar3;
  return in_lr;
}

