// sub_080A9AE8 at 0x080A9AE8 (thumb)

undefined4 sub_080A9AE8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,*(int *)(param_1 + 0xc4) + 1U & 0xffff);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 4;
    *(uint *)(param_1 + 0x4c) = (*(uint *)(param_1 + 0x4c) & 0xfffff000) + 0x800;
  }
  sub_0809C980(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

