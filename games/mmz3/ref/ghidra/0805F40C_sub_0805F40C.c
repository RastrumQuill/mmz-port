// sub_0805F40C at 0x0805F40C (thumb)

undefined4 sub_0805F40C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080608A8();
  if (cVar1 != '\0') {
    *(undefined2 *)(param_1 + 0xe) = 2;
    sub_0805F42C(param_1);
  }
  return in_lr;
}

