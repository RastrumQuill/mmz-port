// sub_0801CF90 at 0x0801CF90 (thumb)

undefined8 sub_0801CF90(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = (int)*(short *)(param_1 + 0x8c);
  uVar1 = sub_0801C5CC(param_1);
  if (iVar5 < (int)(uVar1 & 0xff)) {
    iVar5 = iVar5 + 1;
    *(short *)(param_1 + 0x8c) = (short)iVar5;
    sub_08001EAC(0x1d);
    if (iVar5 < (int)(uVar1 & 0xff)) {
      uVar2 = 1;
      goto LAB_0801cff8;
    }
  }
  else if (*(byte *)(param_1 + 0x17b) != 0) {
    uVar1 = 0;
    do {
      pbVar4 = (byte *)(param_1 + 0x17c + uVar1);
      uVar3 = (uint)*pbVar4;
      if (uVar3 < 0x1e) {
        uVar3 = uVar3 + 1;
        *pbVar4 = (byte)uVar3;
        if (uVar3 < 0x1e) {
          sub_08001EAC(0x5b);
          uVar2 = 1;
          goto LAB_0801cff8;
        }
        sub_08001EAC(0x5c);
        break;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(byte *)(param_1 + 0x17b));
  }
  uVar2 = 0;
LAB_0801cff8:
  return CONCAT44(in_lr,uVar2);
}

