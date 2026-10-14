// sub_080603D8 at 0x080603D8 (thumb)

undefined4 sub_080603D8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return in_lr;
        }
        if ((*(uint *)(param_1 + 0x70) & 0xffff00) == 0x10500) {
          sub_0800471C(0xfc);
          sub_08090F7C(param_1,0);
          sub_08090F7C(param_1,1);
          sub_08090F7C(param_1,2);
        }
        if (*(char *)(param_1 + 0x73) != '\x03') {
          return in_lr;
        }
        *(undefined *)(param_1 + 0xf) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        return in_lr;
      }
      sub_08007390(param_1 + 0x74,&DAT_08361a88);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x5000;
      sub_08017700(param_1,0xbc17);
      goto LAB_08060446;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_08361b18);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
LAB_08060446:
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

