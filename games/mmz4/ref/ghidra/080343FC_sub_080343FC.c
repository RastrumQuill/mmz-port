// sub_080343FC at 0x080343FC (thumb)

undefined4 sub_080343FC(int param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x167) == '\0') {
    *(undefined *)(param_1 + 0x100) = 0;
    uVar1 = sub_0802B7C0(param_1);
    sub_0801CF00(param_1,uVar1);
  }
  else {
    *(undefined *)(param_1 + 0x101) = 1;
    *(undefined *)(param_1 + 0x102) = 0;
    sub_0803444C(param_1);
  }
  return in_lr;
}

