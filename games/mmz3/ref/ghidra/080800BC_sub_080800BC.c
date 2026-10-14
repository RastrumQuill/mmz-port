// sub_080800BC at 0x080800BC (thumb)

undefined4 sub_080800BC(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08364710);
    *(undefined *)(param_1 + 0x25) = 0xf;
    if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      uVar2 = 0x800;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      uVar2 = 0xfffff800;
    }
    *(undefined4 *)(param_1 + 100) = uVar2;
    sub_08017700(param_1,0x4c03);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xb8) != '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x20;
  }
  iVar1 = DAT_0202f5c0;
  *(int *)(param_1 + 0x54) = *(int *)(DAT_0202f5c0 + 0x54) + *(int *)(param_1 + 100);
  if (*(int *)(param_1 + 0x58) < *(int *)(iVar1 + 0x58)) {
    *(int *)(iVar1 + 0x58) = *(int *)(param_1 + 0x58);
  }
  sub_080177F4(param_1);
  return in_lr;
}

