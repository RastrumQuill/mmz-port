// sub_0801C92C at 0x0801C92C (thumb)

void sub_0801C92C(int param_1,char param_2)

{
  undefined2 uVar1;
  
  if (param_2 == '\x01') {
    *(undefined *)(param_1 + 0xf) = 2;
    uVar1 = 0xffff;
  }
  else {
    uVar1 = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  *(undefined2 *)(param_1 + 10) = uVar1;
  return;
}

