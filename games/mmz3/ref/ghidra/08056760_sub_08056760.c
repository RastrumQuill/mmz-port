// sub_08056760 at 0x08056760 (thumb)

undefined4 sub_08056760(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  undefined auStack_c [4];
  
  sub_080FE598(auStack_c,&DAT_080feb8c,4);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb316);
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(char *)(param_1 + 0xc6) == '\0') {
      uVar1 = auStack_c[*(byte *)(param_1 + 0xc5)];
    }
    else {
      uVar1 = 4;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x18;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

