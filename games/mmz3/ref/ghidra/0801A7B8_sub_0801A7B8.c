// sub_0801A7B8 at 0x0801A7B8 (thumb)

undefined4 sub_0801A7B8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x18) != '\0') {
    sub_08004FC8(uVar1);
    sub_0800502C(uVar1);
  }
  return in_lr;
}

