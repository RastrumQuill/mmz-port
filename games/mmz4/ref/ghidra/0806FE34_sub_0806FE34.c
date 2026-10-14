// sub_0806FE34 at 0x0806FE34 (thumb)

undefined4 sub_0806FE34(int param_1)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(char *)(*(int *)(param_1 + 0xbc) + 0xd) != '\0') ||
       (*(char *)(*(int *)(param_1 + 0xc0) + 0xd) != '\0')) {
      sub_0801CFF0(param_1);
      return in_lr;
    }
    sub_0801CF00(param_1,0x8d02);
    *(undefined *)(*(int *)(param_1 + 0xbc) + 0xc0) = 1;
    *(undefined *)(*(int *)(param_1 + 0xc0) + 0xc0) = 1;
    *(undefined4 *)(param_1 + 0x68) = 8;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08002B10(0x15f);
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    if ((*(char *)(param_1 + 0xe) != '\x01') || (*(char *)(param_1 + 0x73) != '\x03'))
    goto LAB_0806feac;
    sub_0801CF00(param_1,0x8d03);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0806feac:
  sub_0801CFF0(param_1);
  iVar4 = *(int *)(param_1 + 0x60);
  iVar5 = *(int *)(param_1 + 0x58) + iVar4;
  *(int *)(param_1 + 0x58) = iVar5;
  if (iVar4 < 0) {
    *(int *)(param_1 + 0x60) = iVar4 + *(int *)(param_1 + 0x68);
  }
  else {
    *(int *)(param_1 + 0x60) = iVar4 + *(int *)(param_1 + 0x68) * 2;
    if (*(int *)(param_1 + 0xb8) < iVar5) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    }
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0xbc) + 0xc0) != '\0') {
      return in_lr;
    }
    if (*(char *)(*(int *)(param_1 + 0xc0) + 0xc0) != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x20;
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    uVar1 = sub_08128A9C(uVar3 * 2 >> 0x11,0xe);
    *(undefined *)(param_1 + 0x13) = uVar1;
    local_18 = *(int *)(param_1 + 0x54) +
               *(int *)(&DAT_08859284 +
                       (uint)(byte)(&DAT_08859268)[(uint)*(byte *)(param_1 + 0x13) * 2] * 4);
    local_14 = *(int *)(param_1 + 0xc4) + -0xf000;
    sub_080FA344(&local_18,0,0);
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') {
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != -1) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    local_18 = *(int *)(param_1 + 0x54) +
               *(int *)(&DAT_08859284 +
                       (uint)(byte)(&DAT_08859269)[(uint)*(byte *)(param_1 + 0x13) * 2] * 4);
    local_14 = *(int *)(param_1 + 0xc4) + -0xf000;
    sub_080FA344(&local_18,0,0);
    *(undefined *)(param_1 + 0x12) = 0x40;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

