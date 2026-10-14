// sub_08013CA8 at 0x08013CA8 (thumb)

undefined4 sub_08013CA8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
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
  iVar1 = sub_080047C0(0x124);
  if (iVar1 != 0) {
    sub_08004768(0x124);
  }
  return in_lr;
}

