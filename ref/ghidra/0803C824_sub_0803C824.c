// sub_0803C824 at 0x0803C824 (thumb)

undefined4 sub_0803C824(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,4);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined *)(param_1 + 0x12) = 0x1e;
      uVar2 = 0x16;
    }
    else {
      *(undefined *)(param_1 + 0x12) = 0x38;
      uVar2 = 0x30;
    }
    *(undefined *)(param_1 + 0x13) = uVar2;
    *(undefined4 *)(param_1 + 0x58) = 0xffffff80;
  }
  sub_080297C0(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  if (*(byte *)(param_1 + 0x13) < bVar1) {
    *(byte *)(param_1 + 0x12) = bVar1 - 1;
  }
  else {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(byte *)(param_1 + 0x12) = bVar1 - 1;
    if (bVar1 == 0) {
      *(undefined *)(param_1 + 0xd) = 0x19;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}

