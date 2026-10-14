// sub_08090B00 at 0x08090B00 (thumb)

undefined4 sub_08090B00(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(byte *)(iVar2 + 0xc) < 2) {
    sub_0801CFF0(param_1);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
    *(uint *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + (bVar1 + 1) * -0x8000;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08090B48(param_1);
  }
  return in_lr;
}

