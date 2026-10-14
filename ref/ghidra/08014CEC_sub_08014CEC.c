// sub_08014CEC at 0x08014CEC (thumb)

undefined4 sub_08014CEC(int param_1)

{
  byte bVar1;
  ushort uVar2;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0xc) + 1);
  if (bVar1 == 1) {
    uVar2 = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return 0;
    }
    uVar2 = 0x8000;
  }
  else {
    if (bVar1 != 2) {
      return 0;
    }
    uVar2 = *(ushort *)(*(int *)(param_1 + 0xc) + 4) | 0x8000;
  }
  *(ushort *)(param_1 + 0x148) = uVar2;
  return 0;
}

