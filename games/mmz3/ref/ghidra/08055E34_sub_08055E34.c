// sub_08055E34 at 0x08055E34 (thumb)

undefined4 sub_08055E34(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb310);
    *(undefined *)(param_1 + 0xe) = 0;
    *(short *)(param_1 + 200) = (short)(*(int *)(param_1 + 0x5c) >> 3);
  }
  iVar1 = *(int *)(param_1 + 0x5c) + (int)*(short *)(param_1 + 200);
  *(int *)(param_1 + 0x5c) = iVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 2;
    sub_08017700(param_1,0xb300);
    *(undefined *)(param_1 + 0x12) = 8;
    sub_08007390(param_1 + 0x74,&DAT_083603e0);
  }
  sub_080177F4(param_1);
  return in_lr;
}

