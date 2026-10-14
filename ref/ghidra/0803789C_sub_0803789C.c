// sub_0803789C at 0x0803789C (thumb)

undefined4 sub_0803789C(int param_1)

{
  undefined4 in_lr;
  
  sub_0800561C(param_1 + 0x74,&DAT_082ad850);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xf) = 5;
    sub_08038A5C(param_1,0xf);
    *(undefined *)(param_1 + 0x12) = 4;
  }
  else if ((*(char *)(param_1 + 0x71) == '\0') && (*(char *)(param_1 + 0x72) < '\x02')) {
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  }
  return in_lr;
}

