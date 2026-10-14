// sub_0806DDC8 at 0x0806DDC8 (thumb)

undefined4 sub_0806DDC8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_088590b8);
    sub_0801CF00(param_1,0xad00);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_0806F068(param_1);
  return in_lr;
}

