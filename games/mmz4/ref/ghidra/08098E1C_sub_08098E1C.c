// sub_08098E1C at 0x08098E1C (thumb)

undefined4 sub_08098E1C(int param_1)

{
  undefined uVar1;
  byte bVar2;
  char cVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x6800);
    *(int *)(param_1 + 0x5c) =
         *(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0xbe) + 0x40) * 0x1000000 >> 0x17)) *
         0xd >> 2;
    *(int *)(param_1 + 0x60) = (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xbe)] * 0xd >> 2;
    if (*(byte *)(param_1 + 0x13) < 3) {
      uVar1 = 0x10;
    }
    else {
      uVar1 = 8;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == -1) {
      bVar2 = *(char *)(param_1 + 0x13) + 1;
      *(byte *)(param_1 + 0x13) = bVar2;
      if (3 < bVar2) {
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      if (bVar2 < 3) {
        if (*(char *)(param_1 + 0xbf) == '\0') {
          if (bVar2 == 2) {
            cVar3 = *(char *)(param_1 + 0xbe) + -0x56;
          }
          else {
            cVar3 = *(char *)(param_1 + 0xbe) + -0x55;
          }
        }
        else if (bVar2 == 2) {
          cVar3 = *(char *)(param_1 + 0xbe) + 'V';
        }
        else {
          cVar3 = *(char *)(param_1 + 0xbe) + 'U';
        }
        *(char *)(param_1 + 0xbe) = cVar3;
      }
      else if (*(char *)(param_1 + 0xbf) == '\0') {
        *(char *)(param_1 + 0xbe) = *(char *)(param_1 + 0xbe) + -0x6a;
      }
      else {
        *(char *)(param_1 + 0xbe) = *(char *)(param_1 + 0xbe) + 'j';
      }
      sub_0801CF00(param_1,*(byte *)(param_1 + 0x13) | 0x6800);
      sub_080C3864(param_1,0,0);
      sub_08002B10(0x15a);
      *(undefined *)(param_1 + 0x12) = 0x10;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == -1) {
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

