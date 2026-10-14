// sub_08056944 at 0x08056944 (thumb)

undefined4 sub_08056944(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb30b);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_080177F4(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 != 0x79) {
    if (bVar1 < 0x7a) {
      if (bVar1 != 0x35) {
        if (bVar1 < 0x36) {
          if (bVar1 != 0x2c) goto LAB_080569bc;
        }
        else {
          if (bVar1 == 0x3e) goto LAB_080569a8;
          if (bVar1 != 0x70) goto LAB_080569bc;
        }
LAB_080569a2:
        sub_0800471C(0x3c);
      }
    }
    else {
      if (bVar1 == 0xb4) goto LAB_080569a2;
      if (bVar1 < 0xb5) {
        if (bVar1 != 0x82) goto LAB_080569bc;
      }
      else if ((bVar1 != 0xbd) && (bVar1 != 0xc6)) goto LAB_080569bc;
    }
  }
LAB_080569a8:
  sub_080A8AC8(param_1,2,0);
  sub_080A8AC8(param_1,2,1);
LAB_080569bc:
  cVar2 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -0x27) {
    *(undefined *)(param_1 + 0xd) = 0x1b;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xc6) = 0;
  }
  return in_lr;
}

