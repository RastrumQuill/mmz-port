// sub_080FC230 at 0x080FC230 (thumb)

undefined4 sub_080FC230(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_080fc2c2;
    *(undefined *)(param_1 + 0x12) = 0x5a;
  }
  else if (bVar1 < 2) {
    if ((bVar1 != 0) ||
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != -1))
    goto LAB_080fc2c2;
    sub_08002B10(0x5b);
    sub_0801CF00(param_1,0x2f01);
    sub_080AD94C(param_1 + 0x54,0,0);
  }
  else {
    if (bVar1 != 2) {
      if ((bVar1 == 3) && (*(char *)(param_1 + 0x73) == '\x03')) {
        *(undefined *)(param_1 + 0x12) = 0x5a;
        *(undefined *)(param_1 + 0xd) = 0;
      }
      goto LAB_080fc2c2;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto LAB_080fc2c2;
    sub_0801CF00(param_1,0x2f03);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080fc2c2:
  sub_0801CFF0(param_1);
  return in_lr;
}

