// sub_0805F4F4 at 0x0805F4F4 (thumb)

undefined4 sub_0805F4F4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080608EC();
  if (cVar1 != '\0') {
    *(undefined2 *)(param_1 + 0xe) = 3;
    sub_08060768(param_1,4);
  }
  return in_lr;
}

