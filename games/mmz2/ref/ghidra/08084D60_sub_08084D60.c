// sub_08084D60 at 0x08084D60 (thumb)

undefined4 sub_08084D60(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080032EC(0xc9);
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 1) != 0) {
      sub_08086220(param_1 + 0x54,0x1000,1,2);
    }
    sub_080127E4(param_1,0x7206);
    *(undefined *)(param_1 + 0xb9) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    cVar1 = *(char *)(param_1 + 0xb5);
    if ((cVar1 == '\0') || (cVar1 = cVar1 + -1, *(char *)(param_1 + 0xb5) = cVar1, cVar1 == '\0')) {
      uVar2 = 10;
    }
    else {
      uVar2 = 7;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

