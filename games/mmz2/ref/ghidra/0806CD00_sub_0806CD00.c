// sub_0806CD00 at 0x0806CD00 (thumb)

undefined4 sub_0806CD00(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (bVar1 == 0x40) {
    sub_080032EC(0x33);
    sub_08099AA0(param_1,0,1);
  }
  else if (bVar1 < 0x41) {
    if (bVar1 == 0x20) {
      sub_080032EC(0x33);
      sub_08099AA0(param_1,0,0);
    }
  }
  else if (bVar1 == 0x60) {
    sub_080032EC(0x33);
    sub_08099AA0(param_1,0,2);
  }
  else if (bVar1 == 0x7f) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

