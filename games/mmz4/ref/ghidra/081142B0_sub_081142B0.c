// sub_081142B0 at 0x081142B0 (thumb)

undefined4 sub_081142B0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 2) == '\0') {
    sub_08002B10(6);
    *(undefined2 *)(param_1 + 4) = 0x1c20;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  }
  else if ((*(char *)(param_1 + 2) == '\x01') &&
          ((sVar1 = *(short *)(param_1 + 4) + -1, *(short *)(param_1 + 4) = sVar1, sVar1 == 0 ||
           (iVar2 = sub_08002BB4(6), iVar2 == 0)))) {
    sub_08112080(param_1,0x300);
  }
  return in_lr;
}

