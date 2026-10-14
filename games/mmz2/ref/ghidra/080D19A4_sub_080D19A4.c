// sub_080D19A4 at 0x080D19A4 (thumb)

undefined4 sub_080D19A4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        if (*(int *)(*(int *)(param_1 + 0xb4) + 0x54) < *(int *)(param_1 + 0x54) + 0x2000) {
          return in_lr;
        }
        sub_080127E4(param_1,0x9602);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
        *(undefined **)(param_1 + 0x30) = &DAT_08349b50;
        *(undefined2 *)(param_1 + 0x26) = 1;
        sub_080032EC(0x9d);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080128D4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      cVar2 = '\0';
      *(undefined *)(param_1 + 0xd) = 0;
      goto LAB_080d1a6c;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_080127E4(param_1,0x9601);
    sub_080032EC(0x9c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080d1a6c:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

