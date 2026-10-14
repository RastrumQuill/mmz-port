// sub_080225F8 at 0x080225F8 (thumb)

longlong sub_080225F8(int param_1)

{
  int iVar1;
  uint in_lr;
  
  switch(*(undefined *)(*(int *)(param_1 + 0xc) + 1)) {
  case 0:
    sub_0801A7D8(&DAT_02030288,*(undefined4 *)(*(int *)(param_1 + 0xc) + 4));
    break;
  case 1:
    DAT_020302a1 = (byte)*(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    DAT_020302aa = 0;
    break;
  case 2:
    if ((DAT_020302a0 != '\x01') &&
       (iVar1 = *(int *)(param_1 + *(int *)(*(int *)(param_1 + 0xc) + 4) * 0x10 + 0x10), iVar1 != 0)
       ) {
      DAT_020302d0 = iVar1 + 0x54;
    }
    break;
  case 3:
    DAT_020302b8 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 4:
    DAT_020302bc = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 5:
    DAT_020302c8 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 6:
    DAT_020302cc = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 7:
    DAT_020302d4 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 8:
    DAT_020302d8 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 9:
    DAT_020302dc = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 10:
    DAT_020302e0 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 0xb:
    DAT_020302e4 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 0xc:
    DAT_020302e8 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 0xd:
    DAT_020302ec = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 0xe:
    DAT_020302f0 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    break;
  case 0xf:
    DAT_020302a1 = DAT_020302a1 | 8;
    DAT_020302aa = 0;
    break;
  case 0x10:
    sub_0801A7D8(&DAT_02030288,0);
    sub_08008DDC();
    DAT_020023c0 = DAT_020023c0 & 0xc1ff;
    break;
  case 0x11:
    sub_0801A7D8(&DAT_02030288,6);
    sub_08008E20();
  }
  return (ulonglong)in_lr << 0x20;
}

