// sub_0801D000 at 0x0801D000 (thumb)

undefined8 sub_0801D000(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x1fe);
  if (uVar1 < 9999) {
    uVar1 = uVar1 + 1;
    *(ushort *)(param_1 + 0x1fe) = (ushort)uVar1;
    sub_08001EAC(0x94);
    uVar1 = (uint)(uVar1 < 10000);
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

