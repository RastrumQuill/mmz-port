// sub_080AF074 at 0x080AF074 (thumb)

undefined4 sub_080AF074(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080AF8B8(*(undefined4 *)(param_1 + 0x28),param_1 + 0x54,param_1 + 0x5c,param_1 + 100);
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

