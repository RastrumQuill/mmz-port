// sub_080935C8 at 0x080935C8 (thumb)

undefined4 sub_080935C8(int param_1)

{
  undefined4 *extraout_r1;
  undefined4 in_lr;
  undefined4 *puVar1;
  undefined4 local_18 [3];
  
  puVar1 = &DAT_081294b4;
  local_18[0] = 0x4004;
  local_18[1] = 0x4005;
  local_18[2] = 0x4006;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885d058);
    sub_0801CF00(param_1,*(undefined2 *)(local_18 + *(byte *)(param_1 + 0xb8)));
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    puVar1 = extraout_r1;
  }
  sub_0801CFF0(param_1,puVar1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  sub_080947EC(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(byte *)(param_1 + 0x12) < 0x20)) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

