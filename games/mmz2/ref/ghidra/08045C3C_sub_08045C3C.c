// sub_08045C3C at 0x08045C3C (thumb)

undefined4 sub_08045C3C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa008);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 0xfffffe80;
    }
    else {
      uVar3 = 0x180;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar2 = *(char *)(param_1 + 0x71);
  if ((cVar2 == '\x03') || (cVar2 == '\a')) {
    sub_08006E08(param_1 + 0x74,&DAT_0833a980);
  }
  else {
    sub_08006E08(param_1 + 0x74,&DAT_0833a968);
  }
  cVar2 = *(char *)(param_1 + 0x71);
  if ((cVar2 == '\x01') || (cVar2 == '\x05')) {
    if (*(char *)(param_1 + 0xf) == '\0') {
      sub_080032EC(0x50);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    sub_08015518(1,param_1 + 0x54);
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(undefined *)(param_1 + 0xf) = 0;
  }
  bVar1 = *(byte *)(param_1 + 10);
  if ((bVar1 & 0x10) == 0) {
    if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xdc) + 0x3000) {
      sub_08006E08(param_1 + 0x74,&DAT_0833a980);
      *(undefined *)(param_1 + 0xd) = 0x18;
      *(byte *)(param_1 + 0xe) = bVar1 & 0x10;
    }
  }
  else if (*(int *)(param_1 + 0xe0) + -0x3000 < *(int *)(param_1 + 0x54)) {
    sub_08006E08(param_1 + 0x74,&DAT_0833a980);
    *(undefined *)(param_1 + 0xd) = 0x18;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

