// sub_080BA0F0 at 0x080BA0F0 (thumb)

undefined4 sub_080BA0F0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080C3C24(*(undefined4 *)(param_1 + 0x20));
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080BA114(param_1);
  }
  return in_lr;
}

