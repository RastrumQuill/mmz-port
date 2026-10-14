// sub_0805FAA4 at 0x0805FAA4 (thumb)

undefined4 sub_0805FAA4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_0806082C(param_1,*(undefined4 *)(param_1 + 0x5c));
  cVar1 = sub_080608EC(param_1);
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xf) = 3;
  }
  return in_lr;
}

