// sub_080CEE2C at 0x080CEE2C (thumb)

undefined4 sub_080CEE2C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(short *)(param_1 + 0x12) == 1) {
    sub_080177CC(param_1,*(undefined2 *)(&DAT_0836cdd4 + (uint)*(byte *)(param_1 + 0x10) * 2),
                 (short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  if (*(short *)(param_1 + 0x12) == 0x100) {
    sub_080177CC(param_1,*(undefined2 *)(&DAT_0836cddc + (uint)*(byte *)(param_1 + 0x10) * 2),
                 (short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  iVar1 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar1;
  iVar2 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  if ((iVar1 == *(int *)(param_1 + 100)) && (iVar2 == *(int *)(param_1 + 0x68))) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

