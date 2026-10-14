// sub_081287E8 at 0x081287E8 (thumb)

undefined8 sub_081287E8(ushort param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  short *psVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  short local_14 [4];
  
  psVar4 = local_14;
  uVar5 = 0;
  if (param_1 < *(ushort *)(DAT_0203d7b0 + 4)) {
    sub_081285C4(param_1,local_14);
    bVar3 = 0;
    do {
      sVar1 = *param_2;
      sVar2 = *psVar4;
      psVar4 = psVar4 + 1;
      param_2 = param_2 + 1;
      if (sVar1 != sVar2) {
        uVar5 = 0x8000;
        break;
      }
      bVar3 = bVar3 + 1;
    } while (bVar3 < 4);
  }
  else {
    uVar5 = 0x80ff;
  }
  return CONCAT44(in_lr,uVar5);
}

