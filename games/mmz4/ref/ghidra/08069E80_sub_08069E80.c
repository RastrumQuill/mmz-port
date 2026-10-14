// sub_08069E80 at 0x08069E80 (thumb)

undefined8 sub_08069E80(int param_1,int *param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  byte abStack_58 [20];
  byte *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_28;
  uint local_24;
  
  local_24 = param_4 & 0xff;
  sub_08128B5C(abStack_58,&DAT_081291e2,4);
  local_44 = abStack_58 + 4;
  sub_08128B5C(local_44,&DAT_081291e6,0x10);
  local_28 = 0;
  local_40 = (int)*(short *)((int)&DAT_08128c10 + ((local_24 + 0x40) * 0x1000000 >> 0x17));
  iVar3 = local_40 * param_3;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar3 = *param_2 + (iVar3 >> 8);
  param_3 = (short)(&DAT_08128c10)[local_24] * param_3;
  if (param_3 < 0) {
    param_3 = param_3 + 0xff;
  }
  iVar5 = param_2[1] + (param_3 >> 8);
  local_40 = local_40 * 0x18;
  local_3c = (short)(&DAT_08128c10)[local_24] * 0x18;
  local_38 = local_40 + iVar3;
  local_34 = local_3c + iVar5;
  iVar4 = (*(byte *)(param_1 + 10) >> 4 & 1) * 2 + ((param_4 << 0x18) >> 0x1e) * 4;
  bVar1 = local_44[iVar4];
  bVar2 = abStack_58[iVar4 + 5];
  local_30 = sub_0806A748(param_1,abStack_58[bVar1]);
  iVar4 = sub_0806A748(param_1,abStack_58[bVar2 + 2]);
  if (-1 < (int)(((uint)bVar1 * 2 + -1) * (local_38 - local_30))) {
    iVar3 = local_30 - local_40;
    local_28 = 1;
  }
  if (-1 < (int)(((uint)bVar2 * 2 + -1) * (local_34 - iVar4))) {
    iVar5 = iVar4 - local_3c;
    local_28 = 1;
  }
  *param_2 = iVar3;
  param_2[1] = iVar5;
  return CONCAT44(in_lr,local_28);
}

