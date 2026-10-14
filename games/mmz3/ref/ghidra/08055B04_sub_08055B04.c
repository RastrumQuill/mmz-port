// sub_08055B04 at 0x08055B04 (thumb)

undefined4 sub_08055B04(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_080177F4();
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xf);
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

