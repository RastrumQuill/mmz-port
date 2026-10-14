// sub_08055654 at 0x08055654 (thumb)

undefined4 sub_08055654(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0xf5;
  local_c = 0xf6;
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar1 = 0;
    if (DAT_0202e910 == 0x10) {
      iVar1 = 4;
    }
    sub_08002B10(*(undefined2 *)((int)&local_10 + iVar1));
    sub_08002B10(0xf8);
    sub_0801CF00(param_1,0xa002);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               &DAT_08854f90 +
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(&DAT_088551e0 +
                                        (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                  *(undefined *)(param_1 + 0x70)) - 0xa000) * 4)) *
               0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

