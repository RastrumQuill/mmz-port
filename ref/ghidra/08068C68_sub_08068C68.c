// sub_08068C68 at 0x08068C68 (thumb)

undefined4 sub_08068C68(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x10) < 9) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    sub_080055FC(param_1 + 0x74,&DAT_082b0c94,param_1 + 0x4c,1);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x8068e75;
    *(undefined *)(param_1 + 0xd) = (&DAT_082b0d08)[*(byte *)(param_1 + 0x10)];
    sub_08068D14(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(undefined *)(param_1 + 0xd) = (&DAT_082b0d08)[*(byte *)(param_1 + 0x10)];
    sub_08068E5C(param_1);
  }
  return in_lr;
}

