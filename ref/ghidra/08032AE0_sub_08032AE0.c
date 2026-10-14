// sub_08032AE0 at 0x08032AE0 (thumb)

undefined4 sub_08032AE0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xe);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_080297C0(param_1);
  iVar2 = 0x100;
  if ((*(ushort *)(param_1 + 0x90) & 0x100) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    if (*(byte *)(param_1 + 0x12) < 4) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar2 = *(int *)(param_1 + 0x4c) + -0x1000;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x4c) + 0x1000;
      }
      *(int *)(iVar1 + 0x4c) = iVar2;
      iVar2 = *(int *)(param_1 + 0x50);
      iVar3 = -0x1400;
    }
    else if (*(byte *)(param_1 + 0x12) < 8) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar2 = *(int *)(param_1 + 0x4c) + -0x500;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x4c) + 0x500;
      }
      *(int *)(iVar1 + 0x4c) = iVar2;
      iVar2 = *(int *)(param_1 + 0x50);
      iVar3 = -0x1e00;
    }
    else {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar3 = *(int *)(param_1 + 0x4c);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x4c);
        iVar2 = -0x100;
      }
      *(int *)(iVar1 + 0x4c) = iVar3 + iVar2;
      iVar2 = *(int *)(param_1 + 0x50);
      iVar3 = -0x2000;
    }
    *(int *)(iVar1 + 0x50) = iVar2 + iVar3;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x17;
    *(undefined *)(param_1 + 0xe) = 1;
    if (*(short *)(param_1 + 0xcc) == 0) {
      sub_08064490(param_1,4);
    }
    else {
      sub_08064490(param_1,2);
    }
  }
  return in_lr;
}

