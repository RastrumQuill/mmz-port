// sub_08025978 at 0x08025978 (thumb)

undefined8 sub_08025978(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  puVar4 = (ushort *)(param_1 + 0xa4);
  uVar1 = *puVar4;
  uVar2 = sub_08025A04(param_1);
  if ((short)uVar1 < (short)(uVar2 & 0xff)) {
    *puVar4 = *puVar4 + 1;
    sub_0800471C(0x1f);
    uVar1 = *puVar4;
    uVar2 = sub_08025A04(param_1);
    if (uVar1 != (uVar2 & 0xff)) {
      uVar3 = 1;
      goto LAB_080259b6;
    }
  }
  uVar3 = 0;
LAB_080259b6:
  return CONCAT44(in_lr,uVar3);
}

