// sub_0805FA8C at 0x0805FA8C (thumb)

undefined4 sub_0805FA8C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080608A8();
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xf) = 2;
  }
  return in_lr;
}

