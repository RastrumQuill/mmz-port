// sub_08127B3C at 0x08127B3C (thumb)

undefined4 sub_08127B3C(int param_1)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(param_1 + 2);
  uVar3 = (uint)*(byte *)(param_1 + 3);
  if (uVar2 < uVar3) {
    if ((uVar3 << 0x18) >> 0x19 < uVar2) goto LAB_08127b68;
    *(undefined *)(param_1 + 0x1b) = 0xf0;
LAB_08127b76:
    uVar2 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) >> 4;
    *(char *)(param_1 + 10) = (char)uVar2;
    if (uVar2 < 0x10) goto LAB_08127b88;
    uVar1 = 0xf;
  }
  else {
    if (uVar3 <= (uVar2 << 0x18) >> 0x19) {
      *(undefined *)(param_1 + 0x1b) = 0xf;
      goto LAB_08127b76;
    }
LAB_08127b68:
    *(undefined *)(param_1 + 0x1b) = 0xff;
    uVar1 = (undefined)((uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) >> 4);
  }
  *(undefined *)(param_1 + 10) = uVar1;
LAB_08127b88:
  *(char *)(param_1 + 0x19) =
       (char)((int)((uint)*(byte *)(param_1 + 10) * (uint)*(byte *)(param_1 + 6) + 0xf) >> 4);
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1c) & *(byte *)(param_1 + 0x1b);
  return in_lr;
}

