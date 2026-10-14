// sub_08061B30 at 0x08061B30 (thumb)

undefined4 sub_08061B30(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  uVar3 = (uint)(*(ushort *)(param_1 + 0xb8) >> 8);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    param_2 = -param_2;
  }
  iVar4 = (int)*(short *)((int)&DAT_080fe64c + ((uVar3 + 0x40) * 0x1000000 >> 0x17));
  iVar1 = iVar4 * param_2;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar2 = param_3 * -(int)(short)(&DAT_080fe64c)[uVar3];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  param_2 = (short)(&DAT_080fe64c)[uVar3] * param_2;
  if (param_2 < 0) {
    param_2 = param_2 + 0xff;
  }
  iVar4 = iVar4 * param_3;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  local_1c = *(int *)(param_1 + 0x54) + (iVar2 >> 8) + (iVar1 >> 8);
  local_18 = *(int *)(param_1 + 0x58) + (iVar4 >> 8) + (param_2 >> 8);
  sub_080B2484(3,&local_1c);
  return in_lr;
}

