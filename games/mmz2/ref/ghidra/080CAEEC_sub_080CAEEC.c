// sub_080CAEEC at 0x080CAEEC (thumb)

undefined4 sub_080CAEEC(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x6203);
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(iVar5 + 0xb4);
    iVar4 = 0x1000;
  }
  else {
    iVar3 = *(int *)(iVar5 + 0xb4);
    iVar4 = -0x1100;
  }
  *(int *)(param_1 + 0x54) = iVar3 + iVar4;
  *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0xb8) + 0x5c00;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080CAD8C(param_1);
  return in_lr;
}

