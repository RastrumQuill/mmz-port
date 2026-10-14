// sub_080FDCAC at 0x080FDCAC (thumb)

undefined4 sub_080FDCAC(int param_1,uint param_2,undefined2 param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) == 0x68736d53) {
    *(undefined4 *)(param_1 + 0x34) = 0x68736d54;
    uVar1 = (uint)*(byte *)(param_1 + 8);
    pbVar2 = *(byte **)(param_1 + 0x2c);
    uVar3 = 1;
    if (uVar1 != 0) {
      do {
        if (((param_2 & 0xffff & uVar3) != 0) && ((*pbVar2 & 0x80) != 0)) {
          pbVar2[0xb] = (byte)((ushort)param_3 >> 8);
          pbVar2[0xd] = (byte)param_3;
          *pbVar2 = *pbVar2 | 0xc;
        }
        uVar1 = uVar1 - 1;
        pbVar2 = pbVar2 + 0x50;
        uVar3 = uVar3 << 1;
      } while (0 < (int)uVar1);
    }
    *(undefined4 *)(param_1 + 0x34) = 0x68736d53;
  }
  return in_lr;
}

