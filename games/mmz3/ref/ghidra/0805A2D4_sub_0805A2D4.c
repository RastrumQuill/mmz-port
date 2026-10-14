// sub_0805A2D4 at 0x0805A2D4 (thumb)

undefined4 sub_0805A2D4(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb404);
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0xe) = 1;
    *(undefined2 *)(*(int *)(param_1 + 0x2c) + 0xbc) = 0x6404;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_0800471C(0x91);
    sub_0801ACF8(4,param_1 + 0x54);
  }
  sub_080177F4(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 7) == 0) {
    sub_080C13B8(param_1 + 0x54,0,1,0x118,(uint)*(byte *)(param_1 + 0x12) * -4 + -0x40);
    sub_080C13B8(param_1 + 0x54,0,1,0xfffffee8,(uint)*(byte *)(param_1 + 0x12) * -4 + -0x40);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

