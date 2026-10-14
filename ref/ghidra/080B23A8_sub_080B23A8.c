// sub_080B23A8 at 0x080B23A8 (thumb)

undefined4 sub_080B23A8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_0809C6C4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  if (*(char *)(param_1 + 0xc5) == '\0') {
    sub_0809C930(param_1,1);
    uVar1 = 0xffffff00;
  }
  else {
    sub_0809C930(param_1,2);
    uVar1 = 0x100;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(short *)(param_1 + 200) = (short)*(undefined4 *)(param_1 + 0x58);
  sub_0809C980(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x48;
  *(undefined **)(param_1 + 0x28) = &DAT_082b6c94;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (uint)*(byte *)(param_1 + 0x11) * 0x1000;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080B2374(param_1);
  return in_lr;
}

