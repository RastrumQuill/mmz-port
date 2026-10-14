// sub_0803684C at 0x0803684C (thumb)

undefined8 sub_0803684C(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (*(short *)(*(int *)(param_1 + 0x28) + 4) != 1) goto LAB_08036962;
  if ((DAT_02002134 & 2) != 0) {
    if ((DAT_02002130 & 0x40) == 0) {
      if ((DAT_02002130 & 0x80) == 0) {
        *(byte *)(param_1 + 0x287) = (byte)DAT_02002130 & 0x80;
      }
      else {
        *(undefined *)(param_1 + 0x287) = 4;
      }
    }
    else {
      *(undefined *)(param_1 + 0x287) = 2;
    }
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  uVar2 = DAT_02002130;
  pbVar4 = (byte *)(param_1 + 0x27d);
  bVar1 = (byte)DAT_02002130;
  if (*pbVar4 == 1) {
    if ((DAT_02002130 & 2) != 0) goto LAB_08036962;
    *(byte *)(param_1 + 0x27c) = bVar1 & 2;
    *pbVar4 = bVar1 & 2;
    if ((uVar2 & 0x40) == 0) {
      if ((uVar2 & 0x80) == 0) {
        uVar3 = 6;
      }
      else {
        uVar3 = 8;
      }
    }
    else {
      uVar3 = 7;
    }
    goto LAB_08036934;
  }
  if ((*(byte *)(param_1 + 0x27c) < 0xb) || ((DAT_02002130 & 2) != 0)) goto LAB_08036962;
  *(byte *)(param_1 + 0x27c) = bVar1 & 2;
  *pbVar4 = bVar1 & 2;
  if ((uVar2 & 0x40) == 0) {
    if ((uVar2 & 0x80) != 0) {
      uVar3 = 4;
      goto LAB_08036934;
    }
    *(byte *)(param_1 + 0x287) = bVar1 & 0x80;
  }
  else {
    uVar3 = 2;
LAB_08036934:
    *(undefined *)(param_1 + 0x287) = uVar3;
  }
  *(undefined *)(param_1 + 0xd) = 3;
  *(undefined *)(param_1 + 0xe) = 0;
LAB_08036962:
  return CONCAT44(in_lr,1);
}

