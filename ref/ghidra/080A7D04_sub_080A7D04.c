// sub_080A7D04 at 0x080A7D04 (thumb)

undefined4 sub_080A7D04(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_0809C980(param_1);
        if (*(char *)(param_1 + 0x73) != '\x04') {
          return in_lr;
        }
        if (DAT_020236e2 != '\0') {
          return in_lr;
        }
        sub_0809C930(param_1,4);
        cVar2 = *(char *)(param_1 + 0xe) + '\x01';
      }
      else {
        if (bVar1 != 3) {
          return in_lr;
        }
        sub_0809C980(param_1);
        if (*(char *)(param_1 + 0x73) != '\x03') {
          return in_lr;
        }
        sub_08001EAC(0xcb);
        DAT_02022864 = '\0';
        cVar2 = '\0';
      }
      goto LAB_080a7dc2;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0809C930(param_1,1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0809C980(param_1);
  if ((*(ushort *)(iVar3 + 0x90) & 0x8000) == 0) {
    return in_lr;
  }
  if (DAT_02022864 == '\0') {
    return in_lr;
  }
  sub_080BF0A4(&DAT_020236e0,0x20300);
  sub_0809C930(param_1,2);
  sub_08001EAC(0xc9);
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080a7dc2:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

