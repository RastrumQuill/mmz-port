// sub_080FDC44 at 0x080FDC44 (thumb)

undefined4 sub_080FDC44(int param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) == 0x68736d53) {
    *(undefined4 *)(param_1 + 0x34) = 0x68736d54;
    uVar2 = (uint)*(byte *)(param_1 + 8);
    pbVar1 = *(byte **)(param_1 + 0x2c);
    uVar3 = 1;
    if (uVar2 != 0) {
      do {
        if (((param_2 & 0xffff & uVar3) != 0) && ((*pbVar1 & 0x80) != 0)) {
          pbVar1[0x13] = (byte)((uint)(param_3 << 0x10) >> 0x12);
          *pbVar1 = *pbVar1 | 3;
        }
        uVar2 = uVar2 - 1;
        pbVar1 = pbVar1 + 0x50;
        uVar3 = uVar3 << 1;
      } while (0 < (int)uVar2);
    }
    *(undefined4 *)(param_1 + 0x34) = 0x68736d53;
  }
  return in_lr;
}

