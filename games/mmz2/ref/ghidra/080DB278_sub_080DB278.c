// sub_080DB278 at 0x080DB278 (thumb)

undefined4 sub_080DB278(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080E93CC(*(undefined4 *)(param_1 + 0x28));
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080DB29C(param_1);
  }
  return in_lr;
}

