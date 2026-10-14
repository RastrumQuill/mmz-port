// sub_080C7A44 at 0x080C7A44 (thumb)

undefined4 sub_080C7A44(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_080177F4();
  iVar2 = (0xff - *(int *)(param_1 + 100)) * 0x50;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar3 = *(int *)(param_1 + 100) + (iVar2 >> 8);
  *(int *)(param_1 + 100) = iVar3;
  iVar2 = (0xff - *(int *)(param_1 + 0x68)) * 0xc;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (iVar2 >> 8);
  *(short *)(param_1 + 0x50) = (short)iVar3;
  *(short *)(param_1 + 0x52) = (short)*(undefined4 *)(param_1 + 0x68);
  cVar1 = *(char *)(param_1 + 0x13) + '\x01';
  *(char *)(param_1 + 0x13) = cVar1;
  *(char *)(param_1 + 0x24) = cVar1;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

