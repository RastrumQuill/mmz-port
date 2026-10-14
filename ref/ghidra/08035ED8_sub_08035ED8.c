// sub_08035ED8 at 0x08035ED8 (thumb)

undefined4 sub_08035ED8(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,4);
    *(undefined *)(*(int *)(param_1 + 0x24) + 0xe) = 1;
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x11) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08001EAC(0x48);
    sub_0801412C(4,param_1 + 0x4c);
  }
  sub_080297C0(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 7) == 0) {
    sub_080943B8(param_1 + 0x4c,1,200,(uint)*(byte *)(param_1 + 0x12) * -4 + -0x40);
    sub_080943B8(param_1 + 0x4c,1,0xffffff38,(uint)*(byte *)(param_1 + 0x12) * -4 + -0x40);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

