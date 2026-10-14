// sub_08087978 at 0x08087978 (thumb)

undefined4 sub_08087978(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885bac8);
    sub_0801CF00(param_1,0x1d0b);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0xb4);
    *(char *)(param_1 + 0xb4) = cVar1 + -1;
    if (cVar1 == '\x01') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar2 & 0x7fffffff;
      if ((uVar2 * 2 >> 0x11 & 1) == 0) {
        *(undefined *)(param_1 + 0xe) = 2;
        *(undefined *)(param_1 + 0xf) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xe) = 4;
        *(undefined *)(param_1 + 0xf) = 0;
      }
    }
  }
  return in_lr;
}

