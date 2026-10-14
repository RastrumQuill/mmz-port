// sub_080C0728 at 0x080C0728 (thumb)

undefined4 sub_080C0728(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  byte abStack_18 [4];
  undefined4 local_14 [2];
  
  local_14[0] = 0x3b03;
  local_14[1] = 0x3b04;
  sub_08128B5C(abStack_18,&DAT_081299fc,2);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08861bd0 + (uint)abStack_18[bVar1] * 0x18);
    sub_0801CF00(param_1,*(undefined2 *)(local_14 + bVar1));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

