// sub_08108CA8 at 0x08108CA8 (thumb)

undefined8 sub_08108CA8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((*(ushort *)(param_1 + 0x252) & 0x8000) == 0) && (DAT_0202e910 != 0x11)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

