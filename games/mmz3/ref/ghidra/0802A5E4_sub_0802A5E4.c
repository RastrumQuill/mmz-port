// sub_0802A5E4 at 0x0802A5E4 (thumb)

undefined4 sub_0802A5E4(int param_1)

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
      uVar2 = sub_08025BEC(param_1);
      sub_08017700(param_1,uVar2);
    }
    else {
      bVar1 = false;
    }
  }
  if (bVar1) {
    pcVar5 = (char *)(param_1 + 0xe1);
    if (*pcVar5 == '\0') {
      if (*(short *)(param_1 + 0xa4) < 3) {
        *pcVar5 = '\x01';
        uVar2 = sub_08025BEC(param_1);
        sub_08017700(param_1,uVar2);
      }
    }
    else if (7 < *(short *)(param_1 + 0xa4)) {
      *pcVar5 = '\0';
      uVar2 = sub_08025BEC(param_1);
      sub_08017700(param_1,uVar2);
    }
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x11f);
  if (uVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x5c);
    if (iVar4 < 1) {
      if (-1 < iVar4) {
        return in_lr;
      }
      *(int *)(param_1 + 0x5c) = iVar4 + 0x10;
      if (iVar4 + 0x10 < 1) {
        return in_lr;
      }
    }
    else {
      *(int *)(param_1 + 0x5c) = iVar4 + -0x10;
      if (-1 < iVar4 + -0x10) {
        return in_lr;
      }
    }
    uVar3 = 0;
  }
  *(uint *)(param_1 + 0x5c) = uVar3;
  return in_lr;
}

