// sub_0807A910 at 0x0807A910 (thumb)

undefined4 sub_0807A910(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xb102);
    sub_08001D30(&DAT_08c450b8,(DAT_0202e1ec - 0x2b0) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c450c4,(DAT_0202dfec - 6) * 0x20 + 0x200);
    sub_08002B10(0x1a8);
    *(undefined *)(param_1 + 0x12) = 0x7f;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x4efd) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xb101);
    sub_0801CFF0(param_1);
    *(undefined *)(param_1 + 0x12) = 0x3c;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(byte *)(param_1 + 0x12) < 0x24) {
      *(undefined *)(param_1 + 0xd6) = 1;
    }
    else {
      if (((DAT_0202e918 & 8) == 0) &&
         (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0x54) + -0x2000)) {
        *(int *)(DAT_0202dbf0 + 0x1bc) = *(int *)(DAT_0202dbf0 + 0x1bc) + 0x100;
      }
      if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
        if ((*(byte *)(param_1 + 0x12) >> 2 & 1) == 0) {
          uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
          DAT_0202dc38 = uVar3 & 0x7fffffff;
          cVar2 = sub_08128A9C(uVar3 * 2 >> 0x11,0x30);
          cVar2 = -cVar2;
        }
        else {
          uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
          DAT_0202dc38 = uVar3 & 0x7fffffff;
          cVar2 = sub_08128A9C(uVar3 * 2 >> 0x11,0x30);
        }
        sub_080E3D14(param_1,1,cVar2 + -0x80);
      }
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xb103);
    sub_0801CFF0(param_1);
    sub_08002B10(0x155);
    sub_080CD2EC(param_1,0,0);
    sub_080CD2EC(param_1,1,0);
    sub_080CD2EC(param_1,2,0);
    sub_080CD2EC(param_1,3,0);
    sub_080CD2EC(param_1,4,0);
    sub_080CD2EC(param_1,5,0);
    sub_080CD2EC(param_1,6,0);
    *(undefined *)(param_1 + 0x12) = 0x3c;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0xd7) != '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd6) = 0;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

