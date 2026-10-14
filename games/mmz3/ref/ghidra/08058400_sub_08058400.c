// sub_08058400 at 0x08058400 (thumb)

undefined4 sub_08058400(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffffd;
        sub_08017700(param_1,0xb209);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      cVar2 = '\0';
      *(undefined *)(param_1 + 0xd) = 0;
      goto LAB_080584c8;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0800471C(0x91);
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 2;
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x54);
    sub_0801ACF8(3,param_1 + 0x54);
    *(undefined *)(param_1 + 0x12) = 0x12;
    sub_08017700(param_1,0xb208);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  sub_08007390(param_1 + 0x74,
               &DAT_08360594 + (uint)(byte)(&DAT_08361287)[*(char *)(param_1 + 0x71)] * 0x18);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080584c8:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

