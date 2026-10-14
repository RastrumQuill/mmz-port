// sub_08077E70 at 0x08077E70 (thumb)

undefined8 sub_08077E70(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = sub_0800710C(DAT_020305e8);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 0x18;
    *(undefined *)(iVar2 + 9) = 0x19;
    *(undefined4 *)(iVar2 + 0x14) = 0x8077fb1;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    bVar1 = *(byte *)(iVar2 + 0xb);
    *(byte *)(iVar2 + 0xb) = bVar1 | 0x10;
    *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
    *(undefined *)(iVar2 + 0x10) = 2;
    *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(int *)(iVar2 + 0x28) = param_1;
    *(byte *)(iVar2 + 0xb) = bVar1 | 0x10;
    *(undefined *)(iVar2 + 0x1d) = *(undefined *)(param_1 + 0x1c);
  }
  return CONCAT44(in_lr,iVar2);
}

