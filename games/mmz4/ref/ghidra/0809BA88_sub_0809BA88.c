// sub_0809BA88 at 0x0809BA88 (thumb)

undefined4 sub_0809BA88(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  undefined4 local_28 [4];
  byte abStack_18 [4];
  
  local_28[0] = 0xa70a;
  local_28[1] = 0xa70a;
  local_28[2] = 0xa70f;
  local_28[3] = 0xa70f;
  sub_08128B5C(abStack_18,&DAT_08129588,4);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08066468(param_1 + 0x54,0,0);
    sub_0801CF00(param_1,*(undefined2 *)(local_28 + bVar1));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)(*(char *)(param_1 + 0x71) * 4 + (&DAT_0885de08)[abStack_18[bVar1]]));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

