// sub_08117A68 at 0x08117A68 (thumb)

undefined4 sub_08117A68(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  byte bVar6;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x63a8);
  bVar6 = *(byte *)(param_1 + 0xdf2);
  bVar4 = *(byte *)(param_1 + 0xdf3);
  bVar1 = *(byte *)(iVar3 + 0xc0);
  bVar2 = *(byte *)(iVar3 + 0xc1);
  if (2 < bVar6) {
    bVar6 = 2;
  }
  if (2 < bVar4) {
    bVar4 = 2;
  }
  if (2 < bVar1) {
    bVar1 = 2;
  }
  if (2 < bVar2) {
    bVar2 = 2;
  }
  if (bVar6 == bVar1) {
    bVar6 = *(byte *)(iVar3 + 0xf8);
joined_r0x08117afc:
    if (bVar6 != bVar1) {
      *(byte *)(iVar3 + 0xf8) = bVar2;
      return in_lr;
    }
LAB_08117b10:
    *(byte *)(iVar3 + 0xf9) = bVar2;
  }
  else {
    if (bVar4 == bVar2) {
      pbVar5 = (byte *)(iVar3 + 0xf9);
      if (*pbVar5 == bVar2) {
        *(byte *)(iVar3 + 0xf8) = bVar1;
        return in_lr;
      }
    }
    else {
      if (bVar6 != bVar2) {
        if (bVar4 == bVar1) {
          bVar6 = *(byte *)(iVar3 + 0xf8);
          goto joined_r0x08117afc;
        }
        *(byte *)(iVar3 + 0xf8) = bVar1;
        goto LAB_08117b10;
      }
      if (bVar4 == bVar1) {
        return in_lr;
      }
      pbVar5 = (byte *)(iVar3 + 0xf8);
      if (*pbVar5 == bVar2) {
        *(byte *)(iVar3 + 0xf9) = bVar1;
        return in_lr;
      }
    }
    *pbVar5 = bVar1;
  }
  return in_lr;
}

