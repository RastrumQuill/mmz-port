// sub_0805F9A4 at 0x0805F9A4 (thumb)

undefined4 sub_0805F9A4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080608EC();
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xf) = 4;
  }
  return in_lr;
}

