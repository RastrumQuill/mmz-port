// sub_080DB3B0 at 0x080DB3B0 (thumb)

undefined4 sub_080DB3B0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080E93F4(*(undefined4 *)(param_1 + 0x28));
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080DB3D4(param_1);
  }
  return in_lr;
}

