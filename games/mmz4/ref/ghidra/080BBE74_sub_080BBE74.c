// sub_080BBE74 at 0x080BBE74 (thumb)

undefined4 sub_080BBE74(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  byte abStack_18 [4];
  undefined4 local_14 [2];
  
  local_14[0] = 0xbe02;
  local_14[1] = 0xbc05;
  sub_08128B5C(abStack_18,&DAT_08129988,2);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08861150 + (uint)abStack_18[bVar1] * 0x18);
    sub_0801CF00(param_1,*(undefined2 *)(local_14 + bVar1));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

