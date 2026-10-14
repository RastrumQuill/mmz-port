// sub_0802C234 at 0x0802C234 (thumb)

ulonglong sub_0802C234(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined auStack_18 [8];
  
  iVar2 = (*(int *)(param_1 + 0x58) + (int)*(short *)(param_2 + 2)) -
          ((int)((uint)*(ushort *)(param_2 + 6) << 0x10) >> 0x11);
  if ((*(char *)(param_1 + 0x1b8) != '\0') &&
     (((uVar1 = sub_0802E040(param_1,*(undefined4 *)(param_1 + 0x54),iVar2), (uVar1 & 0x8000) == 0
       || ((uVar1 & 0xf) == 0)) || (0xe < (uVar1 & 0xf))))) {
    sub_0802DD3C(param_1,*(undefined4 *)(param_1 + 0x54),iVar2,auStack_18);
  }
  uVar1 = sub_08007020(*(undefined4 *)(param_1 + 0x54),iVar2);
  if (((uVar1 & 0xf) == 1) && ((uVar1 & 0x8000) == 0)) {
    iVar2 = sub_08008080(*(undefined4 *)(param_1 + 0x54),iVar2);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
  }
  return CONCAT44(in_lr,uVar1) & 0xffffffff0000ffff;
}

