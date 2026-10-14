// sub_08075430 at 0x08075430 (thumb)

undefined4 sub_08075430(int param_1)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaf01);
    pcVar4 = (char *)(param_1 + 0xde);
    *pcVar4 = '\0';
    if (*(short *)(param_1 + 0xa4) < 0x10) {
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      if ((uVar3 * 2 >> 0x11 & 0x1f) < 10) {
        *pcVar4 = '\x01';
      }
      uVar1 = 0x20;
    }
    else if (*(short *)(param_1 + 0xa4) < 0x20) {
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      if ((uVar3 * 2 >> 0x11 & 0x1f) < 0xc) {
        *pcVar4 = '\x01';
      }
      uVar1 = 0x1c;
    }
    else {
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      if ((uVar3 * 2 >> 0x11 & 0x1f) < 0xe) {
        *pcVar4 = '\x01';
      }
      uVar1 = 0x18;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    if (*pcVar4 == '\0') {
      sub_08005784(param_1 + 0x74,&DAT_08859970);
    }
    else {
      sub_08005784(param_1 + 0x74,&DAT_088598e0);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

