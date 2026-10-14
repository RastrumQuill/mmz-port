// sub_080413E0 at 0x080413E0 (thumb)

undefined4 sub_080413E0(int param_1)

{
  undefined4 in_lr;
  undefined auStack_c [4];
  
  sub_080C8D70(auStack_c,&DAT_080c9298,4);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x15);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x10;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x17;
    *(undefined *)(param_1 + 0xe) = 1;
    if (*(char *)(param_1 + 0xca) == '\0') {
      *(undefined *)(param_1 + 0x13) = auStack_c[*(byte *)(param_1 + 0xc9)];
    }
    else {
      *(undefined *)(param_1 + 0x13) = 1;
    }
  }
  return in_lr;
}

