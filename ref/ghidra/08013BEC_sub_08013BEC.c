// sub_08013BEC at 0x08013BEC (thumb)

undefined4 sub_08013BEC(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x18) != '\0') {
    sub_08003370(uVar1);
    sub_0800338C(uVar1);
  }
  return in_lr;
}

