// sub_0807A6A8 at 0x0807A6A8 (thumb)

undefined4 sub_0807A6A8(int param_1)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08001D30(&DAT_08c450b8,(DAT_0202e1ec - 0x2b0) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c450c4,(DAT_0202dfec - 6) * 0x20 + 0x200);
    sub_08001D30(&DAT_08c45090,(DAT_0202e1e8 - 0x2a0) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c4509c,(DAT_0202dfe8 - 6) * 0x20 + 0x200);
    sub_08002B10(0x153);
    *(undefined *)(param_1 + 0xd8) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xd8) != '\0') {
    sub_08002B10(0x154);
    uVar1 = 8;
LAB_0807a8fa:
    *(undefined *)(param_1 + 0xd) = uVar1;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    sub_0801CF00(param_1,0xb102);
    sub_0801CFF0(param_1);
    *(undefined *)(param_1 + 0xd6) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 1:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
      local_28 = *(int *)(param_1 + 100) + 0x5000;
    }
    else {
      local_28 = *(int *)(param_1 + 100) + 0x1000;
    }
    iVar5 = *(int *)(param_1 + 0x68) + 0x2000;
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_28 = (uVar3 * 2 >> 0x11 & 0x3f) * 0x100 + local_28;
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    local_24 = iVar5;
    iVar4 = sub_08128A9C(uVar3 * 2 >> 0x11,0x60);
    local_24 = iVar4 * 0x100 + iVar5;
    if ((DAT_0202e918 & 8) == 0) {
      sub_080AE6CC(param_1,&local_28,0,0);
      sub_08002B10(0x19c);
    }
    sub_0801CF00(param_1,0xb103);
    sub_0801CFF0(param_1);
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    break;
  case 2:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xb100);
    sub_0801CFF0(param_1);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 3:
    if (3 < *(byte *)(param_1 + 0xd7)) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    if (*(byte *)(param_1 + 0x13) < 0x10) {
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd6) = 0;
    break;
  case 4:
    if (*(char *)(param_1 + 0xd7) != '\0') {
      return in_lr;
    }
    uVar1 = 3;
    goto LAB_0807a8fa;
  default:
    goto switchD_0807a7a0_caseD_5;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_0807a7a0_caseD_5:
  return in_lr;
}

