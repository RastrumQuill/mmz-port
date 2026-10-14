// sub_08091940 at 0x08091940 (thumb)

undefined4 sub_08091940(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CC9C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_08005784(param_1 + 0x74,&DAT_0885ce00);
    if (*(char *)(param_1 + 0xbe) == '\x01') {
      sub_0801CF00(param_1,0x3c00);
    }
    else {
      sub_0801CF00(param_1,0x3c02);
    }
    if (*(char *)(*(int *)(param_1 + 0x28) + 0x11) == '\0') {
      uVar1 = 0xf0;
    }
    else {
      uVar1 = 0xa0;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0x12) == ' ') {
    if (*(char *)(param_1 + 0xbe) == '\x01') {
      sub_0801CF00(param_1,0x3c01);
    }
    else {
      sub_0801CF00(param_1,0x3c03);
    }
  }
  sub_0801CFF0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

