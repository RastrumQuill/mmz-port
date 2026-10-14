// sub_08089CF8 at 0x08089CF8 (thumb)

undefined4 sub_08089CF8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08012580();
  iVar1 = sub_0800958C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xbc) = iVar1;
  *(int *)(param_1 + 0x58) = iVar1 + 0x1000;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  sub_080127E4(param_1,0x740d);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08341aa0,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 **)(param_1 + 0x7c) = (undefined4 *)(param_1 + 0xb4);
  return in_lr;
}

