// sub_0803A130 at 0x0803A130 (thumb)

undefined8 sub_0803A130(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x2c) + 0x13) & 0x20) != 0) {
    uVar2 = *(uint *)(param_1 + 0x14);
    if ((uVar2 & 0x80000) != 0) {
      uVar1 = 1;
      goto LAB_0803a170;
    }
    if ((uVar2 & 0x100000) != 0) {
      uVar1 = 4;
      goto LAB_0803a170;
    }
    if ((uVar2 & 0x200000) != 0) {
      uVar1 = 3;
      goto LAB_0803a170;
    }
  }
  uVar1 = 0xffffffff;
LAB_0803a170:
  return CONCAT44(in_lr,uVar1);
}

