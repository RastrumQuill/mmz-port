// sub_0804CAB8 at 0x0804CAB8 (thumb)

undefined4 sub_0804CAB8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x2c);
  sub_0801CFF0();
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(iVar2 + 0x54) +
            (int)*(short *)(&DAT_088542f8 + (uint)*(byte *)(param_1 + 0x11) * 2);
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x54) -
            (int)*(short *)(&DAT_088542f8 + (uint)*(byte *)(param_1 + 0x11) * 2);
  }
  *(int *)(param_1 + 0x54) = iVar1;
  if ((1 < *(byte *)(iVar2 + 0xc)) ||
     ((int)(4 - (uint)*(byte *)(iVar2 + 0xbe)) < (int)(uint)*(byte *)(param_1 + 0x11))) {
    sub_0804C664(uVar3,param_1,2,0);
    *(char *)(param_1 + 0xbd) = *(char *)(param_1 + 0xbd) + -1;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

