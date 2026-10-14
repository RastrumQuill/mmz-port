// sub_0801495C at 0x0801495C (thumb)

longlong sub_0801495C(int param_1)

{
  int iVar1;
  uint in_lr;
  
  switch(*(undefined *)(*(int *)(param_1 + 0xc) + 1)) {
  case 0:
    sub_08013C0C(&DAT_02022c44,*(undefined4 *)(*(int *)(param_1 + 0xc) + 4));
    break;
  case 1:
    DAT_02022c5d = (byte)*(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    goto LAB_08014a60;
  case 2:
    if ((DAT_02022c5c != '\x01') &&
       (iVar1 = *(int *)(param_1 + *(int *)(*(int *)(param_1 + 0xc) + 4) * 0x10 + 0x10), iVar1 != 0)
       ) {
      DAT_02022c8c = iVar1 + 0x4c;
    }
    break;
  case 3:
    DAT_02022c74 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 4:
    DAT_02022c78 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 5:
    DAT_02022c84 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 6:
    DAT_02022c88 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 7:
    DAT_02022c90 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 8:
    DAT_02022c94 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 9:
    DAT_02022c98 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 10:
    DAT_02022c9c = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 0xb:
    DAT_02022ca0 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 0xc:
    DAT_02022ca4 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 0xd:
    DAT_02022ca8 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 0xe:
    DAT_02022cac = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 0xf:
    DAT_02022c5d = DAT_02022c5d | 8;
LAB_08014a60:
    DAT_02022c66 = 0;
    break;
  case 0x10:
    sub_08013C0C(&DAT_02022c44,0);
    sub_080062E4();
    DAT_02004f30 = DAT_02004f30 & 0xc1ff;
    break;
  case 0x11:
    sub_08013C0C(&DAT_02022c44,3);
    sub_08006328();
  }
  return (ulonglong)in_lr << 0x20;
}

