// sub_080C0C28 at 0x080C0C28 (thumb)

undefined4 sub_080C0C28(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 2) == '\0') {
    sub_08001EAC(0x77);
    *(undefined2 *)(param_1 + 4) = 0x1c20;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  }
  else if ((*(char *)(param_1 + 2) == '\x01') &&
          ((sVar1 = *(short *)(param_1 + 4) + -1, *(short *)(param_1 + 4) = sVar1, sVar1 == 0 ||
           (iVar2 = sub_08001F08(0x77), iVar2 == 0)))) {
    sub_080BF0A4(param_1,0x200);
  }
  return in_lr;
}

