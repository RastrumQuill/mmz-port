// sub_0808C600 at 0x0808C600 (thumb)

undefined4 sub_0808C600(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_0808c672;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0800471C(0x2c);
  local_18 = *(int *)(param_1 + 0x54) + -0x2500;
  local_14 = *(int *)(param_1 + 0x58) + -0xe00;
  sub_0809C41C(&local_18,0x300,0);
  local_18 = *(int *)(param_1 + 0x54) + 0x2500;
  local_14 = *(int *)(param_1 + 0x58) + -0xe00;
  sub_0809C41C(&local_18,0x300,0x80);
  sub_08017700(param_1,0x7102);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0808c672:
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}

