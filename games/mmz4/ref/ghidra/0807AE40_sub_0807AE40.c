// sub_0807AE40 at 0x0807AE40 (thumb)

undefined4 sub_0807AE40(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08001D30(&DAT_08c450b8,(DAT_0202e1ec - 0x2b0) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c450c4,(DAT_0202dfec - 6) * 0x20 + 0x200);
    sub_08001D30(&DAT_08c45090,(DAT_0202e1e8 - 0x2a0) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c4509c,(DAT_0202dfe8 - 6) * 0x20 + 0x200);
    sub_08001D30(&DAT_08c450b8,(DAT_0202e1ec - 0x2b0) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c450c4,(DAT_0202dfec - 6) * 0x20 + 0x200);
    sub_08002B10(0x1a8);
    sub_0801CF00(param_1,0xb102);
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffc0;
    *(undefined *)(param_1 + 0x12) = 99;
    *(undefined *)(param_1 + 0xda) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0xd5);
  if ((cVar1 == '\x01') || (cVar1 == -0x7f)) {
    *(char *)(param_1 + 0xd5) = '\0';
  }
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    if (*(byte *)(param_1 + 0x12) < 0x24) {
      *(undefined *)(param_1 + 0xd6) = 1;
    }
    else {
      if (((DAT_0202e918 & 8) == 0) &&
         (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0x54) + -0x2000)) {
        *(int *)(DAT_0202dbf0 + 0x1bc) = *(int *)(DAT_0202dbf0 + 0x1bc) + 0x100;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
        if ((*(byte *)(param_1 + 0x12) >> 2 & 1) == 0) {
          uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
          DAT_0202dc38 = uVar2 & 0x7fffffff;
          cVar1 = sub_08128A9C(uVar2 * 2 >> 0x11,0x30);
          cVar1 = -cVar1;
        }
        else {
          uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
          DAT_0202dc38 = uVar2 & 0x7fffffff;
          cVar1 = sub_08128A9C(uVar2 * 2 >> 0x11,0x30);
        }
        sub_080E3D14(param_1,1,cVar1 + -0x80);
      }
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    sub_08002B10(0x155);
    *(undefined *)(param_1 + 0xda) = 1;
    sub_080CD2EC(param_1,0,1);
    sub_080CD2EC(param_1,1,1);
    sub_080CD2EC(param_1,2,1);
    sub_080CD2EC(param_1,3,1);
    sub_080CD2EC(param_1,4,1);
    sub_080CD2EC(param_1,5,1);
    sub_080CD2EC(param_1,6,1);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    break;
  case 1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0xb8) + 0x1a00 < *(int *)(param_1 + 0x58)) {
      *(undefined *)(param_1 + 0xda) = 0;
    }
    iVar3 = *(int *)(param_1 + 0x58) + 0x100;
    *(int *)(param_1 + 0x58) = iVar3;
    if (iVar3 <= *(int *)(param_1 + 0xb8) + 0x3800) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xb103);
    sub_0801CFF0(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + 0x3800;
    break;
  case 3:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xb102);
    sub_0801CFF0(param_1);
    sub_08002B10(0x1a8);
    *(undefined *)(param_1 + 0x12) = 99;
    break;
  case 4:
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
          uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
          DAT_0202dc38 = uVar2 & 0x7fffffff;
          cVar1 = sub_08128A9C(uVar2 * 2 >> 0x11,0x30);
          cVar1 = -cVar1;
        }
        else {
          uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
          DAT_0202dc38 = uVar2 & 0x7fffffff;
          cVar1 = sub_08128A9C(uVar2 * 2 >> 0x11,0x30);
        }
        sub_080E3D14(param_1,1,cVar1 + -0x80);
      }
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    sub_08002B10(0x155);
    *(undefined *)(param_1 + 0xda) = 1;
    sub_080CD2EC(param_1,0,1);
    sub_080CD2EC(param_1,1,1);
    sub_080CD2EC(param_1,2,1);
    sub_080CD2EC(param_1,3,1);
    sub_080CD2EC(param_1,4,1);
    sub_080CD2EC(param_1,5,1);
    sub_080CD2EC(param_1,6,1);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0x40;
    break;
  case 6:
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    if (*(int *)(param_1 + 0xb4) < iVar3) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4);
    }
    iVar3 = *(int *)(param_1 + 0x58) + -0x100;
    *(int *)(param_1 + 0x58) = iVar3;
    if (*(int *)(param_1 + 0xb8) <= iVar3) {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    sub_0801CF00(param_1,0xb103);
    sub_0801CFF0(param_1);
    *(undefined *)(param_1 + 0xda) = 0;
    break;
  case 7:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xb101);
    sub_0801CFF0(param_1);
    break;
  case 8:
    if (*(char *)(param_1 + 0xd7) == '\0') {
      *(undefined *)(param_1 + 0xd6) = 0;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_0807af5c_caseD_9;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_0807af5c_caseD_9:
  return in_lr;
}

