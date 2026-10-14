// sub_0803C930 at 0x0803C930 (thumb)

undefined4 sub_0803C930(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xf);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  sub_080297C0(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') && ((DAT_02022b6e & 1) == 0)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_0800561C(param_1 + 0x74,&DAT_082addcc);
    *(undefined4 *)(param_1 + 0xb0) = 0x803d7f1;
  }
  return in_lr;
}

