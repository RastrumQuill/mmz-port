// sub_08025AD8 at 0x08025AD8 (thumb)

undefined8 sub_08025AD8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  do {
    pbVar3 = (byte *)(param_1 + 0xbc + uVar4);
    bVar1 = *pbVar3;
    if (bVar1 < 0x20) {
      *pbVar3 = bVar1 + 1;
      if (bVar1 != 0x1f) {
        sub_0800471C(0x20);
        uVar2 = 1;
        goto LAB_08025b10;
      }
      sub_0800471C(0x21);
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  uVar2 = 0;
LAB_08025b10:
  return CONCAT44(in_lr,uVar2);
}

