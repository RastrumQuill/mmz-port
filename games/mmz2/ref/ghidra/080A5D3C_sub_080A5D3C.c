// sub_080A5D3C at 0x080A5D3C (thumb)

undefined4 sub_080A5D3C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_080126A0();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x5c10);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined *)(param_1 + 0x24) = (&DAT_0834501c)[*(byte *)(param_1 + 0x11)];
  *(undefined2 *)(param_1 + 0x50) = 0xc0;
  *(undefined2 *)(param_1 + 0x52) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08344f8c,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    iVar1 = *(int *)(iVar2 + 0x54) + -0xe00;
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x54) + 0xe00;
  }
  *(int *)(param_1 + 0x54) = iVar1;
  iVar2 = *(int *)(iVar2 + 0x58) + -0x2100;
  *(int *)(param_1 + 0x58) = iVar2;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       (short)(&DAT_080ef450)[(*(byte *)(param_1 + 0x24) + 0x80 & 0xff) + 0x40 & 0xff] * 0x18;
  *(int *)(param_1 + 0x58) =
       iVar2 + (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x24) + 0x80 & 0xff] * 0x18;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_080A5CDC(param_1);
  return in_lr;
}

