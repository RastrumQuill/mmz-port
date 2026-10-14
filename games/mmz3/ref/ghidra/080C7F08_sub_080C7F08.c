// sub_080C7F08 at 0x080C7F08 (thumb)

undefined4 sub_080C7F08(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801749C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(undefined4 *)(param_1 + 0x54) = 0xf000;
    *(undefined4 *)(param_1 + 0x58) = 0xa000;
    sub_08017700(param_1,0xf400);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  return in_lr;
}

