// sub_08068294 at 0x08068294 (thumb)

undefined4 sub_08068294(int param_1)

{
  undefined4 in_lr;
  
  sub_080489E4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,0);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b0c64,param_1 + 0x4c,*(undefined *)(param_1 + 0x11));
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined *)(param_1 + 0x44) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  *(int *)(param_1 + 0x4c) = *(int *)(*(int *)(param_1 + 0x20) + 0x4c) + 0x800;
  *(int *)(param_1 + 0x50) = *(int *)(*(int *)(param_1 + 0x20) + 0x50) + -0x1e00;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08068360(param_1);
  return in_lr;
}

