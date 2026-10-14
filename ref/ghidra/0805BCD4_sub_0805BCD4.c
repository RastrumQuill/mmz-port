// sub_0805BCD4 at 0x0805BCD4 (thumb)

undefined4 sub_0805BCD4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0805B778();
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

