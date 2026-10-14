// sub_080468DC at 0x080468DC (thumb)

undefined4 sub_080468DC(int param_1)

{
  undefined uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  sub_080128D4();
  bVar3 = (byte)DAT_0202ec42 & 1;
  if ((DAT_0202ec42 & 1) != 0) {
    return in_lr;
  }
  *(byte *)(param_1 + 0xbf) = bVar3;
  if ((*(int *)(param_1 + 200) < *(int *)(param_1 + 0x54)) ||
     (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xc4))) {
    *(undefined *)(param_1 + 0xd) = 0x1c;
    *(byte *)(param_1 + 0xe) = bVar3;
    *(undefined *)(param_1 + 0xf) = 3;
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    uVar1 = sub_080EF330(uVar4 * 2 >> 0x11,3);
    *(undefined *)(param_1 + 0xbd) = uVar1;
    return in_lr;
  }
  pbVar5 = (byte *)(param_1 + 0xbd);
  bVar3 = *pbVar5;
  if ((*(short *)(param_1 + 0xa4) < 0x20) && (4 < *(byte *)(DAT_0202ebf0 + 1))) {
    pcVar6 = (char *)(param_1 + 0xdc);
    if (*pcVar6 == '\0') {
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      cVar2 = sub_080EF330(uVar4 * 2 >> 0x11,3);
      *pcVar6 = cVar2 + '\x01';
      bVar3 = 3;
    }
    else {
      *pcVar6 = *pcVar6 + -1;
    }
  }
  if (bVar3 == 1) {
    uVar1 = 0x15;
  }
  else if (bVar3 < 2) {
    if (bVar3 != 0) goto LAB_080469da;
    uVar1 = 0xe;
  }
  else if (bVar3 == 2) {
    uVar1 = 0x1f;
  }
  else {
    if (bVar3 != 3) goto LAB_080469da;
    uVar1 = 0x18;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
LAB_080469da:
  if (*(char *)(param_1 + 0xd) == '\x0e') {
    if ((*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xc4) + 0xc000) ||
       (*(int *)(param_1 + 200) + -0xc000 < *(int *)(param_1 + 0x54))) {
      *(undefined *)(param_1 + 0xf) = 0xe;
      *(undefined *)(param_1 + 0xd) = 0x1c;
    }
  }
  else if (*(char *)(param_1 + 0xd) == '\x18') {
    *(undefined *)(param_1 + 0xf) = 0x18;
    *(undefined *)(param_1 + 0xd) = 0x1c;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  bVar3 = sub_080EF1E8(*pbVar5 + 1,3);
  *pbVar5 = bVar3;
  return in_lr;
}

