// sub_080962FC at 0x080962FC (thumb)

void sub_080962FC(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 0x54) = *param_2;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) =
       **(undefined4 **)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4);
  *(undefined *)(param_1 + 0x11) = 0x78;
  return;
}

