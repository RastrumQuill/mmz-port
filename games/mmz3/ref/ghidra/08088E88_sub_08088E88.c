// sub_08088E88 at 0x08088E88 (thumb)

undefined4 sub_08088E88(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080887C0();
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x20001) == 0x20001) {
    *(undefined *)(param_1 + 0xd) = 0xc;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

