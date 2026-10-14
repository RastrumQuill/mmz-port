// sub_08099AAC at 0x08099AAC (thumb)

undefined8 sub_08099AAC(undefined4 param_1,byte param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305e8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x44;
    *(undefined4 *)(iVar1 + 0x14) = 0x8099b89;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined *)(iVar1 + 0x10) = 4;
    *(undefined4 *)(iVar1 + 0x54) = 0x16800;
    *(undefined4 *)(iVar1 + 0x58) = 0x41000;
    uVar2 = sub_0800A104();
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(uint *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x54) + -0x9800 + (uint)param_2 * 0x13000;
    *(byte *)(iVar1 + 0x12) = param_2;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

