// sub_080345E4 at 0x080345E4 (thumb)

undefined4 sub_080345E4(int param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  sub_0803A3BC(param_1,0x1f01);
  sub_0803A3FC(param_1,0x1f01);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x100) = 0;
    uVar1 = sub_0802B7C0(param_1);
    sub_0801CF00(param_1,uVar1);
  }
  return in_lr;
}

