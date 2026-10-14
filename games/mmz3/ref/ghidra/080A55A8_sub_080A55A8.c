// sub_080A55A8 at 0x080A55A8 (thumb)

undefined4 sub_080A55A8(int param_1)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08368298);
    iVar1 = sub_080FE124(0x400);
    *(uint *)(param_1 + 0x5c) = (uint)(iVar1 << 0x10) >> 0xb;
    *(undefined4 *)(param_1 + 0xb4) = 0x4000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  piVar3 = (int *)(param_1 + 0xb4);
  iVar1 = *piVar3 + *(int *)(param_1 + 0x5c);
  *piVar3 = iVar1;
  if (0x30000 < iVar1) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x20;
  }
  if (*(int *)(param_1 + 0x5c) < 1) {
    puVar2 = (uint *)(iVar4 + 0xc0);
    *puVar2 = *puVar2 & 0xffffff7f;
    *piVar3 = 0x4000;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080A4A24(param_1);
  sub_080177F4(param_1);
  return in_lr;
}

