// sub_08030C7C at 0x08030C7C (thumb)

undefined4 sub_08030C7C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 600) & 4) != 0) {
    *(undefined *)(param_1 + 0x13a) = 0x1c;
    *(undefined *)(param_1 + 0x13d) = 0;
    sub_0801CF00(param_1,0x300);
    sub_080D17D8(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
    if (*(int *)(param_1 + 0x108) == 0) {
      uVar1 = sub_080D229C(param_1);
      *(undefined4 *)(param_1 + 0x108) = uVar1;
    }
    sub_08002B10(8);
  }
  *(undefined *)(param_1 + 0xf) = 1;
  sub_08030CEC(param_1);
  return in_lr;
}

