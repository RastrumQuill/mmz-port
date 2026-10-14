// sub_080566EC at 0x080566EC (thumb)

undefined4 sub_080566EC(int param_1)

{
  undefined4 in_lr;
  undefined auStack_c [4];
  
  sub_080FE598(auStack_c,&DAT_080feb88,4);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb315);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x10;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x17;
    *(undefined *)(param_1 + 0xe) = 1;
    if (*(char *)(param_1 + 0xc6) == '\0') {
      *(undefined *)(param_1 + 0x13) = auStack_c[*(byte *)(param_1 + 0xc5)];
    }
    else {
      *(undefined *)(param_1 + 0x13) = 1;
    }
  }
  return in_lr;
}

