// sub_0801F8E8 at 0x0801F8E8 (thumb)

undefined4 sub_0801F8E8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x18) != '\0') {
    sub_080033BC(uVar1);
    sub_08003420(uVar1);
  }
  return in_lr;
}

