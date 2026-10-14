// sub_08095ACC at 0x08095ACC (thumb)

undefined4 sub_08095ACC(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined auStack_40 [4];
  int local_3c [4];
  int local_2c;
  int local_28;
  byte *local_24;
  
  sub_08128B5C(auStack_40,&DAT_08129520,4);
  local_3c[0] = 0x1800;
  local_3c[1] = 0x1800;
  local_3c[2] = 0x1400;
  local_3c[3] = 0x1400;
  bVar1 = *(byte *)(param_1 + 0x11);
  bVar2 = *(byte *)(param_1 + 10);
  local_24 = (byte *)(param_1 + 0xb5);
  iVar3 = *(byte *)(param_1 + 0xb5) - 1;
  if (iVar3 < 1) {
    iVar5 = local_3c[bVar1];
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    uVar6 = uVar4 & 0x7fffffff;
    DAT_0202dc38 = uVar6;
    iVar3 = sub_08128A9C(uVar4 * 2 >> 0x11,iVar5 << 1);
    local_2c = *(int *)(param_1 + 0x54) + (iVar3 - iVar5);
    uVar4 = uVar6 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    iVar3 = sub_08128A9C(uVar4 * 2 >> 0x11,iVar5 << 1);
    local_28 = *(int *)(param_1 + 0x58) + (iVar3 - iVar5);
    sub_080DFFC8(&local_2c,auStack_40[bVar1],bVar2 >> 4 & 1);
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    iVar3 = (uVar4 * 2 >> 0x11 & 3) + 3;
  }
  *local_24 = (byte)iVar3;
  return in_lr;
}

