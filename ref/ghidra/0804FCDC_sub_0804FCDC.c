// sub_0804FCDC at 0x0804FCDC (thumb)

undefined4 sub_0804FCDC(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  uVar2 = (uint)DAT_02022ada;
  if (((DAT_02022ada & 0x80) == 0) && (*(char *)(param_1 + 0x10) == '\x01')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(uint *)(param_1 + 0x90) = uVar2 & 0x80;
    *(char *)(param_1 + 0x94) = (char)(uVar2 & 0x80);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    sub_080489E4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082af358,param_1 + 0x4c,0x18);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x805024d;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0xff;
    *(undefined2 *)(param_1 + 0xc2) = 0;
    uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    sub_0804FDC4(param_1);
  }
  return in_lr;
}

