// sub_0801FFEC at 0x0801FFEC (thumb)

undefined4 sub_0801FFEC(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 1) == 0) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xf) = 1;
      iVar1 = *(int *)(param_1 + 0x108);
      if ((*(byte *)(param_1 + 0x17a) & 4) == 0) {
        iVar2 = 0x200;
      }
      else {
        iVar2 = 0x280;
      }
      *(uint *)(param_1 + 0x50) =
           (*(int *)(param_1 + 0x50) -
           ((uint)*(ushort *)(iVar1 + 4) +
           (int)(((uint)*(ushort *)(iVar1 + 4) - (uint)*(ushort *)(iVar1 + 6)) + 0x100) / 2)) +
           iVar2;
      sub_08018BE8(param_1,0x12);
      sub_08001EAC(0x1e);
    }
  }
  else {
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0x201;
    sub_08018C20(param_1,0x10,1 - *(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
  }
  return in_lr;
}

