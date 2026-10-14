// sub_08048C0C at 0x08048C0C (thumb)

undefined4 sub_08048C0C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_080489E4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  sub_080055FC(param_1 + 0x74,&DAT_082aec2c,param_1 + 0x4c,0xc);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x804906d;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x4c);
  uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c) < 0) {
    *(undefined *)(param_1 + 0xd) = 1;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 2;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  sub_08048CAC(param_1);
  return in_lr;
}

