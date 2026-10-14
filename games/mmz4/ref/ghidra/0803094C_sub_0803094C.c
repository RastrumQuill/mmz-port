// sub_0803094C at 0x0803094C (thumb)

undefined4 sub_0803094C(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  bVar1 = true;
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x301) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      uVar2 = sub_0802B7C0(param_1);
      sub_0801CF00(param_1,uVar2);
    }
    else {
      bVar1 = false;
    }
  }
  if (bVar1) {
    pcVar5 = (char *)(param_1 + 0xe9);
    if (*pcVar5 == '\0') {
      if (*(short *)(param_1 + 0xa4) < 3) {
        *pcVar5 = '\x01';
        uVar2 = sub_0802B7C0(param_1);
        sub_0801CF00(param_1,uVar2);
      }
    }
    else if (7 < *(short *)(param_1 + 0xa4)) {
      *pcVar5 = '\0';
      uVar2 = sub_0802B7C0(param_1);
      sub_0801CF00(param_1,uVar2);
    }
  }
  uVar3 = *(byte *)(param_1 + 0x142) & 0x20;
  if ((*(byte *)(param_1 + 0x142) & 0x20) != 0) {
    iVar4 = *(int *)(param_1 + 0x5c);
    if (iVar4 < 1) {
      if (-1 < iVar4) {
        return in_lr;
      }
      *(int *)(param_1 + 0x5c) = iVar4 + 0x19;
      if (iVar4 + 0x19 < 1) {
        return in_lr;
      }
    }
    else {
      *(int *)(param_1 + 0x5c) = iVar4 + -0x19;
      if (-1 < iVar4 + -0x19) {
        return in_lr;
      }
    }
    uVar3 = 0;
  }
  *(uint *)(param_1 + 0x5c) = uVar3;
  return in_lr;
}

