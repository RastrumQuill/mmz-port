// sub_0810B554 at 0x0810B554 (thumb)

undefined4 sub_0810B554(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar2 + 2) < 2) {
    bVar1 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar1 | 1;
    if (*(char *)(iVar2 + 2) == '\x01') {
      if (*(byte *)(iVar2 + 3) < 2) {
        *(byte *)(param_1 + 10) = bVar1 & 0xfe;
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0x54) = 0x18800;
      bVar1 = *(byte *)(iVar2 + 3);
      iVar2 = 0x3000;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0x18000;
      bVar1 = *(byte *)(iVar2 + 0xdce);
      iVar2 = 0x4000;
    }
    *(uint *)(param_1 + 0x58) = (uint)bVar1 * 0x1000 + iVar2;
    sub_0801CFF0(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  return in_lr;
}

