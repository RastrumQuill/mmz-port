// sub_080DAEC8 at 0x080DAEC8 (thumb)

undefined4 sub_080DAEC8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080E9334(*(undefined4 *)(param_1 + 0x28));
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080DAEEC(param_1);
  }
  return in_lr;
}

