// sub_080AF140 at 0x080AF140 (thumb)

undefined4 sub_080AF140(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((iVar1 != 0) && (*(byte *)(iVar1 + 0xc) < 2)) {
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfc;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined *)(iVar1 + 0x94) = 0;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
    *(undefined4 *)(iVar1 + 0xc) = 3;
    *(undefined4 *)(iVar1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar1 + 9) * 4) + 0xc);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  sub_0807F804(param_1);
  return in_lr;
}

