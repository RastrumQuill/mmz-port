// sub_080674E0 at 0x080674E0 (thumb)

undefined4 sub_080674E0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa907);
    sub_08005784(param_1 + 0x74,&DAT_08857e70);
    sub_08002B10(99);
    sub_0801FE64(0x10,param_1 + 0x54);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0xb;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

