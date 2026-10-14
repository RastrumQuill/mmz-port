// sub_080499CC at 0x080499CC (thumb)

undefined4 sub_080499CC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_080127E4(param_1,0xa800);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080128D4(param_1);
      if (*(char *)(*(int *)(param_1 + 200) + 0xd) != '\x03') {
        return in_lr;
      }
      cVar2 = '\0';
      *(undefined *)(param_1 + 0xd) = 3;
      goto LAB_08049a42;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xa829);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08049a42:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

