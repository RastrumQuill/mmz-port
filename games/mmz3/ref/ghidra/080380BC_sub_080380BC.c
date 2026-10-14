// sub_080380BC at 0x080380BC (thumb)

undefined4 sub_080380BC(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0xd);
  if (bVar2 == 1) {
    sub_08017700(param_1,0x5201);
    *(undefined *)(param_1 + 0x12) = 0;
  }
  else {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8)
      ;
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12);
    bVar2 = cVar1 + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (bVar2 < 5) {
      if (bVar2 < 2) {
        return in_lr;
      }
      sub_0803BA70(*(undefined4 *)(param_1 + 0xb4),param_1 + 0x54,cVar1 + -1,
                   *(byte *)(param_1 + 10) >> 4 & 1);
      return in_lr;
    }
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

