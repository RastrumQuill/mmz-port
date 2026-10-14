// sub_080DB140 at 0x080DB140 (thumb)

undefined4 sub_080DB140(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080E9380(*(undefined4 *)(param_1 + 0x28));
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080DB164(param_1);
  }
  return in_lr;
}

