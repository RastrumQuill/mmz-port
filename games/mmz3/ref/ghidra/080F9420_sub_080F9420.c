// sub_080F9420 at 0x080F9420 (thumb)

undefined8 sub_080F9420(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  puVar3 = (ushort *)(param_1 + 0xdcc);
  if (*(short *)(param_1 + 0xdd2) == 0) {
    *puVar3 = 2;
    *(short *)(param_1 + 0xdd2) = *(short *)(param_1 + 0xdd2) + 1;
  }
  else if ((*(short *)(param_1 + 0xdd2) == 1) &&
          ((uVar1 = *puVar3, (short)*puVar3 < 1 ||
           (*puVar3 = (ushort)(uVar1 - 1), (int)((uVar1 - 1) * 0x10000) < 1)))) {
    if (DAT_02002454 < *(uint *)(param_1 + 0xe08)) {
      DAT_02002454 = *(uint *)(param_1 + 0xe08);
      sub_08008500();
    }
    uVar2 = 0;
    goto LAB_080f9472;
  }
  uVar2 = 1;
LAB_080f9472:
  return CONCAT44(in_lr,uVar2);
}

