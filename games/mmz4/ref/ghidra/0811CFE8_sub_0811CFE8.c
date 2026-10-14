// sub_0811CFE8 at 0x0811CFE8 (thumb)

undefined8 sub_0811CFE8(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  iVar3 = param_1 + 0xdd9;
  if (*(byte *)(iVar3 + param_2) == 0xff) {
    uVar4 = 0;
  }
  else {
    bVar1 = *(byte *)(iVar3 + param_2);
    pbVar6 = (byte *)(DAT_0202eda8 + (uint)(bVar1 >> 1));
    bVar2 = *pbVar6;
    iVar5 = (bVar1 & 1) << 2;
    *pbVar6 = (byte)(((int)(uint)bVar2 >> iVar5 & 0xfU) + 1 << iVar5) |
              bVar2 & ~(byte)(0xf << iVar5);
    if ((uint)bVar1 < (uint)*(byte *)(param_1 + 0xdd2)) {
      *(char *)(param_1 + 0xde2) = *(char *)(param_1 + 0xde2) + '\x01';
    }
    for (; param_2 < 3; param_2 = param_2 + 1 & 0xff) {
      *(undefined *)(iVar3 + param_2) = *(undefined *)(iVar3 + param_2 + 1);
    }
    *(undefined *)(param_1 + 0xddc) = 0xff;
    uVar4 = 1;
  }
  return CONCAT44(in_lr,uVar4);
}

