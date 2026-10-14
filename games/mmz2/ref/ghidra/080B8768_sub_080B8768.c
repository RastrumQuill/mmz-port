// sub_080B8768 at 0x080B8768 (thumb)

undefined4 sub_080B8768(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = *(undefined4 **)(param_1 + 0x28);
  sub_080128D4();
  uVar1 = puVar2[1];
  *(undefined4 *)(param_1 + 0x54) = *puVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  return in_lr;
}

