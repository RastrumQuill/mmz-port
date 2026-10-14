// sub_080C8E80 at 0x080C8E80 (thumb)

undefined4 sub_080C8E80(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080C8E4C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (cVar1 == '\0') {
    sub_080032EC(0x2a);
  }
  else {
    sub_080032EC(0x31);
  }
  return in_lr;
}

