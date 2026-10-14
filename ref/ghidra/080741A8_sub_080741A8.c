// sub_080741A8 at 0x080741A8 (thumb)

undefined4 sub_080741A8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x40);
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  iVar2 = sub_08048BE8(param_1);
  if (iVar2 != 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

