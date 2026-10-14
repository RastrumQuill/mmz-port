// sub_08091824 at 0x08091824 (thumb)

undefined4 sub_08091824(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_083660bc);
    sub_0801749C(param_1);
    iVar1 = (uint)*(byte *)(param_1 + 0x12) * 0x2000000;
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((int)&DAT_080fe64c + (iVar1 + 0x7e000000U >> 0x17)) << 2;
    *(int *)(param_1 + 0x60) =
         (int)*(short *)((int)&DAT_080fe64c + (iVar1 + 0x3e000000U >> 0x17)) << 2;
    sub_08017700(param_1,0x8800);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar1 = sub_08009B28();
  if (iVar1 < 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

