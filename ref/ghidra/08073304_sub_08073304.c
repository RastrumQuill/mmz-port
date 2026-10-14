// sub_08073304 at 0x08073304 (thumb)

undefined4 sub_08073304(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  sub_08048ACC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,3);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(undefined *)(param_1 + 0x1f) = 0;
  bVar1 = *(byte *)(iVar2 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined2 *)(param_1 + 0x48) = 0x40;
  *(undefined2 *)(param_1 + 0x4a) = 0x40;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b1558,param_1 + 0x4c,4);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x8073af1;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x1000;
  *(undefined4 *)(param_1 + 0xc0) = 10;
  *(undefined *)(param_1 + 0xc4) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = (uint)*(byte *)(param_1 + 0x11) * -0x200;
  }
  else {
    iVar2 = (uint)*(byte *)(param_1 + 0x11) << 9;
  }
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) = -(*(int *)(param_1 + 0x54) >> 4);
  *(undefined *)(param_1 + 0x12) = 0x10;
  *(undefined *)(param_1 + 0x13) = 0xf0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0807317C(param_1);
  return in_lr;
}

