// sub_0806C16C at 0x0806C16C (thumb)

undefined4 sub_0806C16C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaa09);
    sub_08002B10(199);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar1 = 0xfffffb00;
    }
    else {
      uVar1 = 0x500;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\x01' < *(char *)(param_1 + 0x71)) {
      sub_08005784(param_1 + 0x74,&DAT_08858cd0);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(param_1 + 200) + 0x1800;
      if (iVar2 <= iVar3) {
        return in_lr;
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0xcc) + -0x1800;
      if (iVar3 <= iVar2) {
        return in_lr;
      }
    }
    *(int *)(param_1 + 0x54) = iVar2;
    *(undefined *)(param_1 + 0xf) = 2;
  }
  else {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x55f6) {
      sub_0801CF00(param_1);
      sub_0801CFF0(param_1);
      sub_08005784(param_1 + 0x74,&DAT_08858c70);
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 0x15;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

