// sub_080818E4 at 0x080818E4 (thumb)

undefined4 sub_080818E4(int param_1)

{
  undefined4 in_lr;
  undefined4 local_1c [4];
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_1c[0] = 0x1701;
    local_1c[1] = 0x1701;
    local_1c[2] = 0x1703;
    local_1c[3] = 0x1703;
    sub_0801CF00(param_1,*(undefined2 *)(local_1c + *(byte *)(param_1 + 0xb4)));
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
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

