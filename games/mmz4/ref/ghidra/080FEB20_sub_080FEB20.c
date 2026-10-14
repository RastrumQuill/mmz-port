// sub_080FEB20 at 0x080FEB20 (thumb)

undefined4 sub_080FEB20(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x04') {
    uVar1 = (int)-(*(byte *)(param_1 + 10) & 0x20) >> 0x1f & 0x20;
    if (*(int *)(DAT_0202dbf0 + 0x54) <= *(int *)(param_1 + 0x54)) {
      uVar1 = uVar1 | 1;
    }
    sub_080D4898(param_1 + 0x54,&DAT_08868064,0,uVar1);
    uVar1 = (int)-(*(byte *)(param_1 + 10) & 0x20) >> 0x1f & 0x20;
    if (*(int *)(DAT_0202dbf0 + 0x54) <= *(int *)(param_1 + 0x54)) {
      uVar1 = uVar1 | 1;
    }
    sub_080D4898(param_1 + 0x54,&DAT_08868064,0,uVar1);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

