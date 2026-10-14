// sub_08051888 at 0x08051888 (thumb)

undefined4 sub_08051888(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar2 = sub_08057A70();
    if (cVar2 != '\0') {
      sub_080032EC(0xec);
    }
    sub_080127E4(param_1,0xa602);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 != 0x20) {
    if (bVar1 < 0x21) {
      if (bVar1 != 4) {
        return in_lr;
      }
    }
    else if (bVar1 != 0x28) {
      if (bVar1 != 0x30) {
        return in_lr;
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
  }
  cVar2 = sub_08057A70(param_1);
  if (cVar2 != '\0') {
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    local_14 = *(int *)(param_1 + 0x54) + ((uVar3 * 2 >> 0x11 & 0x1f) - 0x10) * 0x100;
    local_10 = *(int *)(param_1 + 0xbc) + -0x7800;
    sub_080B61B4(param_1,&local_14,1,0);
  }
  return in_lr;
}

