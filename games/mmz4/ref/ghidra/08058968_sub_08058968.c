// sub_08058968 at 0x08058968 (thumb)

undefined4 sub_08058968(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0xa017);
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
    *(undefined *)(param_1 + 0xe) = 4;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

