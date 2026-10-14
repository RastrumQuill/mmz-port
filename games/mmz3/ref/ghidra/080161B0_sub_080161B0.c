// sub_080161B0 at 0x080161B0 (thumb)

undefined4 sub_080161B0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 3;
  do {
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfc;
      *(undefined4 *)(iVar1 + 0x8c) = 0;
      *(undefined4 *)(iVar1 + 0x90) = 0;
      *(undefined *)(iVar1 + 0x94) = 0;
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
      *(undefined4 *)(iVar1 + 0xc) = 3;
      *(undefined4 *)(iVar1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(iVar1 + 9) * 4) + 0xc);
    }
    param_1 = param_1 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar2 = sub_080047C0(0x124);
  if (iVar2 != 0) {
    sub_08004768(0x124);
  }
  return in_lr;
}

