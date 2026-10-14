// sub_080FD4B4 at 0x080FD4B4 (thumb)

undefined4 sub_080FD4B4(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) == 0x68736d53) {
    *(undefined4 *)(param_1 + 0x34) = 0x68736d54;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000000;
    uVar1 = (uint)*(byte *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x2c);
    if (uVar1 != 0) {
      do {
        sub_080FC8B8(param_1,iVar2);
        uVar1 = uVar1 - 1;
        iVar2 = iVar2 + 0x50;
      } while (0 < (int)uVar1);
    }
    *(undefined4 *)(param_1 + 0x34) = 0x68736d53;
  }
  return in_lr;
}

