// sub_080269E8 at 0x080269E8 (thumb)

undefined4 sub_080269E8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & 1) == 0) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xf) = 1;
      iVar1 = *(int *)(param_1 + 0xd8);
      if (((*(byte *)(param_1 + 0x202) & 8) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
        iVar2 = 0x200;
      }
      else {
        iVar2 = 0x280;
      }
      *(uint *)(param_1 + 0x58) =
           (*(int *)(param_1 + 0x58) -
           ((int)(((uint)*(ushort *)(iVar1 + 4) - (uint)*(ushort *)(iVar1 + 6)) + 0x100) / 2 +
           (uint)*(ushort *)(iVar1 + 4))) + iVar2;
      sub_0801E9FC(param_1,0x12);
      sub_0801E6AC(0xd);
    }
  }
  else {
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0x201;
    sub_0801EA38(param_1,0x10,1 - *(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
  }
  return in_lr;
}

