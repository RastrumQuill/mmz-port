// sub_080857A0 at 0x080857A0 (thumb)

undefined4 sub_080857A0(int param_1)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080032EC(0xc9);
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 1) != 0) {
      sub_08086220(param_1 + 0x54,0x1000,1,3);
    }
    sub_080127E4(param_1,0x7211);
    *(undefined *)(param_1 + 0xb9) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if ((DAT_0202ed50 - *(int *)(param_1 + 0x54)) + 0x6800U < 0xd001) {
      cVar2 = *(char *)(param_1 + 0xb5);
      if ((cVar2 == '\0') || (cVar2 = cVar2 + -1, *(char *)(param_1 + 0xb5) = cVar2, cVar2 == '\0'))
      {
        uVar1 = 0x17;
      }
      else {
        uVar1 = 0x14;
      }
    }
    else {
      uVar1 = 0x17;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

