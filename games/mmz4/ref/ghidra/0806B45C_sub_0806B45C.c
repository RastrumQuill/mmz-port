// sub_0806B45C at 0x0806B45C (thumb)

undefined4 sub_0806B45C(int param_1)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') goto LAB_0806b530;
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x55ff) {
    sub_0801CF00(param_1);
  }
  if (*(short *)(param_1 + 0xa4) < 0x10) {
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 0x1f) < 0x14) {
      uVar1 = 0x18;
    }
    else {
      uVar1 = 0xc;
    }
  }
  else if (*(short *)(param_1 + 0xa4) < 0x20) {
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 0x1f) < 0x14) {
      uVar1 = 0x1e;
    }
    else {
LAB_0806b51c:
      uVar1 = 0x10;
    }
  }
  else {
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    if (0x17 < (uVar3 * 2 >> 0x11 & 0x1f)) goto LAB_0806b51c;
    uVar1 = 0x28;
  }
  *(undefined *)(param_1 + 0x12) = uVar1;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  sub_08005784(param_1 + 0x74,&DAT_08858c70);
LAB_0806b530:
  sub_0801CFF0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

