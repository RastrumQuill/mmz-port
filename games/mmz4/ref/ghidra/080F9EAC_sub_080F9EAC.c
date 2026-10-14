// sub_080F9EAC at 0x080F9EAC (thumb)

undefined4 sub_080F9EAC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x8c00);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xbe) != '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

