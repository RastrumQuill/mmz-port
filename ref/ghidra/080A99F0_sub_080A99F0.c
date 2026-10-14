// sub_080A99F0 at 0x080A99F0 (thumb)

undefined4 sub_080A99F0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,*(int *)(param_1 + 0xc4) + 2U & 0xffff);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(uint *)(param_1 + 0x4c) = (*(uint *)(param_1 + 0x4c) & 0xfffff000) + 0x800;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_0809C980(param_1);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x180;
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 0xf) == 0) {
    sub_08001EAC(0x1e);
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + -0x1800);
    if (cVar2 == '\0') {
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x100);
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}

