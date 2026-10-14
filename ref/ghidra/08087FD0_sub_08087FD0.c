// sub_08087FD0 at 0x08087FD0 (thumb)

undefined4 sub_08087FD0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b31a0,param_1 + 0x4c,1);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  if ((*(char *)(iVar2 + 0xd) != '\0') || (1 < *(byte *)(iVar2 + 0xc))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

