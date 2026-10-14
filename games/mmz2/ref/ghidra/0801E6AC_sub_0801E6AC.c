// sub_0801E6AC at 0x0801E6AC (thumb)

undefined8 sub_0801E6AC(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (DAT_0202e140 != '\0') {
    iVar1 = (param_1 & 0xffff) * 0x10000;
    if ((iVar1 - 0x70000U >> 0x10 < 3) || (iVar1 >> 0x10 == 0xc)) {
      uVar2 = 0xffff;
      goto LAB_0801e6e6;
    }
  }
  uVar2 = sub_080032EC(param_1 & 0xffff);
  uVar2 = uVar2 & 0xffff;
LAB_0801e6e6:
  return CONCAT44(in_lr,uVar2);
}

