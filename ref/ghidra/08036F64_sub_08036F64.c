// sub_08036F64 at 0x08036F64 (thumb)

undefined4 sub_08036F64(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x71) == '\x02') {
    sub_0800561C(param_1 + 0x74,&DAT_082ad834);
  }
  if (*(char *)(param_1 + 0x71) == '\x03') {
    sub_0800561C(param_1 + 0x74,&DAT_082ad7fc);
  }
  sub_08038B00(param_1,*(undefined4 *)(param_1 + 0x54));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined2 *)(param_1 + 0xe) = 2;
    sub_08038A5C(param_1,1);
  }
  return in_lr;
}

