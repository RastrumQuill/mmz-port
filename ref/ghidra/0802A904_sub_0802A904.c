// sub_0802A904 at 0x0802A904 (thumb)

undefined4 sub_0802A904(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0x1e;
  }
  sub_080297C0(param_1);
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    uVar3 = sub_08001EAC(0x90);
    *(undefined2 *)(param_1 + 0xc6) = uVar3;
    break;
  case 1:
    iVar5 = *(int *)(param_1 + 0x4c) + 0x80;
    *(int *)(param_1 + 0x4c) = iVar5;
    if (iVar5 < *(int *)(param_1 + 0xb8) + 0x1000) {
      return in_lr;
    }
    sub_08001EE8((int)*(short *)(param_1 + 0xc6));
    sub_08001EAC(0x14);
    *(undefined *)(param_1 + 0x12) = 0x2d;
    break;
  case 2:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    uVar3 = sub_08001EAC(0x90);
    *(undefined2 *)(param_1 + 0xc6) = uVar3;
    break;
  case 3:
    iVar5 = *(int *)(param_1 + 0x4c) + 0x80;
    *(int *)(param_1 + 0x4c) = iVar5;
    if (iVar5 < *(int *)(param_1 + 0xb8) + 0x5400) {
      return in_lr;
    }
    sub_08001EE8((int)*(short *)(param_1 + 0xc6));
    sub_08001EAC(0x14);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    break;
  case 4:
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0xb8) + (0x54 - (uVar4 * 2 >> 0x11 & 1)) * 0x100;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0xb8) + 0x5400;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    uVar2 = 0x1e;
    goto LAB_0802ab04;
  case 5:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    uVar3 = sub_08001EAC(0x90);
    *(undefined2 *)(param_1 + 0xc6) = uVar3;
    break;
  case 6:
    iVar5 = *(int *)(param_1 + 0x4c) + 0x80;
    *(int *)(param_1 + 0x4c) = iVar5;
    if (iVar5 < *(int *)(param_1 + 0xb8) + 0x8800) {
      return in_lr;
    }
    sub_08001EE8((int)*(short *)(param_1 + 0xc6));
    sub_08001EAC(0x14);
    *(short *)(param_1 + 0xc6) = -1;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    break;
  case 7:
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0xb8) + (0x88 - (uVar4 * 2 >> 0x11 & 1)) * 0x100;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0xb8) + 0x8800;
    break;
  case 8:
    if ((DAT_02022b6e & 1) != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
    uVar2 = 5;
LAB_0802ab04:
    *(undefined *)(param_1 + 0x12) = uVar2;
  default:
    goto switchD_0802a92e_caseD_9;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_0802a92e_caseD_9:
  return in_lr;
}

