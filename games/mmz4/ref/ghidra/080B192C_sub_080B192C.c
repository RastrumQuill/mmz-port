// sub_080B192C at 0x080B192C (thumb)

undefined4 sub_080B192C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xc201);
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined *)(param_1 + 0x12) = 0x80;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = sub_080B1DB4(param_1);
  if (cVar1 == '\x01') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080B1A7C(param_1);
  }
  cVar1 = sub_080B1D9C(param_1);
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

