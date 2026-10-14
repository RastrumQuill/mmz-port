// sub_080B5D7C at 0x080B5D7C (thumb)

undefined8 sub_080B5D7C(undefined4 param_1,undefined4 *param_2,undefined param_3)

{
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed90);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x62;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b5e01;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    uVar2 = param_2[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_2;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined *)(iVar1 + 0xb5) = param_3;
    psVar3 = (short *)(*(int *)(iVar1 + 0x28) + 0xcc);
    *psVar3 = *psVar3 + 1;
    pbVar4 = (byte *)(*(int *)(iVar1 + 0x28) + 0xce);
    *pbVar4 = (byte)(1 << *(sbyte *)(iVar1 + 0xb5)) | *pbVar4;
  }
  return CONCAT44(in_lr,iVar1);
}

