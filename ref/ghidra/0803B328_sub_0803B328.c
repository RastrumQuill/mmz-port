// sub_0803B328 at 0x0803B328 (thumb)

undefined4 sub_0803B328(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08029778(param_1,7);
        sub_0800561C(param_1 + 0x74,&DAT_082adc24);
        *(undefined *)(param_1 + 0x12) = 0xb4;
        uVar3 = 0xffffffe0;
        *(undefined4 *)(param_1 + 0x54) = 0xffffffe0;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          uVar3 = 0x20;
        }
        *(undefined4 *)(param_1 + 0x54) = uVar3;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = sub_080C8CB0(*(undefined *)(param_1 + 0x12),0x1e);
      if (cVar2 == '\0') {
        sub_08001EAC(0x46);
      }
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
      sub_0803A7F8(param_1);
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080297C0(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08029778(param_1,0x13);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080297C0(param_1);
  return in_lr;
}

