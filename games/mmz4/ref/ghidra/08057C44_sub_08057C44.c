// sub_08057C44 at 0x08057C44 (thumb)

undefined4 sub_08057C44(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08001D30(&DAT_08c4449c,(DAT_0202e0b6 - 0x300) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c444a8,(DAT_0202deb6 - 5) * 0x20 + 0x200);
    sub_08090894(param_1);
    sub_0801CF00(param_1,0xa013);
    *(undefined *)(param_1 + 0x12) = 0x50;
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
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) &&
     (*(char *)(param_1 + 0x73) == '\x04')) {
    *(undefined *)(param_1 + 0xe) = 4;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

