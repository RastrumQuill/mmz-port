// sub_08041628 at 0x08041628 (thumb)

undefined4 sub_08041628(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,10);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_080297C0(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 != 0x79) {
    if (bVar1 < 0x7a) {
      if (bVar1 != 0x35) {
        if (bVar1 < 0x36) {
          if (bVar1 != 0x2c) goto LAB_0804169a;
        }
        else {
          if (bVar1 == 0x3e) goto LAB_08041686;
          if (bVar1 != 0x70) goto LAB_0804169a;
        }
LAB_08041680:
        sub_08001EAC(0x21);
      }
    }
    else {
      if (bVar1 == 0xb4) goto LAB_08041680;
      if (bVar1 < 0xb5) {
        if (bVar1 != 0x82) goto LAB_0804169a;
      }
      else if ((bVar1 != 0xbd) && (bVar1 != 0xc6)) goto LAB_0804169a;
    }
  }
LAB_08041686:
  sub_08084260(param_1,2,0);
  sub_08084260(param_1,2,1);
LAB_0804169a:
  cVar2 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -0x27) {
    *(undefined *)(param_1 + 0xd) = 0x1b;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xca) = 0;
  }
  return in_lr;
}

