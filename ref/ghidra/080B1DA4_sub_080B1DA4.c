// sub_080B1DA4 at 0x080B1DA4 (thumb)

undefined4 sub_080B1DA4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        if (*(int *)(*(int *)(param_1 + 0xbc) + 0x4c) < *(int *)(param_1 + 0x4c) + 0x2000) {
          return in_lr;
        }
        sub_0809C930(param_1,2);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
        *(undefined **)(param_1 + 0x28) = &DAT_082b6bf8;
        sub_08001EAC(0x20);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_0809C980(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      sub_08001EAC(0x1f);
      cVar2 = '\0';
      *(undefined *)(param_1 + 0xd) = 0;
      goto LAB_080b1e64;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0809C930(param_1,1);
    sub_08001EAC(0x20);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0809C980(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080b1e64:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

