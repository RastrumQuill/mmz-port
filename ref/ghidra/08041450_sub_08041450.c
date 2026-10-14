// sub_08041450 at 0x08041450 (thumb)

undefined4 sub_08041450(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  undefined auStack_c [4];
  
  sub_080C8D70(auStack_c,&DAT_080c929c,4);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x16);
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(char *)(param_1 + 0xca) == '\0') {
      uVar1 = auStack_c[*(byte *)(param_1 + 0xc9)];
    }
    else {
      uVar1 = 4;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x18;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

