// sub_0806BEA0 at 0x0806BEA0 (thumb)

undefined4 sub_0806BEA0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaa0e);
    sub_08005784(param_1 + 0x74,&DAT_08858c70);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xd0)) {
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (iVar2 < *(int *)(param_1 + 0xd0)) goto LAB_0806beee;
  }
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xb8);
LAB_0806beee:
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    uVar3 = 0xaa01;
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') {
      if (*(char *)(param_1 + 0x71) < '\x02') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0x10;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    uVar3 = 0xaa0f;
  }
  sub_0801CF00(param_1,uVar3);
  sub_0801CFF0(param_1);
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

