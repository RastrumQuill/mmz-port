// sub_080DA73C at 0x080DA73C (thumb)

undefined4 sub_080DA73C(undefined4 param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_080DA78C(param_1,0);
  cVar1 = sub_080E9334(param_1);
  if (cVar1 != '\0') {
    sub_080DA7F4(param_1,0);
  }
  cVar1 = sub_080E9350(param_1);
  if (cVar1 != '\0') {
    sub_080DA860(param_1,0);
  }
  if ((DAT_0202ebb4 & 2) != 0) {
    sub_080DA8CC(param_1,0);
  }
  return in_lr;
}

