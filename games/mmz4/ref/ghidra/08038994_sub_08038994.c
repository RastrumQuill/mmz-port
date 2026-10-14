// sub_08038994 at 0x08038994 (thumb)

undefined4 sub_08038994(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) &&
     ((*(char *)(param_1 + 0x94) == '\0' || (*(char *)(param_1 + 0x176) != '\0')))) {
    if (*(char *)(param_1 + 199) == '\x03') {
      sub_0801EBD0(4);
      sub_080061EC(param_1 + 0x74,4);
    }
    else {
      cVar1 = *(char *)(param_1 + 0xc5);
      if (cVar1 == '\r') {
        sub_0801EBD0(10);
        sub_080061EC(param_1 + 0x74,10);
      }
      else if (cVar1 == '\x0e') {
        sub_0801EBD0(8);
        sub_080061EC(param_1 + 0x74,8);
      }
      else if (cVar1 == '\x0f') {
        sub_0801EBD0(6);
        sub_080061EC(param_1 + 0x74,6);
      }
      else {
        *(short *)(param_1 + 0xa4) = 0;
      }
    }
    *(byte *)(param_1 + 0x142) =
         *(byte *)(param_1 + 0x142) & 0xfe | *(byte *)(param_1 + 10) >> 4 & 1;
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

