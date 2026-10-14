// sub_08033BA4 at 0x08033BA4 (thumb)

undefined4 sub_08033BA4(int param_1,char param_2,undefined param_3)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  *(char *)(param_1 + 0xd8) = param_2;
  if (param_2 == '\0') {
    *(undefined2 *)(param_1 + 0x21c) = 1;
    *(undefined2 *)(param_1 + 0x21e) = 0x200;
    *(undefined2 *)(param_1 + 0x220) = 2;
    uVar1 = 0x100;
  }
  else {
    if (param_2 != '\x01') goto LAB_08033c06;
    *(undefined2 *)(param_1 + 0x21c) = 1;
    *(undefined2 *)(param_1 + 0x21e) = 0x100;
    *(undefined2 *)(param_1 + 0x220) = 2;
    uVar1 = 0x200;
  }
  *(undefined2 *)(param_1 + 0x222) = uVar1;
LAB_08033c06:
  *(undefined *)(param_1 + 0xd9) = param_3;
  return in_lr;
}

