// sub_080964B8 at 0x080964B8 (thumb)

undefined4 sub_080964B8(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x12) == '\x02') {
        uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
        local_10 = uVar3 * 0x2000 + *(int *)(param_1 + 0x54) + -0x1000;
        local_c = *(int *)(param_1 + 0x58) + -0xa00;
        sub_080B0EDC(&local_10,uVar3 * 0x600 + -0x300);
      }
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 4;
      cVar2 = '\0';
      goto LAB_08096560;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xdb04);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    sub_080177F4(param_1);
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08096560:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

