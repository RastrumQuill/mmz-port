// sub_0801C84C at 0x0801C84C (thumb)

undefined4 sub_0801C84C(int param_1,char param_2)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if (param_2 == '\x01') {
    *(undefined *)(param_1 + 2) = 0xff;
    *(undefined *)(param_1 + 3) = 4;
    uVar1 = 0x20;
  }
  else {
    *(undefined *)(param_1 + 2) = 0;
    *(undefined *)(param_1 + 3) = 0;
    uVar1 = 0x10;
  }
  *(undefined *)(param_1 + 0xb) = uVar1;
  sub_0801CF08(param_1);
  return in_lr;
}

