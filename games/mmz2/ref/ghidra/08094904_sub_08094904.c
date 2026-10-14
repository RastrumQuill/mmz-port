// sub_08094904 at 0x08094904 (thumb)

undefined4 sub_08094904(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08094350();
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

