// sub_0801C90C at 0x0801C90C (thumb)

void sub_0801C90C(int param_1,char param_2)

{
  undefined2 uVar1;
  
  if (param_2 == '\x01') {
    *(undefined *)(param_1 + 0xe) = 4;
    uVar1 = 0xffff;
  }
  else {
    uVar1 = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(undefined2 *)(param_1 + 8) = uVar1;
  return;
}

