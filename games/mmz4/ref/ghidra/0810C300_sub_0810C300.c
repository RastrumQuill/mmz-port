// sub_0810C300 at 0x0810C300 (thumb)

undefined4 sub_0810C300(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar1 + 1) < 2) {
    sub_0801CFF0(param_1);
    *(undefined4 *)(param_1 + 0x54) = 0x1000;
    *(undefined4 *)(param_1 + 0x58) = 0xa00;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    if (*(byte *)(iVar1 + 3) < 2) {
      *(undefined4 *)(param_1 + 0x54) =
           *(undefined4 *)(&DAT_08869a84 + (uint)*(byte *)(iVar1 + 2) * 4);
      iVar1 = 0xa00;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0x800;
      iVar1 = (uint)*(byte *)(iVar1 + 0xdce) * 0x1000 + 0x1800;
    }
    *(int *)(param_1 + 0x58) = iVar1;
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

