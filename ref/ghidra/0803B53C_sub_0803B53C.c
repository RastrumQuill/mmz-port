// sub_0803B53C at 0x0803B53C (thumb)

undefined4 sub_0803B53C(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(uint *)(param_1 + 0x5c) = (*(byte *)(param_1 + 10) >> 4 & 1) * 0x40 + -0x20;
    sub_08096084(param_1 + 0x4c);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar3 = *(int *)(param_1 + 0x54);
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar3 < 0x400) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  cVar1 = sub_0803A7F8(param_1);
  if (cVar1 == '\x01') {
    sub_08001EAC(0x83);
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  bVar2 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if ((bVar2 & 0x20) != 0) {
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_18 = *(int *)(param_1 + 0x50) + -0x3000;
    local_14 = 0x100;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      local_14 = 0xffffff00;
    }
    local_10 = 0xfffffc00;
    sub_080802EC(param_1,&local_1c);
  }
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0x1f;
  sub_080297C0(param_1);
  return in_lr;
}

