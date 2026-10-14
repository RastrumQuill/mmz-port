// sub_08060090 at 0x08060090 (thumb)

undefined4 sub_08060090(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080608EC();
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xf) = 5;
  }
  return in_lr;
}

