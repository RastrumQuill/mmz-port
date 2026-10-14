// sub_080A9B40 at 0x080A9B40 (thumb)

undefined4 sub_080A9B40(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,*(int *)(param_1 + 0xc4) + 3U & 0xffff);
    *(undefined *)(param_1 + 0xe) = 0;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0xa00;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_0809C980(param_1);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x180;
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 0xf) == 0) {
    sub_08001EAC(0x1e);
  }
  cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

