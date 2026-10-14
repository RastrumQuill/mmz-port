// sub_08040C50 at 0x08040C50 (thumb)

undefined4 sub_08040C50(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xf);
    *(undefined *)(param_1 + 0xe) = 0;
    *(short *)(param_1 + 0xcc) = (short)(*(int *)(param_1 + 0x54) >> 3);
  }
  iVar1 = *(int *)(param_1 + 0x54) + (int)*(short *)(param_1 + 0xcc);
  *(int *)(param_1 + 0x54) = iVar1;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar1;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 2;
    sub_08029778(param_1,0);
    *(undefined *)(param_1 + 0x12) = 8;
    sub_0800561C(param_1 + 0x74,&DAT_082ae4bc);
  }
  sub_080297C0(param_1);
  return in_lr;
}

