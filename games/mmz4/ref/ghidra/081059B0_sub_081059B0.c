// sub_081059B0 at 0x081059B0 (thumb)

undefined4 sub_081059B0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    uVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_1 + 0x54) = DAT_0202ea30 + -0xac00;
    DAT_0202e3c4 = 0x3b1;
    DAT_0202ddc4 = 1;
    sub_0801CF00(param_1,0xc202);
    *(undefined *)(param_1 + 0x25) = 0x10;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_0801CFF0(param_1);
    iVar3 = *(int *)(param_1 + 0x54) + 0x140;
    *(int *)(param_1 + 0x54) = iVar3;
    if (iVar3 <= *(int *)(param_1 + 100) + -0x4000) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc20e);
    break;
  case 2:
    sub_0801CFF0(param_1);
    iVar3 = *(int *)(param_1 + 0x54) + 0xc0;
    *(int *)(param_1 + 0x54) = iVar3;
    if (iVar3 <= *(int *)(param_1 + 100) + -0x1800) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc201);
    *(undefined *)(param_1 + 0x12) = 6;
    break;
  case 3:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc217);
    *(undefined *)(param_1 + 0x12) = 0x7e;
    break;
  case 4:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc218);
    break;
  case 5:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc206);
    break;
  case 6:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc219);
    break;
  case 7:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 6;
    break;
  case 8:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc201);
    break;
  case 9:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc200);
    *(undefined *)(param_1 + 0x12) = 6;
    break;
  case 10:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc206);
    break;
  case 0xb:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc219);
    break;
  case 0xc:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 6;
    sub_0801CF00(param_1,0xc200);
    break;
  case 0xd:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc20e);
    *(undefined *)(param_1 + 0x12) = 2;
    break;
  case 0xe:
    sub_0801CFF0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0xe0;
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc202);
    break;
  case 0xf:
    sub_0801CFF0(param_1);
    iVar3 = *(int *)(param_1 + 0x54) + 0x180;
    *(int *)(param_1 + 0x54) = iVar3;
    if (iVar3 < DAT_0202ea30 + 0x97ff) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  default:
    goto switchD_081059c4_caseD_10;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_081059c4_caseD_10:
  return in_lr;
}

