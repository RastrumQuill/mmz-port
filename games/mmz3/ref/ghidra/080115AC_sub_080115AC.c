// sub_080115AC at 0x080115AC (thumb)

undefined4 sub_080115AC(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0x40;
    *(undefined4 *)(param_1 + 0x48) = 0x100;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (*(int *)(param_1 + 0x34) < 0x1c20) {
    uVar2 = 0x12fc;
  }
  else {
    uVar2 = 0x15cc;
  }
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  sVar1 = *(short *)(param_1 + 0x10) + 1;
  *(short *)(param_1 + 0x10) = sVar1;
  if (sVar1 == 0x30) {
    *(undefined2 *)(param_1 + 0x10) = 0;
  }
  return in_lr;
}

