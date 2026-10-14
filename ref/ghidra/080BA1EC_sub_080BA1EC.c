// sub_080BA1EC at 0x080BA1EC (thumb)

undefined4 sub_080BA1EC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080C3C38(*(undefined4 *)(param_1 + 0x20));
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080BA210(param_1);
  }
  return in_lr;
}

