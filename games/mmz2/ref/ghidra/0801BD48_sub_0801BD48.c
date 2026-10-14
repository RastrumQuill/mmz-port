// sub_0801BD48 at 0x0801BD48 (thumb)

longlong sub_0801BD48(int param_1)

{
  int iVar1;
  uint in_lr;
  
  switch(*(undefined *)(*(int *)(param_1 + 0xc) + 1)) {
  case 0:
    sub_08014FBC(&DAT_0202ed18,*(undefined4 *)(*(int *)(param_1 + 0xc) + 4));
    break;
  case 1:
    DAT_0202ed31 = (byte)*(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    DAT_0202ed3a = 0;
    break;
  case 2:
    if ((DAT_0202ed30 != '\x01') &&
       (iVar1 = *(int *)(param_1 + *(int *)(*(int *)(param_1 + 0xc) + 4) * 0x10 + 0x10), iVar1 != 0)
       ) {
      DAT_0202ed60 = iVar1 + 0x54;
    }
    break;
  case 3:
    DAT_0202ed48 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 4:
    DAT_0202ed4c = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 5:
    DAT_0202ed58 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 6:
    DAT_0202ed5c = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 7:
    DAT_0202ed64 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 8:
    DAT_0202ed68 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 9:
    DAT_0202ed6c = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 10:
    DAT_0202ed70 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 0xb:
    DAT_0202ed74 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 0xc:
    DAT_0202ed78 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 0xd:
    DAT_0202ed7c = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 0xe:
    DAT_0202ed80 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 0xf:
    DAT_0202ed31 = DAT_0202ed31 | 8;
    DAT_0202ed3a = 0;
    break;
  case 0x10:
    sub_08014FBC(&DAT_0202ed18,0);
    sub_08008144();
    DAT_02000f90 = DAT_02000f90 & 0xc1ff;
    break;
  case 0x11:
    sub_08014FBC(&DAT_0202ed18,3);
    sub_08008188();
  }
  return (ulonglong)in_lr << 0x20;
}

