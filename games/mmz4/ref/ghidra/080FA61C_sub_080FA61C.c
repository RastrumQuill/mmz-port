// sub_080FA61C at 0x080FA61C (thumb)

undefined4 sub_080FA61C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
    iVar2 = *(int *)(param_1 + 0x2c);
    if ((*(char *)(iVar1 + 8) == '\x03') && (*(char *)(iVar1 + 9) == 'B')) {
      *(undefined4 *)(iVar2 + 0xc) = 2;
      *(undefined4 *)(iVar2 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(iVar2 + 9) * 4) + 8);
    }
  }
  return in_lr;
}

