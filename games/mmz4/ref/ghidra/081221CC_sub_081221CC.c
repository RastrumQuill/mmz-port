// sub_081221CC at 0x081221CC (thumb)

undefined4 sub_081221CC(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  short asStack_1c [4];
  
  sub_08128B5C(asStack_1c,&DAT_081363c0,6);
  sub_080027B8(param_1 + 0xed8,&DAT_08b2c000,0x23,0,0);
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 2 + param_1 + 0xed8;
    *(short *)(iVar1 + 0x46) = asStack_1c[*(byte *)(param_1 + 0xdcd)] + (short)uVar2 + 0x5000;
    *(short *)(iVar1 + 0x86) = asStack_1c[*(byte *)(param_1 + 0xdcd)] + (short)uVar2 + 0x5020;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 5);
  sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
  return in_lr;
}

