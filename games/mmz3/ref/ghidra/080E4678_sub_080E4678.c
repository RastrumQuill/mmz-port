// sub_080E4678 at 0x080E4678 (thumb)

undefined4 sub_080E4678(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xf) = 0x40;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if ((*(int *)(param_1 + 0x5c) < 0x91) ||
     (cVar1 = *(char *)(param_1 + 0xf) + -1, *(char *)(param_1 + 0xf) = cVar1, cVar1 == -1)) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

