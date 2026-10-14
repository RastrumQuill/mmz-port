// sub_08014F9C at 0x08014F9C (thumb)

undefined4 sub_08014F9C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x18) != '\0') {
    sub_08004A40(uVar1);
    sub_08004AA4(uVar1);
  }
  return in_lr;
}

