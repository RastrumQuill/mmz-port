// sub_080CBFD0 at 0x080CBFD0 (thumb)

undefined4 sub_080CBFD0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(byte *)(param_1 + 0x10) < 4) {
      sub_08007390(param_1 + 0x74,&DAT_0836c6cc);
    }
    else {
      sub_08007390(param_1 + 0x74,&DAT_0836c684);
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080CB8EC(param_1);
  return in_lr;
}

