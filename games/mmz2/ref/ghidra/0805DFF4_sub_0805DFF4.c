// sub_0805DFF4 at 0x0805DFF4 (thumb)

undefined4 sub_0805DFF4(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xaa10);
    sub_08006E08(param_1 + 0x74,&DAT_0833cedc);
    sub_080032EC(0x7a);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x200;
      *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
      *(undefined4 *)(param_1 + 100) = 0x10;
    }
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    *(undefined *)(param_1 + 0x12) = 0x1c;
    sub_080AC8A4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),1);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    sub_080127E4(param_1,0xaa11);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      sub_080128D4(param_1);
      if (((*(byte *)(param_1 + 0x12) & 1) == 0) &&
         (uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar3 & 0x7fffffff,
         (uVar3 * 2 >> 0x11 & 1) != 0)) {
        uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
        uVar5 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar5 & 0x7fffffff;
        sub_080AC8A4(*(int *)(param_1 + 0x54) + (4 - (uVar3 * 2 >> 0x11 & 7)) * 0x100,
                     *(int *)(param_1 + 0x58) + (uVar5 * 2 >> 0x11 & 7) * -0x100,0);
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != -1) {
        return in_lr;
      }
      goto LAB_0805e136;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  sub_080128D4(param_1);
  if (*(int *)(param_1 + 0x5c) != 0) {
    return in_lr;
  }
LAB_0805e136:
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

