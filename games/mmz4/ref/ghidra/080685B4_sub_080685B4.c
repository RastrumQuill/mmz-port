// sub_080685B4 at 0x080685B4 (thumb)

undefined4 sub_080685B4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa90d);
    sub_08005784(param_1 + 0x74,&DAT_08857cc0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x25;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

