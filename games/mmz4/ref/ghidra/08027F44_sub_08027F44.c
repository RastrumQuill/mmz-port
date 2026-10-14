// sub_08027F44 at 0x08027F44 (thumb)

longlong sub_08027F44(int param_1)

{
  int iVar1;
  uint in_lr;
  
  switch(*(undefined *)(*(int *)(param_1 + 0xc) + 1)) {
  case 0:
    sub_0801F908(&DAT_0202e9f8,*(undefined4 *)(*(int *)(param_1 + 0xc) + 4));
    break;
  case 1:
    DAT_0202ea11 = (byte)*(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    DAT_0202ea1a = 0;
    break;
  case 2:
    if ((DAT_0202ea10 != '\x01') &&
       (iVar1 = *(int *)(param_1 + *(int *)(*(int *)(param_1 + 0xc) + 4) * 0x10 + 0x10), iVar1 != 0)
       ) {
      DAT_0202ea40 = iVar1 + 0x54;
    }
    break;
  case 3:
    if ((DAT_02000c80 & 0x7f) == 4) {
      iVar1 = FUN_081288bc(DAT_0202ea28 + -0xf000,0x3c000);
      DAT_0202ea28 = iVar1 * 0x3c000 + *(int *)(*(int *)(param_1 + 0xc) + 4);
    }
    else {
      DAT_0202ea28 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    }
    break;
  case 4:
    DAT_0202ea2c = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 5:
    DAT_0202ea38 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 6:
    DAT_0202ea3c = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 7:
    DAT_0202ea44 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 8:
    DAT_0202ea48 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 9:
    DAT_0202ea4c = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 10:
    DAT_0202ea50 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 0xb:
    DAT_0202ea54 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 0xc:
    DAT_0202ea58 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 0xd:
    DAT_0202ea5c = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 0xe:
    DAT_0202ea60 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 0xf:
    DAT_0202ea11 = DAT_0202ea11 | 8;
    DAT_0202ea1a = 0;
    break;
  case 0x10:
    sub_0801F908(&DAT_0202e9f8,0);
    sub_08006D3C();
    DAT_02000a00 = DAT_02000a00 & 0xc1ff;
    break;
  case 0x11:
    sub_0801F908(&DAT_0202e9f8,6);
    sub_08006D80();
  }
  return (ulonglong)in_lr << 0x20;
}

