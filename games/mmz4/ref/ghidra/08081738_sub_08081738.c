// sub_08081738 at 0x08081738 (thumb)

undefined4 sub_08081738(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined4 local_1c [4];
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_1c[0] = 0x1704;
    local_1c[1] = 0x1704;
    local_1c[2] = 0x1706;
    local_1c[3] = 0x1706;
    sub_0801CF00(param_1,*(undefined2 *)(local_1c + *(byte *)(param_1 + 0xb4)));
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885afb0);
  }
  else {
    sub_08005784(param_1 + 0x74,
                 *(undefined4 *)
                  (*(char *)(param_1 + 0x71) * 4 +
                  *(int *)(&DAT_0885b1e0 +
                          (uint)*(byte *)(param_1 + 0xb5) * 4 +
                          (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) -
                          0x1700) * 8)));
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

